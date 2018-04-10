/****************************************************************
 *								*
 * Copyright (c) 2001-2018 Fidelity National Information	*
 * Services, Inc. and/or its subsidiaries. All rights reserved.	*
 *								*
 * Copyright (c) 2017-2018 YottaDB LLC. and/or its subsidiaries.*
 * All rights reserved.						*
 *								*
 *	This source code contains the intellectual property	*
 *	of its copyright holder(s), and is made available	*
 *	under a license.  If you do not know the terms of	*
 *	the license, please stop and do not read further.	*
 *								*
 ****************************************************************/


const static readonly int error_ansi[] = {
	   0,	/* ACK */
	   0,	/* BREAKZST */
	   0,	/* BADACCMTHD */
	   0,	/* BADJPIPARAM */
	   0,	/* BADSYIPARAM */
	   0,	/* BITMAPSBAD */
	   0,	/* BREAK */
	   0,	/* BREAKDEA */
	   0,	/* BREAKZBA */
	   0,	/* STATCNT */
	   0,	/* BTFAIL */
	   0,	/* MUPRECFLLCK */
	   0,	/* CMD */
	   0,	/* COLON */
	   0,	/* COMMA */
	   0,	/* COMMAORRPAREXP */
	   0,	/* COMMENT */
	   0,	/* CTRAP */
	   0,	/* CTRLC */
	   0,	/* CTRLY */
	   0,	/* DBCCERR */
	   0,	/* DUPTOKEN */
	   0,	/* DBJNLNOTMATCH */
	   0,	/* DBFILERR */
	   0,	/* DBNOTGDS */
	   0,	/* DBOPNERR */
	   0,	/* DBRDERR */
	   0,	/* CCEDUMPNOW */
	   0,	/* DEVPARINAP */
	   0,	/* RECORDSTAT */
	   0,	/* NOTGBL */
	   0,	/* DEVPARPROT */
	   0,	/* PREMATEOF */
	   0,	/* GVINVALID */
	   0,	/* DEVPARTOOBIG */
	   0,	/* DEVPARUNK */
	   0,	/* DEVPARVALREQ */
	   0,	/* DEVPARMNEG */
	   0,	/* DSEBLKRDFAIL */
	   0,	/* DSEFAIL */
	   0,	/* NOTALLREPLON */
	   0,	/* BADLKIPARAM */
	   0,	/* JNLREADBOF */
	   0,	/* DVIKEYBAD */
	   0,	/* ENQ */
	   0,	/* EQUAL */
	   0,	/* ERRORSUMMARY */
	   0,	/* ERRWEXC */
	   0,	/* ERRWIOEXC */
	   0,	/* ERRWZBRK */
	   0,	/* ERRWZTRAP */
	   0,	/* NUMUNXEOR */
	   0,	/* EXPR */
	   0,	/* STRUNXEOR */
	   0,	/* JNLEXTEND */
	   0,	/* FCHARMAXARGS */
	   0,	/* FCNSVNEXPECTED */
	   2,	/* FNARGINC */
	   0,	/* JNLACCESS */
	  44,	/* TRANSNOSTART */
	   0,	/* FNUMARG */
	   0,	/* FOROFLOW */
	   0,	/* YDIRTSZ */
	   0,	/* JNLSUCCESS */
	  29,	/* GBLNAME */
	   0,	/* GBLOFLOW */
	   0,	/* CORRUPT */
	   0,	/* GTMCHECK */
	   0,	/* GVDATAFAIL */
	   0,	/* EORNOTFND */
	   0,	/* GVGETFAIL */
	   0,	/* GVIS */
	   0,	/* GVKILLFAIL */
	   1,	/* GVNAKED */
	   0,	/* GVNEXTARG */
	   0,	/* GVORDERFAIL */
	   0,	/* GVPUTFAIL */
	   0,	/* PATTABSYNTAX */
	   0,	/* GVSUBOFLOW */
	   7,	/* GVUNDEF */
	   0,	/* TRANSNEST */
	   0,	/* INDEXTRACHARS */
	   0,	/* CORRUPTNODE */
	   0,	/* INDRMAXLEN */
	   0,	/* UNUSEDMSG268 */
	   0,	/* INTEGERRS */
	   0,	/* INVCMD */
	   0,	/* INVFCN */
	   0,	/* INVOBJ */
	   8,	/* INVSVN */
	   0,	/* IOEOF */
	   0,	/* IONOTOPEN */
	   0,	/* MUPIPINFO */
	   0,	/* UNUSEDMSG277 */
	   0,	/* JOBFAIL */
	  13,	/* JOBLABOFF */
	   0,	/* JOBPARNOVAL */
	   0,	/* JOBPARNUM */
	   0,	/* JOBPARSTR */
	   0,	/* JOBPARUNK */
	   0,	/* JOBPARVALREQ */
	   0,	/* JUSTFRACT */
	   0,	/* KEY2BIG */
	   0,	/* LABELEXPECTED */
	  13,	/* LABELMISSING */
	  13,	/* LABELUNKNOWN */
	   9,	/* DIVZERO */
	   0,	/* LKNAMEXPECTED */
	   0,	/* JNLRDERR */
	  25,	/* LOADRUNNING */
	   0,	/* LPARENMISSING */
	   0,	/* LSEXPECTED */
	   0,	/* LVORDERARG */
	   0,	/* MAXFORARGS */
	   0,	/* TRANSMINUS */
	   0,	/* MAXNRSUBSCRIPTS */
	  75,	/* MAXSTRLEN */
	   0,	/* ENCRYPTCONFLT2 */
	   0,	/* JNLFILOPN */
	   0,	/* MBXRDONLY */
	   0,	/* JNLINVALID */
	   0,	/* MBXWRTONLY */
	   0,	/* MEMORY */
	  70,	/* MTBLKTOOBIG */
	  70,	/* MTBLKTOOSM */
	  70,	/* MTFIXRECSZ */
	   0,	/* MTIS */
	   0,	/* MTRDBADBLK */
	  62,	/* MTRDONLY */
	   0,	/* MTRDTHENWRT */
	  71,	/* MTRECGTRBLK */
	  72,	/* MTRECTOOBIG */
	  72,	/* MTRECTOOSM */
	   0,	/* JNLTMQUAL3 */
	  57,	/* MULTLAB */
	   0,	/* BLKCNT */
	   0,	/* CCEDUMPOFF */
	   0,	/* NOPLACE */
	   0,	/* JNLCLOSE */
	   0,	/* NOTPRINCIO */
	   0,	/* NOTTOEOFONPUT */
	   0,	/* NOZBRK */
	   0,	/* NULSUBSC */
	  92,	/* NUMOFLOW */
	   0,	/* PARFILSPC */
	   0,	/* PATCLASS */
	  10,	/* PATCODE */
	   0,	/* PATLIT */
	   0,	/* PATMAXLEN */
	   0,	/* LPARENREQD */
	  10,	/* PATUPPERLIM */
	   0,	/* PCONDEXPECTED */
	   0,	/* PRCNAMLEN */
	   3,	/* RANDARGNEG */
	   0,	/* DBPRIVERR */
	  75,	/* REC2BIG */
	   0,	/* RHMISSING */
	  62,	/* DEVICEREADONLY */
	   0,	/* COLLDATAEXISTS */
	  88,	/* ROUTINEUNKNOWN */
	   0,	/* RPARENMISSING */
	   0,	/* RTNNAME */
	   0,	/* VIEWGVN */
	   0,	/* RTSLOC */
	   0,	/* RWARG */
	   0,	/* RWFORMAT */
	   0,	/* JNLWRTDEFER */
	   4,	/* SELECTFALSE */
	   0,	/* SPOREOL */
	   0,	/* SRCLIN */
	   0,	/* SRCLOC */
	   0,	/* SRCLOCUNKNOWN */
	   0,	/* STACKCRIT */
	   0,	/* STACKOFLOW */
	   0,	/* STACKUNDERFLO */
	   0,	/* STRINGOFLOW */
	   0,	/* SVNOSET */
	   0,	/* VIEWFN */
	   0,	/* TERMASTQUOTA */
	   5,	/* TEXTARG */
	   0,	/* TMPSTOREMAX */
	   0,	/* VIEWCMD */
	   0,	/* JNI */
	   0,	/* TXTSRCFMT */
	   0,	/* UIDMSG */
	   0,	/* UIDSND */
	   6,	/* LVUNDEF */
	   0,	/* UNIMPLOP */
	  39,	/* VAREXPECTED */
	   0,	/* VARRECBLKSZ */
	   0,	/* MAXARGCNT */
	   0,	/* GTMSECSHRSEMGET */
	   0,	/* VIEWARGCNT */
	   0,	/* GTMSECSHRDMNSTARTED */
	   0,	/* ZATTACHERR */
	   0,	/* ZDATEFMT */
	   0,	/* ZEDFILSPEC */
	  75,	/* ZFILENMTOOLONG */
	   0,	/* ZFILKEYBAD */
	   0,	/* ZFILNMBAD */
	   0,	/* ZGOTOLTZERO */
	   0,	/* ZGOTOTOOBIG */
	   0,	/* ZLINKFILE */
	   0,	/* ZPARSETYPE */
	   0,	/* ZPARSFLDBAD */
	   0,	/* ZPIDBADARG */
	   0,	/* UNUSEDMSG390 */
	   0,	/* UNUSEDMSG391 */
	  13,	/* ZPRTLABNOTFND */
	   0,	/* VIEWAMBIG */
	   0,	/* VIEWNOTFOUND */
	   0,	/* UNUSEDMSG395 */
	   0,	/* INVSPECREC */
	   0,	/* UNUSEDMSG397 */
	   0,	/* ZSRCHSTRMCT */
	   0,	/* VERSION */
	   0,	/* MUNOTALLSEC */
	   0,	/* MUSECDEL */
	   0,	/* MUSECNOTDEL */
	   0,	/* RPARENREQD */
	  26,	/* ZGBLDIRACC */
	   0,	/* GVNAKEDEXTNM */
	   0,	/* EXTGBLDEL */
	   0,	/* DSEWCINITCON */
	   0,	/* LASTFILCMPLD */
	   0,	/* NOEXCNOZTRAP */
	   0,	/* UNSDCLASS */
	   0,	/* UNSDDTYPE */
	   0,	/* ZCUNKTYPE */
	   0,	/* ZCUNKMECH */
	   0,	/* ZCUNKQUAL */
	   0,	/* JNLDBTNNOMATCH */
	   0,	/* ZCALLTABLE */
	  58,	/* ZCARGMSMTCH */
	  58,	/* ZCCONMSMTCH */
	   0,	/* ZCOPT0 */
	   0,	/* UNUSEDMSG420 */
	   0,	/* UNUSEDMSG421 */
	   0,	/* ZCPOSOVR */
	   0,	/* ZCINPUTREQ */
	   0,	/* JNLTNOUTOFSEQ */
	   0,	/* ACTRANGE */
	   0,	/* ZCCONVERT */
	   0,	/* ZCRTENOTF */
	   0,	/* GVRUNDOWN */
	   0,	/* LKRUNDOWN */
	   0,	/* IORUNDOWN */
	   0,	/* FILENOTFND */
	   0,	/* MUFILRNDWNFL */
	   0,	/* JNLTMQUAL1 */
	   0,	/* FORCEDHALT */
	   0,	/* LOADEOF */
	   0,	/* WILLEXPIRE */
	   0,	/* LOADEDBG */
	   0,	/* LABELONLY */
	   0,	/* MUREORGFAIL */
	   0,	/* GVZPREVFAIL */
	  21,	/* MULTFORMPARM */
	  16,	/* QUITARGUSE */
	   0,	/* NAMEEXPECTED */
	  11,	/* FALLINTOFLST */
	  16,	/* NOTEXTRINSIC */
	   0,	/* GTMSECSHRREMSEMFAIL */
	  20,	/* FMLLSTMISSING */
	  58,	/* ACTLSTTOOLONG */
	   0,	/* ACTOFFSET */
	   0,	/* MAXACTARG */
	   0,	/* GTMSECSHRREMSEM */
	   0,	/* JNLTMQUAL2 */
	   0,	/* GDINVALID */
	   0,	/* ASSERT */
	   0,	/* MUFILRNDWNSUC */
	   0,	/* LOADEDSZ */
	  16,	/* QUITARGLST */
	  17,	/* QUITARGREQD */
	   0,	/* CRITRESET */
	   0,	/* UNKNOWNFOREX */
	   0,	/* FSEXP */
	   0,	/* WILDCARD */
	   0,	/* DIRONLY */
	   0,	/* FILEPARSE */
	   0,	/* QUALEXP */
	   0,	/* BADQUAL */
	   0,	/* QUALVAL */
	   0,	/* ZROSYNTAX */
	   0,	/* COMPILEQUALS */
	   0,	/* ZLNOOBJECT */
	   0,	/* ZLMODULE */
	   0,	/* DBBLEVMX */
	   0,	/* DBBLEVMN */
	   0,	/* DBBSIZMN */
	   0,	/* DBBSIZMX */
	   0,	/* DBRSIZMN */
	   0,	/* DBRSIZMX */
	   0,	/* DBCMPNZRO */
	   0,	/* DBSTARSIZ */
	   0,	/* DBSTARCMP */
	   0,	/* DBCMPMX */
	   0,	/* DBKEYMX */
	   0,	/* DBKEYMN */
	   0,	/* DBCMPBAD */
	   0,	/* DBKEYORD */
	   0,	/* DBPTRNOTPOS */
	   0,	/* DBPTRMX */
	   0,	/* DBPTRMAP */
	   0,	/* IFBADPARM */
	   0,	/* IFNOTINIT */
	   0,	/* GTMSECSHRSOCKET */
	   0,	/* LOADBGSZ */
	   0,	/* LOADFMT */
	   0,	/* LOADFILERR */
	   0,	/* NOREGION */
	   0,	/* PATLOAD */
	   0,	/* EXTRACTFILERR */
	   0,	/* FREEZE */
	   0,	/* NOSELECT */
	   0,	/* EXTRFAIL */
	   0,	/* LDBINFMT */
	   0,	/* NOPREVLINK */
	   0,	/* CCEDUMPON */
	   0,	/* CCEDMPQUALREQ */
	   0,	/* CCEDBDUMP */
	   0,	/* CCEDBNODUMP */
	   0,	/* CCPMBX */
	   0,	/* REQRUNDOWN */
	   0,	/* CCPINTQUE */
	   0,	/* CCPBADMSG */
	   0,	/* CNOTONSYS */
	   0,	/* CCPNAME */
	   0,	/* CCPNOTFND */
	   0,	/* OPRCCPSTOP */
	   0,	/* SELECTSYNTAX */
	   0,	/* LOADABORT */
	   0,	/* FNOTONSYS */
	   0,	/* AMBISYIPARAM */
	   0,	/* PREVJNLNOEOF */
	   0,	/* LKSECINIT */
	   0,	/* MTDOSLAB */
	   0,	/* MTDOSFOR */
	   0,	/* MTINVLAB */
	   0,	/* TXTSRCMAT */
	   0,	/* CCENOGROUP */
	   0,	/* BADDBVER */
	   0,	/* LINKVERSION */
	   0,	/* TOTALBLKMAX */
	   0,	/* LOADCTRLY */
	   0,	/* CLSTCONFLICT */
	   0,	/* SRCNAM */
	   0,	/* LCKGONE */
	   0,	/* SUB2LONG */
	   0,	/* EXTRACTCTRLY */
	   0,	/* CCENOWORLD */
	   0,	/* GVQUERYFAIL */
	   0,	/* LCKSCANCELLED */
	   0,	/* INVNETFILNM */
	   0,	/* NETDBOPNERR */
	   0,	/* BADSRVRNETMSG */
	   0,	/* BADGTMNETMSG */
	   0,	/* SERVERERR */
	   0,	/* NETFAIL */
	   0,	/* NETLCKFAIL */
	   0,	/* TTINVFILTER */
	   0,	/* MTANSILAB */
	   0,	/* MTANSIFOR */
	   0,	/* BADTRNPARAM */
	   0,	/* DSEONLYBGMM */
	   0,	/* DSEINVLCLUSFN */
	  18,	/* RDFLTOOSHORT */
	   0,	/* TIMRBADVAL */
	   0,	/* CCENOSYSLCK */
	   0,	/* CCPGRP */
	   0,	/* UNSOLCNTERR */
	   0,	/* BACKUPCTRL */
	   0,	/* NOCCPPID */
	   0,	/* CCPJNLOPNERR */
	   0,	/* LCKSGONE */
	   0,	/* UNUSEDMSG560 */
	   0,	/* DBFILOPERR */
	   0,	/* CCERDERR */
	   0,	/* CCEDBCL */
	   0,	/* CCEDBNTCL */
	   0,	/* CCEWRTERR */
	   0,	/* CCEBADFN */
	   0,	/* CCERDTIMOUT */
	   0,	/* CCPSIGCONT */
	   0,	/* CCEBGONLY */
	   0,	/* CCENOCCP */
	   0,	/* CCECCPPID */
	   0,	/* CCECLSTPRCS */
	   0,	/* ZSHOWBADFUNC */
	   0,	/* NOTALLJNLEN */
	   0,	/* BADLOCKNEST */
	   0,	/* NOLBRSRC */
	   0,	/* INVZSTEP */
	   0,	/* ZSTEPARG */
	   0,	/* INVSTRLEN */
	   0,	/* RECCNT */
	   0,	/* TEXT */
	   0,	/* ZWRSPONE */
	   0,	/* FILEDEL */
	   0,	/* JNLBADLABEL */
	   0,	/* JNLREADEOF */
	   0,	/* JNLRECFMT */
	   0,	/* BLKTOODEEP */
	   0,	/* NESTFORMP */
	   0,	/* BINHDR */
	   0,	/* GOQPREC */
	   0,	/* LDGOQFMT */
	   0,	/* BEGINST */
	   0,	/* INVMVXSZ */
	   0,	/* JNLWRTNOWWRTR */
	   0,	/* GTMSECSHRSHMCONCPROC */
	   0,	/* JNLINVALLOC */
	   0,	/* JNLINVEXT */
	   0,	/* MUPCLIERR */
	   0,	/* JNLTMQUAL4 */
	   0,	/* GTMSECSHRREMSHM */
	   0,	/* GTMSECSHRREMFILE */
	   0,	/* MUNODBNAME */
	   0,	/* FILECREATE */
	   0,	/* FILENOTCREATE */
	   0,	/* JNLPROCSTUCK */
	   0,	/* INVGLOBALQUAL */
	   0,	/* COLLARGLONG */
	   0,	/* NOPINI */
	   0,	/* DBNOCRE */
	   0,	/* JNLSPACELOW */
	   0,	/* DBCOMMITCLNUP */
	   0,	/* BFRQUALREQ */
	   0,	/* REQDVIEWPARM */
	   0,	/* COLLFNMISSING */
	   0,	/* JNLACTINCMPLT */
	   0,	/* NCTCOLLDIFF */
	   0,	/* DLRCUNXEOR */
	   0,	/* DLRCTOOBIG */
	   0,	/* WCERRNOTCHG */
	   0,	/* WCWRNNOTCHG */
	   0,	/* ZCWRONGDESC */
	   0,	/* MUTNWARN */
	   0,	/* GTMSECSHRUPDDBHDR */
	   0,	/* LCKSTIMOUT */
	   0,	/* CTLMNEMAXLEN */
	   0,	/* CTLMNEXPECTED */
	   0,	/* USRIOINIT */
	   0,	/* CRITSEMFAIL */
	   0,	/* TERMWRITE */
	   0,	/* COLLTYPVERSION */
	   0,	/* LVNULLSUBS */
	   0,	/* GVREPLERR */
	   0,	/* MTIOERR */
	  72,	/* RMWIDTHPOS */
	  13,	/* OFFSETINV */
	   0,	/* JOBPARTOOLONG */
	   0,	/* UNUSEDMSG637 */
	   0,	/* RUNPARAMERR */
	   0,	/* FNNAMENEG */
	   0,	/* ORDER2 */
	   0,	/* MUNOUPGRD */
	   0,	/* REORGCTRLY */
	   0,	/* TSTRTPARM */
	   0,	/* TRIGNAMENF */
	   0,	/* TRIGZBREAKREM */
	  44,	/* TLVLZERO */
	  27,	/* TRESTNOT */
	  41,	/* TPLOCK */
	  42,	/* TPQUIT */
	   0,	/* TPFAIL */
	   0,	/* TPRETRY */
	   0,	/* TPTOODEEP */
	   0,	/* ZDEFACTIVE */
	   0,	/* ZDEFOFLOW */
	   0,	/* MUPRESTERR */
	   0,	/* MUBCKNODIR */
	   0,	/* TRANS2BIG */
	   0,	/* INVBITLEN */
	   0,	/* INVBITSTR */
	   0,	/* INVBITPOS */
	   0,	/* PARNORMAL */
	   0,	/* PARBUFSM */
	  72,	/* RMWIDTHTOOBIG */
	   0,	/* PATTABNOTFND */
	   0,	/* OBJFILERR */
	   0,	/* SRCFILERR */
	  95,	/* NEGFRACPWR */
	   0,	/* MTNOSKIP */
	   0,	/* CETOOMANY */
	   0,	/* CEUSRERROR */
	   0,	/* CEBIGSKIP */
	   0,	/* CETOOLONG */
	   0,	/* CENOINDIR */
	   0,	/* COLLATIONUNDEF */
	   0,	/* UNUSEDMSG675 */
	   0,	/* GTMSECSHRSRVF */
	   0,	/* FREEZECTRL */
	   0,	/* JNLFLUSH */
	   0,	/* CCPSIGDMP */
	   0,	/* NOPRINCIO */
	   0,	/* INVPORTSPEC */
	   0,	/* INVADDRSPEC */
	   0,	/* MUREENCRYPTEND */
	   0,	/* CRYPTJNLMISMATCH */
	  80,	/* SOCKWAIT */
	  81,	/* SOCKACPT */
	  80,	/* SOCKINIT */
	  81,	/* OPENCONN */
	   0,	/* DEVNOTIMP */
	   0,	/* UNUSEDMSG688 */
	   0,	/* DBREMOTE */
	   0,	/* JNLREQUIRED */
	   0,	/* TPMIXUP */
	   0,	/* HTOFLOW */
	  72,	/* RMNOBIGRECORD */
	   0,	/* DBBMSIZE */
	   0,	/* DBBMBARE */
	   0,	/* DBBMINV */
	   0,	/* DBBMMSTR */
	   0,	/* DBROOTBURN */
	   0,	/* REPLSTATEERR */
	   0,	/* UNUSEDMSG702 */
	   0,	/* DBDIRTSUBSC */
	   0,	/* TIMEROVFL */
	   0,	/* GTMASSERT */
	   0,	/* DBFHEADERR4 */
	   0,	/* DBADDRANGE */
	   0,	/* DBQUELINK */
	   0,	/* DBCRERR */
	   0,	/* MUSTANDALONE */
	   0,	/* MUNOACTION */
	   0,	/* RMBIGSHARE */
	   0,	/* TPRESTART */
	   0,	/* SOCKWRITE */
	   0,	/* DBCNTRLERR */
	   0,	/* NOTERMENV */
	   0,	/* NOTERMENTRY */
	   0,	/* NOTERMINFODB */
	   0,	/* INVACCMETHOD */
	   0,	/* JNLOPNERR */
	   0,	/* JNLRECTYPE */
	   0,	/* JNLTRANSGTR */
	   0,	/* JNLTRANSLSS */
	   0,	/* JNLWRERR */
	   0,	/* FILEIDMATCH */
	   0,	/* EXTSRCLIN */
	   0,	/* EXTSRCLOC */
	   0,	/* UNUSEDMSG728 */
	   0,	/* ERRCALL */
	   0,	/* ZCCTENV */
	   0,	/* ZCCTOPN */
	   0,	/* ZCCTNULLF */
	   0,	/* ZCUNAVAIL */
	   0,	/* ZCENTNAME */
	   0,	/* ZCCOLON */
	   0,	/* ZCRTNTYP */
	   0,	/* ZCRCALLNAME */
	   0,	/* ZCRPARMNAME */
	   0,	/* ZCUNTYPE */
	   0,	/* ZCMLTSTATUS */
	   0,	/* ZCSTATUSRET */
	   0,	/* ZCMAXPARAM */
	   0,	/* ZCCSQRBR */
	   0,	/* ZCPREALLNUMEX */
	   0,	/* ZCPREALLVALPAR */
	   0,	/* VERMISMATCH */
	   0,	/* JNLCNTRL */
	   0,	/* TRIGNAMBAD */
	   0,	/* BUFRDTIMEOUT */
	   0,	/* INVALIDRIP */
	   0,	/* BLKSIZ512 */
	   0,	/* MUTEXERR */
	   0,	/* JNLVSIZE */
	   0,	/* MUTEXLCKALERT */
	   0,	/* MUTEXFRCDTERM */
	   0,	/* GTMSECSHR */
	   0,	/* GTMSECSHRSRVFID */
	   0,	/* GTMSECSHRSRVFIL */
	   0,	/* FREEBLKSLOW */
	   0,	/* PROTNOTSUP */
	   0,	/* DELIMSIZNA */
	   0,	/* INVCTLMNE */
	   0,	/* SOCKLISTEN */
	   0,	/* UNUSEDMSG762 */
	   0,	/* ADDRTOOLONG */
	   0,	/* GTMSECSHRGETSEMFAIL */
	   0,	/* CPBEYALLOC */
	   0,	/* DBRDONLY */
	   0,	/* DUPTN */
	   0,	/* TRESTLOC */
	   0,	/* REPLPOOLINST */
	   0,	/* ZCVECTORINDX */
	   0,	/* REPLNOTON */
	   0,	/* JNLMOVED */
	   0,	/* EXTRFMT */
	   0,	/* CALLERID */
	   0,	/* KRNLKILL */
	   0,	/* MEMORYRECURSIVE */
	   0,	/* FREEZEID */
	   0,	/* BLKWRITERR */
	   0,	/* UNUSEDMSG781 */
	   0,	/* PINENTRYERR */
	   0,	/* BCKUPBUFLUSH */
	   0,	/* NOFORKCORE */
	   0,	/* JNLREAD */
	   0,	/* JNLMINALIGN */
	   0,	/* JOBSTARTCMDFAIL */
	   0,	/* JNLPOOLSETUP */
	   0,	/* JNLSTATEOFF */
	   0,	/* RECVPOOLSETUP */
	   0,	/* REPLCOMM */
	   0,	/* NOREPLCTDREG */
	   0,	/* REPLINFO */
	   0,	/* REPLWARN */
	   0,	/* REPLERR */
	   0,	/* JNLNMBKNOTPRCD */
	   0,	/* REPLFILIOERR */
	   0,	/* REPLBRKNTRANS */
	   0,	/* TTWIDTHTOOBIG */
	   0,	/* REPLLOGOPN */
	   0,	/* REPLFILTER */
	   0,	/* GBLMODFAIL */
	   0,	/* TTLENGTHTOOBIG */
	   0,	/* TPTIMEOUT */
	   0,	/* DEFEREVENT */
	   0,	/* JNLFILNOTCHG */
	   0,	/* EVENTLOGERR */
	   0,	/* UPDATEFILEOPEN */
	   0,	/* JNLBADRECFMT */
	   0,	/* NULLCOLLDIFF */
	   0,	/* MUKILLIP */
	   0,	/* JNLRDONLY */
	   0,	/* ANCOMPTINC */
	   0,	/* ABNCOMPTINC */
	   0,	/* RECLOAD */
	   0,	/* SOCKNOTFND */
	   0,	/* CURRSOCKOFR */
	  79,	/* SOCKETEXIST */
	  76,	/* LISTENPASSBND */
	   0,	/* DBCLNUPINFO */
	   0,	/* MUNODWNGRD */
	   0,	/* REPLTRANS2BIG */
	   0,	/* RDFLTOOLONG */
	   0,	/* MUNOFINISH */
	   0,	/* DBFILEXT */
	   0,	/* JNLFSYNCERR */
	   0,	/* UNUSEDMSG825 */
	   0,	/* ZCPREALLVALINV */
	   0,	/* NEWJNLFILECREAT */
	   0,	/* DSKSPACEFLOW */
	   0,	/* GVINCRFAIL */
	   0,	/* ISOLATIONSTSCHN */
	   0,	/* REPLGBL2LONG */
	   0,	/* TRACEON */
	   0,	/* TOOMANYCLIENTS */
	   0,	/* NOEXCLUDE */
	   0,	/* GVINCRISOLATION */
	   0,	/* EXCLUDEREORG */
	   0,	/* REORGINC */
	   0,	/* ASC2EBCDICCONV */
	   0,	/* GTMSECSHRSTART */
	   0,	/* DBVERPERFWARN1 */
	   0,	/* FILEIDGBLSEC */
	   0,	/* GBLSECNOTGDS */
	   0,	/* BADGBLSECVER */
	   0,	/* RECSIZENOTEVEN */
	   0,	/* BUFFLUFAILED */
	   0,	/* MUQUALINCOMP */
	   0,	/* DISTPATHMAX */
	   0,	/* FILEOPENFAIL */
	   0,	/* UNUSEDMSG851 */
	   0,	/* GTMSECSHRPERM */
	   0,	/* YDBDISTUNDEF */
	   0,	/* SYSCALL */
	   0,	/* MAXGTMPATH */
	   0,	/* TROLLBK2DEEP */
	   0,	/* INVROLLBKLVL */
	   0,	/* OLDBINEXTRACT */
	   0,	/* ACOMPTBINC */
	   0,	/* NOTREPLICATED */
	   0,	/* DBPREMATEOF */
	   0,	/* KILLBYSIG */
	   0,	/* KILLBYSIGUINFO */
	   0,	/* KILLBYSIGSINFO1 */
	   0,	/* KILLBYSIGSINFO2 */
	   0,	/* SIGILLOPC */
	   0,	/* SIGILLOPN */
	   0,	/* SIGILLADR */
	   0,	/* SIGILLTRP */
	   0,	/* SIGPRVOPC */
	   0,	/* SIGPRVREG */
	   0,	/* SIGCOPROC */
	   0,	/* SIGBADSTK */
	   0,	/* SIGADRALN */
	   0,	/* SIGADRERR */
	   0,	/* SIGOBJERR */
	   0,	/* SIGINTDIV */
	   0,	/* SIGINTOVF */
	   0,	/* SIGFLTDIV */
	   0,	/* SIGFLTOVF */
	   0,	/* SIGFLTUND */
	   0,	/* SIGFLTRES */
	   0,	/* SIGFLTINV */
	   0,	/* SIGMAPERR */
	   0,	/* SIGACCERR */
	   0,	/* TRNLOGFAIL */
	   0,	/* INVDBGLVL */
	   0,	/* DBMAXNRSUBS */
	   0,	/* GTMSECSHRSCKSEL */
	   0,	/* GTMSECSHRTMOUT */
	   0,	/* GTMSECSHRRECVF */
	   0,	/* GTMSECSHRSENDF */
	   0,	/* SIZENOTVALID8 */
	   0,	/* GTMSECSHROPCMP */
	   0,	/* GTMSECSHRSUIDF */
	   0,	/* GTMSECSHRSGIDF */
	   0,	/* GTMSECSHRSSIDF */
	   0,	/* GTMSECSHRFORKF */
	   0,	/* DBFSYNCERR */
	   0,	/* SECONDAHEAD */
	   0,	/* SCNDDBNOUPD */
	   0,	/* MUINFOUINT4 */
	   0,	/* NLMISMATCHCALC */
	   0,	/* RELINKCTLFULL */
	   0,	/* MUPIPSET2BIG */
	   0,	/* DBBADNSUB */
	   0,	/* DBBADKYNM */
	   0,	/* DBBADPNTR */
	   0,	/* DBBNPNTR */
	   0,	/* DBINCLVL */
	   0,	/* DBBFSTAT */
	   0,	/* DBBDBALLOC */
	   0,	/* DBMRKFREE */
	   0,	/* DBMRKBUSY */
	   0,	/* DBBSIZZRO */
	   0,	/* DBSZGT64K */
	   0,	/* DBNOTMLTP */
	   0,	/* DBTNTOOLG */
	   0,	/* DBBPLMLT512 */
	   0,	/* DBBPLMGT2K */
	   0,	/* MUINFOUINT8 */
	   0,	/* DBBPLNOT512 */
	   0,	/* MUINFOSTR */
	   0,	/* DBUNDACCMT */
	   0,	/* DBTNNEQ */
	   0,	/* MUPGRDSUCC */
	   0,	/* DBDSRDFMTCHNG */
	   0,	/* DBFGTBC */
	   0,	/* DBFSTBC */
	   0,	/* DBFSTHEAD */
	   0,	/* DBCREINCOMP */
	   0,	/* DBFLCORRP */
	   0,	/* DBHEADINV */
	   0,	/* DBINCRVER */
	   0,	/* DBINVGBL */
	   0,	/* DBKEYGTIND */
	   0,	/* DBGTDBMAX */
	   0,	/* DBKGTALLW */
	   0,	/* DBLTSIBL */
	   0,	/* DBLRCINVSZ */
	   0,	/* MUREUPDWNGRDEND */
	   0,	/* DBLOCMBINC */
	   0,	/* DBLVLINC */
	   0,	/* DBMBSIZMX */
	   0,	/* DBMBSIZMN */
	   0,	/* DBMBTNSIZMX */
	   0,	/* DBMBMINCFRE */
	   0,	/* DBMBPINCFL */
	   0,	/* DBMBPFLDLBM */
	   0,	/* DBMBPFLINT */
	   0,	/* DBMBPFLDIS */
	   0,	/* DBMBPFRDLBM */
	   0,	/* DBMBPFRINT */
	   0,	/* DBMAXKEYEXC */
	   0,	/* DBMXRSEXCMIN */
	   0,	/* MUPIPSET2SML */
	   0,	/* DBREADBM */
	   0,	/* DBCOMPTOOLRG */
	   0,	/* DBVERPERFWARN2 */
	   0,	/* DBRBNTOOLRG */
	   0,	/* DBRBNLBMN */
	   0,	/* DBRBNNEG */
	   0,	/* DBRLEVTOOHI */
	   0,	/* DBRLEVLTONE */
	   0,	/* DBSVBNMIN */
	   0,	/* DBTTLBLK0 */
	   0,	/* DBNOTDB */
	   0,	/* DBTOTBLK */
	   0,	/* DBTN */
	   0,	/* DBNOREGION */
	   0,	/* DBTNRESETINC */
	   0,	/* DBTNLTCTN */
	   0,	/* DBTNRESET */
	   0,	/* MUTEXRSRCCLNUP */
	   0,	/* SEMWT2LONG */
	   0,	/* REPLINSTOPEN */
	   0,	/* REPLINSTCLOSE */
	   0,	/* JOBSETUP */
	   0,	/* DBCRERR8 */
	   0,	/* NUMPROCESSORS */
	   0,	/* DBADDRANGE8 */
	   0,	/* RNDWNSEMFAIL */
	   0,	/* GTMSECSHRSHUTDN */
	   0,	/* NOSPACECRE */
	   0,	/* LOWSPACECRE */
	   0,	/* WAITDSKSPACE */
	   0,	/* OUTOFSPACE */
	   0,	/* JNLPVTINFO */
	   0,	/* NOSPACEEXT */
	   0,	/* WCBLOCKED */
	   0,	/* REPLJNLCLOSED */
	   0,	/* RENAMEFAIL */
	   0,	/* FILERENAME */
	   0,	/* JNLBUFINFO */
	   0,	/* SDSEEKERR */
	   0,	/* LOCALSOCKREQ */
	   0,	/* TPNOTACID */
	   0,	/* JNLSETDATA2LONG */
	   0,	/* JNLNEWREC */
	   0,	/* REPLFTOKSEM */
	   0,	/* SOCKNOTPASSED */
	   0,	/* UNUSEDMSG1002 */
	   0,	/* UNUSEDMSG1003 */
	   0,	/* CONNSOCKREQ */
	   0,	/* REPLEXITERR */
	   0,	/* MUDESTROYSUC */
	   0,	/* DBRNDWN */
	   0,	/* MUDESTROYFAIL */
	   0,	/* NOTALLDBOPN */
	   0,	/* MUSELFBKUP */
	   0,	/* DBDANGER */
	   0,	/* UNUSEDMSG1012 */
	   0,	/* TCGETATTR */
	   0,	/* TCSETATTR */
	   0,	/* IOWRITERR */
	   0,	/* REPLINSTWRITE */
	   0,	/* DBBADFREEBLKCTR */
	   0,	/* REQ2RESUME */
	   0,	/* TIMERHANDLER */
	   0,	/* FREEMEMORY */
	   0,	/* MUREPLSECDEL */
	   0,	/* MUREPLSECNOTDEL */
	   0,	/* MUJPOOLRNDWNSUC */
	   0,	/* MURPOOLRNDWNSUC */
	   0,	/* MUJPOOLRNDWNFL */
	   0,	/* MURPOOLRNDWNFL */
	   0,	/* MUREPLPOOL */
	   0,	/* REPLACCSEM */
	   0,	/* JNLFLUSHNOPROG */
	   0,	/* REPLINSTCREATE */
	   0,	/* SUSPENDING */
	   0,	/* SOCKBFNOTEMPTY */
	   0,	/* ILLESOCKBFSIZE */
	   0,	/* NOSOCKETINDEV */
	   0,	/* SETSOCKOPTERR */
	   0,	/* GETSOCKOPTERR */
	   0,	/* NOSUCHPROC */
	   0,	/* DSENOFINISH */
	   0,	/* LKENOFINISH */
	   0,	/* NOCHLEFT */
	   0,	/* MULOGNAMEDEF */
	   0,	/* BUFOWNERSTUCK */
	   0,	/* ACTIVATEFAIL */
	   0,	/* DBRNDWNWRN */
	   0,	/* DLLNOOPEN */
	   0,	/* DLLNORTN */
	   0,	/* DLLNOCLOSE */
	   0,	/* FILTERNOTALIVE */
	   0,	/* FILTERCOMM */
	   0,	/* FILTERBADCONV */
	   0,	/* PRIMARYISROOT */
	   0,	/* GVQUERYGETFAIL */
	   0,	/* DBCREC2BIGINBLK */
	  19,	/* MERGEDESC */
	   0,	/* MERGEINCOMPL */
	   0,	/* DBNAMEMISMATCH */
	   0,	/* DBIDMISMATCH */
	   0,	/* DEVOPENFAIL */
	   0,	/* IPCNOTDEL */
	   0,	/* XCVOIDRET */
	   0,	/* MURAIMGFAIL */
	   0,	/* REPLINSTUNDEF */
	   0,	/* REPLINSTACC */
	   0,	/* NOJNLPOOL */
	   0,	/* NORECVPOOL */
	   0,	/* FTOKERR */
	   0,	/* REPLREQRUNDOWN */
	   0,	/* BLKCNTEDITFAIL */
	   0,	/* SEMREMOVED */
	   0,	/* REPLINSTFMT */
	   0,	/* SEMKEYINUSE */
	   0,	/* XTRNTRANSERR */
	   0,	/* XTRNTRANSDLL */
	   0,	/* XTRNRETVAL */
	   0,	/* XTRNRETSTR */
	 101,	/* INVECODEVAL */
	   0,	/* SETECODE */
	   0,	/* INVSTACODE */
	   0,	/* REPEATERROR */
	  90,	/* NOCANONICNAME */
	   0,	/* NOSUBSCRIPT */
	   0,	/* SYSTEMVALUE */
	   0,	/* SIZENOTVALID4 */
	   0,	/* STRNOTVALID */
	   0,	/* CREDNOTPASSED */
	   0,	/* ERRWETRAP */
	   0,	/* TRACINGON */
	   0,	/* CITABENV */
	   0,	/* CITABOPN */
	   0,	/* CIENTNAME */
	   0,	/* CIRTNTYP */
	   0,	/* CIRCALLNAME */
	   0,	/* CIRPARMNAME */
	   0,	/* CIDIRECTIVE */
	   0,	/* CIPARTYPE */
	   0,	/* CIUNTYPE */
	   0,	/* CINOENTRY */
	   0,	/* JNLINVSWITCHLMT */
	   0,	/* SETZDIR */
	  40,	/* JOBACTREF */
	   0,	/* ECLOSTMID */
	   0,	/* ZFF2MANY */
	   0,	/* JNLFSYNCLSTCK */
	   0,	/* DELIMWIDTH */
	   0,	/* DBBMLCORRUPT */
	   0,	/* DLCKAVOIDANCE */
	   0,	/* WRITERSTUCK */
	   0,	/* PATNOTFOUND */
	   0,	/* INVZDIRFORM */
	   0,	/* ZDIROUTOFSYNC */
	   0,	/* GBLNOEXIST */
	   0,	/* MAXBTLEVEL */
	  35,	/* INVMNEMCSPC */
	   0,	/* JNLALIGNSZCHG */
	   0,	/* SEFCTNEEDSFULLB */
	   0,	/* GVFAILCORE */
	   0,	/* DBCDBNOCERTIFY */
	   0,	/* DBFRZRESETSUC */
	   0,	/* JNLFILEXTERR */
	   0,	/* JOBEXAMDONE */
	   0,	/* JOBEXAMFAIL */
	   0,	/* JOBINTRRQST */
	   0,	/* ERRWZINTR */
	   0,	/* CLIERR */
	   0,	/* REPLNOBEFORE */
	   0,	/* REPLJNLCNFLCT */
	   0,	/* JNLDISABLE */
	   0,	/* FILEEXISTS */
	   0,	/* JNLSTATE */
	   0,	/* REPLSTATE */
	   0,	/* JNLCREATE */
	   0,	/* JNLNOCREATE */
	   0,	/* JNLFNF */
	   0,	/* PREVJNLLINKCUT */
	   0,	/* PREVJNLLINKSET */
	   0,	/* FILENAMETOOLONG */
	   0,	/* REQRECOV */
	   0,	/* JNLTRANS2BIG */
	   0,	/* JNLSWITCHTOOSM */
	   0,	/* JNLSWITCHSZCHG */
	   0,	/* NOTRNDMACC */
	   0,	/* TMPFILENOCRE */
	   0,	/* SHRMEMEXHAUSTED */
	   0,	/* JNLSENDOPER */
	   0,	/* DDPSUBSNUL */
	   0,	/* DDPNOCONNECT */
	   0,	/* DDPCONGEST */
	   0,	/* DDPSHUTDOWN */
	   0,	/* DDPTOOMANYPROCS */
	   0,	/* DDPBADRESPONSE */
	   0,	/* DDPINVCKT */
	   0,	/* DDPVOLSETCONFIG */
	   0,	/* DDPCONFGOOD */
	   0,	/* DDPCONFIGNORE */
	   0,	/* DDPCONFINCOMPL */
	   0,	/* DDPCONFBADVOL */
	   0,	/* DDPCONFBADUCI */
	   0,	/* DDPCONFBADGLD */
	   0,	/* DDPRECSIZNOTNUM */
	   0,	/* DDPOUTMSG2BIG */
	   0,	/* DDPNOSERVER */
	   0,	/* MUTEXRELEASED */
	   0,	/* JNLCRESTATUS */
	   0,	/* ZBREAKFAIL */
	   0,	/* DLLVERSION */
	   0,	/* INVZROENT */
	   0,	/* DDPLOGERR */
	   0,	/* GETSOCKNAMERR */
	   0,	/* INVYDBEXIT */
	   0,	/* CIMAXPARAM */
	   0,	/* CITPNESTED */
	   0,	/* CIMAXLEVELS */
	   0,	/* JOBINTRRETHROW */
	   0,	/* STARFILE */
	   0,	/* NOSTARFILE */
	   0,	/* MUJNLSTAT */
	   0,	/* JNLTPNEST */
	   0,	/* REPLOFFJNLON */
	   0,	/* FILEDELFAIL */
	   0,	/* INVQUALTIME */
	   0,	/* NOTPOSITIVE */
	   0,	/* INVREDIRQUAL */
	   0,	/* INVERRORLIM */
	   0,	/* INVIDQUAL */
	   0,	/* INVTRNSQUAL */
	   0,	/* JNLNOBIJBACK */
	   0,	/* SETREG2RESYNC */
	   0,	/* JNLALIGNTOOSM */
	   0,	/* JNLFILEOPNERR */
	   0,	/* JNLFILECLOSERR */
	   0,	/* REPLSTATEOFF */
	   0,	/* MUJNLPREVGEN */
	   0,	/* MUPJNLINTERRUPT */
	   0,	/* ROLLBKINTERRUPT */
	   0,	/* RLBKJNSEQ */
	   0,	/* REPLRECFMT */
	   0,	/* PRIMARYNOTROOT */
	   0,	/* DBFRZRESETFL */
	   0,	/* JNLCYCLE */
	   0,	/* JNLPREVRECOV */
	   0,	/* RESOLVESEQNO */
	   0,	/* BOVTNGTEOVTN */
	   0,	/* BOVTMGTEOVTM */
	   0,	/* BEGSEQGTENDSEQ */
	   0,	/* DBADDRALIGN */
	   0,	/* DBWCVERIFYSTART */
	   0,	/* DBWCVERIFYEND */
	   0,	/* MUPIPSIG */
	   0,	/* HTSHRINKFAIL */
	   0,	/* STPEXPFAIL */
	   0,	/* DBBTUWRNG */
	   0,	/* DBBTUFIXED */
	   0,	/* DBMAXREC2BIG */
	   0,	/* DBCSCNNOTCMPLT */
	   0,	/* DBCBADFILE */
	   0,	/* DBCNOEXTND */
	   0,	/* DBCINTEGERR */
	   0,	/* DBMINRESBYTES */
	   0,	/* DBCNOTSAMEDB */
	   0,	/* DBCDBCERTIFIED */
	   0,	/* DBCMODBLK2BIG */
	   0,	/* DBCREC2BIG */
	   0,	/* DBCCMDFAIL */
	   0,	/* DBCKILLIP */
	   0,	/* DBCNOFINISH */
	   0,	/* DYNUPGRDFAIL */
	   0,	/* MMNODYNDWNGRD */
	   0,	/* MMNODYNUPGRD */
	   0,	/* MUDWNGRDNRDY */
	   0,	/* MUDWNGRDTN */
	   0,	/* MUDWNGRDNOTPOS */
	   0,	/* MUUPGRDNRDY */
	   0,	/* TNWARN */
	   0,	/* TNTOOLARGE */
	   0,	/* SHMPLRECOV */
	   0,	/* MUNOSTRMBKUP */
	   0,	/* EPOCHTNHI */
	   0,	/* CHNGTPRSLVTM */
	   0,	/* JNLUNXPCTERR */
	   0,	/* OMISERVHANG */
	   0,	/* RSVDBYTE2HIGH */
	   0,	/* BKUPTMPFILOPEN */
	   0,	/* BKUPTMPFILWRITE */
	   0,	/* UNUSEDMSG1244 */
	   0,	/* LOADBGSZ2 */
	   0,	/* LOADEDSZ2 */
	   0,	/* REPLINSTMISMTCH */
	   0,	/* REPLINSTREAD */
	   0,	/* REPLINSTDBMATCH */
	   0,	/* REPLINSTNMSAME */
	   0,	/* REPLINSTNMUNDEF */
	   0,	/* REPLINSTNMLEN */
	   0,	/* REPLINSTNOHIST */
	   0,	/* REPLINSTSECLEN */
	   0,	/* REPLINSTSECMTCH */
	   0,	/* REPLINSTSECNONE */
	   0,	/* REPLINSTSECUNDF */
	   0,	/* REPLINSTSEQORD */
	   0,	/* REPLINSTSTNDALN */
	   0,	/* REPLREQROLLBACK */
	   0,	/* REQROLLBACK */
	   0,	/* INVOBJFILE */
	   0,	/* SRCSRVEXISTS */
	   0,	/* SRCSRVNOTEXIST */
	   0,	/* SRCSRVTOOMANY */
	   0,	/* JNLPOOLBADSLOT */
	   0,	/* NOENDIANCVT */
	   0,	/* ENDIANCVT */
	   0,	/* DBENDIAN */
	   0,	/* BADCHSET */
	   0,	/* BADCASECODE */
	   0,	/* BADCHAR */
	   0,	/* DLRCILLEGAL */
	   0,	/* NONUTF8LOCALE */
	   0,	/* INVDLRCVAL */
	   0,	/* DBMISALIGN */
	   0,	/* LOADINVCHSET */
	   0,	/* DLLCHSETM */
	   0,	/* DLLCHSETUTF8 */
	   0,	/* BOMMISMATCH */
	   0,	/* WIDTHTOOSMALL */
	  80,	/* SOCKMAX */
	   0,	/* PADCHARINVALID */
	   0,	/* ZCNOPREALLOUTPAR */
	   0,	/* SVNEXPECTED */
	   0,	/* SVNONEW */
	   0,	/* ZINTDIRECT */
	   0,	/* ZINTRECURSEIO */
	   0,	/* MRTMAXEXCEEDED */
	   0,	/* JNLCLOSED */
	   0,	/* RLBKNOBIMG */
	   0,	/* RLBKJNLNOBIMG */
	   0,	/* RLBKLOSTTNONLY */
	   0,	/* KILLBYSIGSINFO3 */
	   0,	/* GTMSECSHRTMPPATH */
	   0,	/* UNUSEDMSG1296 */
	   0,	/* INVMEMRESRV */
	   0,	/* OPCOMMISSED */
	   0,	/* COMMITWAITSTUCK */
	   0,	/* COMMITWAITPID */
	   0,	/* UPDREPLSTATEOFF */
	   0,	/* LITNONGRAPH */
	   0,	/* DBFHEADERR8 */
	   0,	/* MMBEFOREJNL */
	   0,	/* MMNOBFORRPL */
	   0,	/* KILLABANDONED */
	   0,	/* BACKUPKILLIP */
	   0,	/* LOGTOOLONG */
	   0,	/* NOALIASLIST */
	   0,	/* ALIASEXPECTED */
	   0,	/* VIEWLVN */
	   0,	/* DZWRNOPAREN */
	   0,	/* DZWRNOALIAS */
	   0,	/* FREEZEERR */
	   0,	/* CLOSEFAIL */
	   0,	/* CRYPTINIT */
	   0,	/* CRYPTOPFAILED */
	   0,	/* CRYPTDLNOOPEN */
	   0,	/* CRYPTNOV4 */
	   0,	/* CRYPTNOMM */
	   0,	/* READONLYNOBG */
	   0,	/* CRYPTKEYFETCHFAILED */
	   0,	/* CRYPTKEYFETCHFAILEDNF */
	   0,	/* CRYPTHASHGENFAILED */
	   0,	/* CRYPTNOKEY */
	   0,	/* BADTAG */
	   0,	/* ICUVERLT36 */
	   0,	/* ICUSYMNOTFOUND */
	   0,	/* STUCKACT */
	   0,	/* CALLINAFTERXIT */
	   0,	/* LOCKSPACEFULL */
	   0,	/* IOERROR */
	   0,	/* MAXSSREACHED */
	   0,	/* SNAPSHOTNOV4 */
	   0,	/* SSV4NOALLOW */
	   0,	/* SSTMPDIRSTAT */
	   0,	/* SSTMPCREATE */
	   0,	/* JNLFILEDUP */
	   0,	/* SSPREMATEOF */
	   0,	/* SSFILOPERR */
	   0,	/* REGSSFAIL */
	   0,	/* SSSHMCLNUPFAIL */
	   0,	/* SSFILCLNUPFAIL */
	   0,	/* SETINTRIGONLY */
	   0,	/* MAXTRIGNEST */
	   0,	/* TRIGCOMPFAIL */
	   0,	/* NOZTRAPINTRIG */
	   0,	/* ZTWORMHOLE2BIG */
	   0,	/* JNLENDIANLITTLE */
	   0,	/* JNLENDIANBIG */
	   0,	/* TRIGINVCHSET */
	   0,	/* TRIGREPLSTATE */
	   0,	/* GVDATAGETFAIL */
	   0,	/* TRIG2NOTRIG */
	   0,	/* ZGOTOINVLVL */
	   0,	/* TRIGTCOMMIT */
	   0,	/* TRIGTLVLCHNG */
	   0,	/* TRIGNAMEUNIQ */
	   0,	/* ZTRIGINVACT */
	   0,	/* INDRCOMPFAIL */
	   0,	/* QUITALSINV */
	   0,	/* PROCTERM */
	   0,	/* SRCLNNTDSP */
	   0,	/* ARROWNTDSP */
	   0,	/* TRIGDEFBAD */
	   0,	/* TRIGSUBSCRANGE */
	   0,	/* TRIGDATAIGNORE */
	   0,	/* TRIGIS */
	   0,	/* TCOMMITDISALLOW */
	   0,	/* SSATTACHSHM */
	   0,	/* TRIGDEFNOSYNC */
	   0,	/* TRESTMAX */
	   0,	/* ZLINKBYPASS */
	   0,	/* GBLEXPECTED */
	   0,	/* GVZTRIGFAIL */
	   0,	/* MUUSERLBK */
	   0,	/* SETINSETTRIGONLY */
	   0,	/* DZTRIGINTRIG */
	   0,	/* LSINSERTED */
	   0,	/* BOOLSIDEFFECT */
	   0,	/* DBBADUPGRDSTATE */
	   0,	/* WRITEWAITPID */
	   0,	/* ZGOCALLOUTIN */
	   0,	/* REPLNOXENDIAN */
	   0,	/* REPLXENDIANFAIL */
	   0,	/* UNUSEDMSG1386 */
	   0,	/* GTMSECSHRCHDIRF */
	   0,	/* JNLORDBFLU */
	   0,	/* ZCCLNUPRTNMISNG */
	   0,	/* ZCINVALIDKEYWORD */
	   0,	/* REPLMULTINSTUPDATE */
	   0,	/* DBSHMNAMEDIFF */
	   0,	/* SHMREMOVED */
	   0,	/* DEVICEWRITEONLY */
	   0,	/* ICUERROR */
	   0,	/* ZDATEBADDATE */
	   0,	/* ZDATEBADTIME */
	   0,	/* COREINPROGRESS */
	   0,	/* MAXSEMGETRETRY */
	   0,	/* JNLNOREPL */
	   0,	/* JNLRECINCMPL */
	   0,	/* JNLALLOCGROW */
	   0,	/* INVTRCGRP */
	   0,	/* MUINFOUINT6 */
	   0,	/* NOLOCKMATCH */
	   0,	/* BADREGION */
	   0,	/* LOCKSPACEUSE */
	   0,	/* JIUNHNDINT */
	   0,	/* GTMASSERT2 */
	   0,	/* ZTRIGNOTRW */
	   0,	/* TRIGMODREGNOTRW */
	   0,	/* INSNOTJOINED */
	   0,	/* INSROLECHANGE */
	   0,	/* INSUNKNOWN */
	   0,	/* NORESYNCSUPPLONLY */
	   0,	/* NORESYNCUPDATERONLY */
	   0,	/* NOSUPPLSUPPL */
	   0,	/* REPL2OLD */
	   0,	/* EXTRFILEXISTS */
	   0,	/* MUUSERECOV */
	   0,	/* SECNOTSUPPLEMENTARY */
	   0,	/* SUPRCVRNEEDSSUPSRC */
	   0,	/* PEERPIDMISMATCH */
	   0,	/* SETITIMERFAILED */
	   0,	/* UPDSYNC2MTINS */
	   0,	/* UPDSYNCINSTFILE */
	   0,	/* REUSEINSTNAME */
	   0,	/* RCVRMANYSTRMS */
	   0,	/* RSYNCSTRMVAL */
	   0,	/* RLBKSTRMSEQ */
	   0,	/* RESOLVESEQSTRM */
	   0,	/* REPLINSTDBSTRM */
	   0,	/* RESUMESTRMNUM */
	   0,	/* ORLBKSTART */
	   0,	/* ORLBKTERMNTD */
	   0,	/* ORLBKCMPLT */
	   0,	/* ORLBKNOSTP */
	   0,	/* ORLBKFRZPROG */
	   0,	/* ORLBKFRZOVER */
	   0,	/* ORLBKNOV4BLK */
	   0,	/* DBROLLEDBACK */
	   0,	/* DSEWCREINIT */
	   0,	/* MURNDWNOVRD */
	   0,	/* REPLONLNRLBK */
	   0,	/* SRVLCKWT2LNG */
	   0,	/* IGNBMPMRKFREE */
	   0,	/* PERMGENFAIL */
	   0,	/* PERMGENDIAG */
	   0,	/* MUTRUNC1ATIME */
	   0,	/* MUTRUNCBACKINPROG */
	   0,	/* MUTRUNCERROR */
	   0,	/* MUTRUNCFAIL */
	   0,	/* MUTRUNCNOSPACE */
	   0,	/* MUTRUNCNOTBG */
	   0,	/* MUTRUNCNOV4 */
	   0,	/* MUTRUNCPERCENT */
	   0,	/* MUTRUNCSSINPROG */
	   0,	/* MUTRUNCSUCCESS */
	   0,	/* RSYNCSTRMSUPPLONLY */
	   0,	/* STRMNUMIS */
	   0,	/* STRMNUMMISMTCH1 */
	   0,	/* STRMNUMMISMTCH2 */
	   0,	/* STRMSEQMISMTCH */
	   0,	/* LOCKSPACEINFO */
	   0,	/* JRTNULLFAIL */
	   0,	/* LOCKSUB2LONG */
	   0,	/* RESRCWAIT */
	   0,	/* RESRCINTRLCKBYPAS */
	   0,	/* DBFHEADERRANY */
	   0,	/* REPLINSTFROZEN */
	   0,	/* REPLINSTFREEZECOMMENT */
	   0,	/* REPLINSTUNFROZEN */
	   0,	/* DSKNOSPCAVAIL */
	   0,	/* DSKNOSPCBLOCKED */
	   0,	/* DSKSPCAVAILABLE */
	   0,	/* ENOSPCQIODEFER */
	   0,	/* CUSTOMFILOPERR */
	   0,	/* CUSTERRNOTFND */
	   0,	/* CUSTERRSYNTAX */
	   0,	/* ORLBKINPROG */
	   0,	/* DBSPANGLOINCMP */
	   0,	/* DBSPANCHUNKORD */
	   0,	/* DBDATAMX */
	   0,	/* DBIOERR */
	   0,	/* INITORRESUME */
	   0,	/* GTMSECSHRNOARG0 */
	   0,	/* GTMSECSHRISNOT */
	   0,	/* GTMSECSHRBADDIR */
	   0,	/* JNLBUFFREGUPD */
	   0,	/* JNLBUFFDBUPD */
	   0,	/* LOCKINCR2HIGH */
	   0,	/* LOCKIS */
	   0,	/* LDSPANGLOINCMP */
	   0,	/* MUFILRNDWNFL2 */
	   0,	/* MUINSTFROZEN */
	   0,	/* MUINSTUNFROZEN */
	   0,	/* GTMEISDIR */
	   0,	/* SPCLZMSG */
	   0,	/* MUNOTALLINTEG */
	   0,	/* BKUPRUNNING */
	   0,	/* MUSIZEINVARG */
	   0,	/* MUSIZEFAIL */
	   0,	/* SIDEEFFECTEVAL */
	   0,	/* CRYPTINIT2 */
	   0,	/* CRYPTDLNOOPEN2 */
	   0,	/* CRYPTBADCONFIG */
	   0,	/* DBCOLLREQ */
	   0,	/* SETEXTRENV */
	   0,	/* NOTALLDBRNDWN */
	   0,	/* TPRESTNESTERR */
	   0,	/* JNLFILRDOPN */
	   0,	/* SEQNUMSEARCHTIMEOUT */
	   0,	/* FTOKKEY */
	   0,	/* SEMID */
	   0,	/* JNLQIOSALVAGE */
	   0,	/* FAKENOSPCLEARED */
	   0,	/* MMFILETOOLARGE */
	   0,	/* BADZPEEKARG */
	   0,	/* BADZPEEKRANGE */
	   0,	/* BADZPEEKFMT */
	   0,	/* DBMBMINCFREFIXED */
	   0,	/* NULLENTRYREF */
	   0,	/* ZPEEKNORPLINFO */
	   0,	/* MMREGNOACCESS */
	   0,	/* MALLOCMAXUNIX */
	   0,	/* UNUSEDMSG1528 */
	   0,	/* HOSTCONFLICT */
	   0,	/* GETADDRINFO */
	   0,	/* GETNAMEINFO */
	   0,	/* SOCKBIND */
	   0,	/* INSTFRZDEFER */
	   0,	/* UNUSEDMSG1534 */
	   0,	/* REGOPENFAIL */
	   0,	/* REPLINSTNOSHM */
	   0,	/* DEVPARMTOOSMALL */
	   0,	/* REMOTEDBNOSPGBL */
	   0,	/* NCTCOLLSPGBL */
	   0,	/* ACTCOLLMISMTCH */
	   0,	/* GBLNOMAPTOREG */
	   0,	/* ISSPANGBL */
	   0,	/* TPNOSUPPORT */
	   0,	/* UNUSEDMSG1544 */
	   0,	/* ZATRANSERR */
	   0,	/* FILTERTIMEDOUT */
	   0,	/* TLSDLLNOOPEN */
	   0,	/* TLSINIT */
	   0,	/* TLSCONVSOCK */
	   0,	/* TLSHANDSHAKE */
	   0,	/* TLSCONNINFO */
	   0,	/* TLSIOERROR */
	   0,	/* TLSRENEGOTIATE */
	   0,	/* REPLNOTLS */
	   0,	/* COLTRANSSTR2LONG */
	   0,	/* SOCKPASS */
	   0,	/* SOCKACCEPT */
	   0,	/* NOSOCKHANDLE */
	   0,	/* TRIGLOADFAIL */
	   0,	/* SOCKPASSDATAMIX */
	   0,	/* NOGTCMDB */
	   0,	/* NOUSERDB */
	   0,	/* DSENOTOPEN */
	   0,	/* ZSOCKETATTR */
	   0,	/* ZSOCKETNOTSOCK */
	   0,	/* CHSETALREADY */
	   0,	/* DSEMAXBLKSAV */
	   0,	/* BLKINVALID */
	   0,	/* CANTBITMAP */
	   0,	/* AIMGBLKFAIL */
	   0,	/* YDBDISTUNVERIF */
	   0,	/* CRYPTNOAPPEND */
	   0,	/* CRYPTNOSEEK */
	   0,	/* CRYPTNOTRUNC */
	   0,	/* CRYPTNOKEYSPEC */
	   0,	/* CRYPTNOOVERRIDE */
	   0,	/* CRYPTKEYTOOBIG */
	   0,	/* CRYPTBADWRTPOS */
	  13,	/* LABELNOTFND */
	   0,	/* RELINKCTLERR */
	   0,	/* INVLINKTMPDIR */
	   0,	/* NOEDITOR */
	   0,	/* UPDPROC */
	   0,	/* HLPPROC */
	   0,	/* REPLNOHASHTREC */
	   0,	/* REMOTEDBNOTRIG */
	   0,	/* NEEDTRIGUPGRD */
	   0,	/* REQRLNKCTLRNDWN */
	   0,	/* RLNKCTLRNDWNSUC */
	   0,	/* RLNKCTLRNDWNFL */
	   0,	/* MPROFRUNDOWN */
	   0,	/* ZPEEKNOJNLINFO */
	   0,	/* TLSPARAM */
	   0,	/* RLNKRECLATCH */
	   0,	/* RLNKSHMLATCH */
	   0,	/* JOBLVN2LONG */
	   0,	/* NLRESTORE */
	   0,	/* PREALLOCATEFAIL */
	   0,	/* NODFRALLOCSUPP */
	   0,	/* LASTWRITERBYPAS */
	   0,	/* TRIGUPBADLABEL */
	   0,	/* WEIRDSYSTIME */
	   0,	/* REPLSRCEXITERR */
	   0,	/* INVZBREAK */
	   0,	/* INVTMPDIR */
	   0,	/* ARCTLMAXHIGH */
	   0,	/* ARCTLMAXLOW */
	   0,	/* NONTPRESTART */
	   0,	/* PBNPARMREQ */
	   0,	/* PBNNOPARM */
	   0,	/* PBNUNSUPSTRUCT */
	   0,	/* PBNINVALID */
	   0,	/* PBNNOFIELD */
	   0,	/* JNLDBSEQNOMATCH */
	   0,	/* MULTIPROCLATCH */
	   0,	/* INVLOCALE */
	   0,	/* NOMORESEMCNT */
	   0,	/* SETQUALPROB */
	   0,	/* EXTRINTEGRITY */
	   0,	/* CRYPTKEYRELEASEFAILED */
	   0,	/* MUREENCRYPTSTART */
	   0,	/* MUREENCRYPTV4NOALLOW */
	   0,	/* ENCRYPTCONFLT */
	   0,	/* JNLPOOLRECOVERY */
	   0,	/* LOCKTIMINGINTP */
	   0,	/* PBNUNSUPTYPE */
	   0,	/* DBFHEADLRU */
	   0,	/* ASYNCIONOV4 */
	   0,	/* AIOCANCELTIMEOUT */
	   0,	/* DBGLDMISMATCH */
	   0,	/* DBBLKSIZEALIGN */
	   0,	/* ASYNCIONOMM */
	   0,	/* RESYNCSEQLOW */
	   0,	/* DBNULCOL */
	   0,	/* UTF16ENDIAN */
	   0,	/* OFRZACTIVE */
	   0,	/* OFRZAUTOREL */
	   0,	/* OFRZCRITREL */
	   0,	/* OFRZCRITSTUCK */
	   0,	/* OFRZNOTHELD */
	   0,	/* AIOBUFSTUCK */
	   0,	/* DBDUPNULCOL */
	   0,	/* CHANGELOGINTERVAL */
	   0,	/* DBNONUMSUBS */
	   0,	/* AUTODBCREFAIL */
	   0,	/* RNDWNSTATSDBFAIL */
	   0,	/* STATSDBNOTSUPP */
	   0,	/* TPNOSTATSHARE */
	   0,	/* FNTRANSERROR */
	   0,	/* NOCRENETFILE */
	   0,	/* DSKSPCCHK */
	   0,	/* NOCREMMBIJ */
	   0,	/* FILECREERR */
	   0,	/* RAWDEVUNSUP */
	   0,	/* DBFILECREATED */
	   0,	/* PCTYRESERVED */
	   0,	/* REGFILENOTFOUND */
	   0,	/* DRVLONGJMP */
	   0,	/* INVSTATSDB */
	   0,	/* STATSDBERR */
	   0,	/* STATSDBINUSE */
	   0,	/* STATSDBFNERR */
	   0,	/* JNLSWITCHRETRY */
	   0,	/* JNLSWITCHFAIL */
	   0,	/* CLISTRTOOLONG */
	   0,	/* LVMONBADVAL */
	   0,	/* RESTRICTEDOP */
	   0,	/* RESTRICTSYNTAX */
	   0,	/* MUCREFILERR */
	   0,	/* JNLBUFFPHS2SALVAGE */
	   0,	/* JNLPOOLPHS2SALVAGE */
	   0,	/* MURNDWNARGLESS */
	   0,	/* DBFREEZEON */
	   0,	/* DBFREEZEOFF */
	   0,	/* STPCRIT */
	   0,	/* STPOFLOW */
	   0,	/* SYSUTILCONF */
	   0,	/* MSTACKSZNA */
	   0,	/* JNLEXTRCTSEQNO */
	   0,	/* INVSEQNOQUAL */
	};
