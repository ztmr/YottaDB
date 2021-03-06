/****************************************************************
 *								*
 * Copyright 2002, 2009 Fidelity Information Services, Inc	*
 *								*
 * Copyright (c) 2018 YottaDB LLC. and/or its subsidiaries.	*
 * All rights reserved.						*
 *								*
 *	This source code contains the intellectual property	*
 *	of its copyright holder(s), and is made available	*
 *	under a license.  If you do not know the terms of	*
 *	the license, please stop and do not read further.	*
 *								*
 ****************************************************************/

#include "mdef.h"

#include "startup.h"
#include "ydb_trans_numeric.h"
#include "mv_stent.h"
#include "gtmmsg.h"

#include "mstack_size_init.h"

GBLREF unsigned char	*stackbase, *stacktop, *stackwarn, *msp;

LITREF unsigned char	mvs_size[];

error_def(ERR_MSTACKSZNA);

void mstack_size_init(struct startup_vector *svec)
{
	int4		ydb_mstack_size, invalid_value = 0;
	unsigned char	*mstack_ptr;
	boolean_t	is_defined;
	DCL_THREADGBL_ACCESS;

	SETUP_THREADGBL_ACCESS;
	ydb_mstack_size = ydb_trans_numeric(YDBENVINDX_MSTACK_SIZE, &is_defined, IGNORE_ERRORS_TRUE, NULL);
	if (0 == ydb_mstack_size)
		ydb_mstack_size = MSTACK_DEF_SIZE;
	else if (MSTACK_MIN_SIZE > ydb_mstack_size)
	{
		invalid_value = ydb_mstack_size;
		ydb_mstack_size = MSTACK_MIN_SIZE;
	} else if (MSTACK_MAX_SIZE < ydb_mstack_size)
	{
		invalid_value = ydb_mstack_size;
		ydb_mstack_size = MSTACK_MAX_SIZE;
	}
	svec->user_stack_size = ydb_mstack_size * 1024;
	mstack_ptr = (unsigned char *)malloc(svec->user_stack_size);
	msp = stackbase = mstack_ptr + svec->user_stack_size - mvs_size[MVST_STORIG];
	stacktop = mstack_ptr + 2 * mvs_size[MVST_NTAB];
	stackwarn = stacktop + (16 * 1024);
	if (invalid_value)
		gtm_putmsg_csa(CSA_ARG(NULL) VARLSTCNT(6) ERR_MSTACKSZNA, 4, invalid_value,
							MSTACK_MIN_SIZE, MSTACK_MAX_SIZE, ydb_mstack_size);
	return;
}
