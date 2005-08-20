#ifndef mngHEADER_H
#define mngHEADER_H 1
#define mngIN_HEADER 1

#line 6 "lex.mng.h"

#line 8 "lex.mng.h"

#define  YY_INT_ALIGNED short int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 31
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* %if-c++-only */
    /* The c++ scanner is a mess. The FlexLexer.h header file relies on the
     * following macro.
     */
    #define yyFlexLexer mngFlexLexer
/* %endif */

/* %if-c-only */
/* %endif */

/* %if-c-only */
/* %endif */

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
/* %if-c-only */
/* %endif */

/* %if-tables-serialization */
/* %endif */
/* end standard C headers. */

/* %if-c-or-c++ */
/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;
#endif /* ! C99 */

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif /* ! FLEXINT_H */

/* %endif */

/* %if-c++-only */
/* begin standard C++ headers. */
#include <iostream> 
#include <errno.h>
#include <cstdlib>
#include <cstring>
/* end standard C++ headers. */
/* %endif */

#ifdef __cplusplus

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

#if __STDC__

#define YY_USE_CONST

#endif	/* __STDC__ */
#endif	/* ! __cplusplus */

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

/* %not-for-header */

/* %not-for-header */

/* %if-reentrant */
/* %endif */

/* %if-not-reentrant */

/* %endif */

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

/* %if-not-reentrant */
extern int yyleng;
/* %endif */

/* %if-c-only */
/* %if-not-reentrant */
/* %endif */
/* %endif */

/* The following is because we cannot portably get our hands on size_t
 * (without autoconf's help, which isn't available because we want
 * flex-generated scanners to compile on their own).
 */

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef unsigned int yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
/* %if-c-only */
/* %endif */

/* %if-c++-only */
	std::istream* yy_input_file;
/* %endif */

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */
    
	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

/* %if-c-only Standard (non-C++) definition */
/* %not-for-header */

/* %endif */

/* %if-c-only Standard (non-C++) definition */
/* %if-not-reentrant */
/* %not-for-header */

/* %endif */
/* %endif */

void *mngalloc (yy_size_t  );
void *mngrealloc (void *,yy_size_t  );
void mngfree (void *  );

/* %% [1.0] yytext/yyin/yyout/yy_state_type/yylineno etc. def's & init go here */

#define yywrap(n) 1
#define YY_SKIP_YYWRAP

#define FLEX_DEBUG

#define yytext_ptr yytext
#define YY_INTERACTIVE

#include <FlexLexer.h>

/* %if-c-only Standard (non-C++) definition */
/* %endif */

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
/* %if-c-only */
/* %endif */
/* %if-c++-only */
#include <unistd.h>
/* %endif */
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

/* %if-c-only Reentrant structure and macros (non-C++). */
/* %if-reentrant */
/* %if-reentrant */
/* %endif */
/* %if-bison-bridge */
/* %endif */
/* %endif End reentrant structures and macros. */
/* %not-for-header */

/* %endif */

#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * );
#endif

#ifndef YY_NO_INPUT
/* %if-c-only Standard (non-C++) definition */
/* %not-for-header */

/* %endif */
#endif

/* %if-c-only */
/* %endif */

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* %if-tables-serialization structures and prototypes */
/* %not-for-header */

/* %not-for-header */

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1
/* %if-c-only Standard (non-C++) definition */
/* %endif */
/* %if-c++-only C++ definition */
#define YY_DECL int yyFlexLexer::yylex()
/* %endif */
#endif /* !YY_DECL */

/* %not-for-header */

/* %if-c++-only */
/* %not-for-header */

/* %endif */

/* yy_get_previous_state - get the state just before the EOB char was reached */

/* %if-c-only */
/* %not-for-header */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef yytext_ptr
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif
#line 40 "mng.l"

#line 357 "lex.mng.h"
#undef mngIN_HEADER
#endif /* mngHEADER_H */
