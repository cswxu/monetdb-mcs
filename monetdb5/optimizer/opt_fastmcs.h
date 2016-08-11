/*
 * opt_fastmcs.h
 *
 *  Created on: 1 Apr 2016
 *      Author: zeroxwj
 *
 *  This optimization step (a) examines an input MAL plan and identifies the MAL instructions carrying out
 *  multi-column sorting, then (b) invokes the plan search algorithm to find an optimal massaging plan,
 *  finally (c) re-writes the MAL instructions for multi-column sorting with code massaging.
 */


#ifndef _OPT_FASTMCS_
#define _OPT_FASTMCS_
#include "opt_prelude.h"
#include "opt_support.h"
#include "mal_exception.h"

//opt_export int OPTisAlias(InstrPtr p);
//opt_export void OPTaliasRemap(InstrPtr p, int *alias);
mal_export int OPTfastmcsImplementation(Client cntxt, MalBlkPtr mb, MalStkPtr stk, InstrPtr p);

#define OPTDEBUGfastmcs  if ( optDebug & ((lng) 1 <<DEBUG_OPT_FASTMCS) )
#endif
