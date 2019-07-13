/*-------------------------------------------------------------------------
 *
 * welc1.c
 *	  welcome demo
 *
 * Author:	zhang lian zhuang
 *
 * IDENTIFICATION
 *	  contrib/welc1/welc1.c
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"
#include "fmgr.h"
#include "utils/builtins.h"

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(welc1);

Datum
welc1(PG_FUNCTION_ARGS)
{
	PG_RETURN_TEXT_P(cstring_to_text("welcome 1"));
}
