/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         si2bin_yyparse
#define yylex           si2bin_yylex
#define yyerror         si2bin_yyerror
#define yydebug         si2bin_yydebug
#define yynerrs         si2bin_yynerrs

#define yylval          si2bin_yylval
#define yychar          si2bin_yychar

/* Copy the first part of user declarations.  */
#line 20 "Parser.yy" /* yacc.c:339  */


//#include <stdio.h>
//#include <stdlib.h>

#include <cassert>
#include <cstring>

//#include <arch/southern-islands/asm/Arg.h>
#include <arch/southern-islands/asm/Binary.h>
#include <lib/cpp/ELFWriter.h>
#include <lib/cpp/Misc.h>

//#include "Arg.h"
#include "InternalBinary.h"
//#include "Inst.h"
#include "Metadata.h"
#include "Binary.h"
#include "Context.h"
#include "Symbol.h"
#include "Task.h"


#define YYERROR_VERBOSE



#line 102 "Parser.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_SI2BIN_YY_PARSER_HH_INCLUDED
# define YY_SI2BIN_YY_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int si2bin_yydebug;
#endif
/* "%code requires" blocks.  */
#line 48 "Parser.yy" /* yacc.c:355  */

	#include <string>
	#include <vector>
	#include <arch/southern-islands/asm/Arg.h>
	#include "Arg.h"
	#include "Inst.h"
	#include "Context.h"

#line 141 "Parser.cc" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_SCALAR_REGISTER = 258,
    TOK_VECTOR_REGISTER = 259,
    TOK_SPECIAL_REGISTER = 260,
    TOK_MEMORY_REGISTER = 261,
    TOK_DECIMAL = 262,
    TOK_HEX = 263,
    TOK_FLOAT = 264,
    TOK_ID = 265,
    TOK_COMMA = 266,
    TOK_COLON = 267,
    TOK_FORMAT = 268,
    TOK_OFFEN = 269,
    TOK_IDXEN = 270,
    TOK_OFFSET = 271,
    TOK_OBRA = 272,
    TOK_CBRA = 273,
    TOK_OPAR = 274,
    TOK_CPAR = 275,
    TOK_NEW_LINE = 276,
    TOK_AMP = 277,
    TOK_ABS = 278,
    TOK_NEG = 279,
    TOK_STAR = 280,
    TOK_EQ = 281,
    TOK_UAV = 282,
    TOK_HL = 283,
    TOK_GLOBAL = 284,
    TOK_METADATA = 285,
    TOK_ARGS = 286,
    TOK_DATA = 287,
    TOK_TEXT = 288,
    TOK_CONST = 289,
    TOK_INT_DECL = 290,
    TOK_SHORT_DECL = 291,
    TOK_FLOAT_DECL = 292,
    TOK_HALF_DECL = 293,
    TOK_WORD_DECL = 294,
    TOK_BYTE_DECL = 295
  };
#endif
/* Tokens.  */
#define TOK_SCALAR_REGISTER 258
#define TOK_VECTOR_REGISTER 259
#define TOK_SPECIAL_REGISTER 260
#define TOK_MEMORY_REGISTER 261
#define TOK_DECIMAL 262
#define TOK_HEX 263
#define TOK_FLOAT 264
#define TOK_ID 265
#define TOK_COMMA 266
#define TOK_COLON 267
#define TOK_FORMAT 268
#define TOK_OFFEN 269
#define TOK_IDXEN 270
#define TOK_OFFSET 271
#define TOK_OBRA 272
#define TOK_CBRA 273
#define TOK_OPAR 274
#define TOK_CPAR 275
#define TOK_NEW_LINE 276
#define TOK_AMP 277
#define TOK_ABS 278
#define TOK_NEG 279
#define TOK_STAR 280
#define TOK_EQ 281
#define TOK_UAV 282
#define TOK_HL 283
#define TOK_GLOBAL 284
#define TOK_METADATA 285
#define TOK_ARGS 286
#define TOK_DATA 287
#define TOK_TEXT 288
#define TOK_CONST 289
#define TOK_INT_DECL 290
#define TOK_SHORT_DECL 291
#define TOK_FLOAT_DECL 292
#define TOK_HALF_DECL 293
#define TOK_WORD_DECL 294
#define TOK_BYTE_DECL 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 58 "Parser.yy" /* yacc.c:355  */

	int num;
	float num_float;
	char *id;
	si2bin::Inst *inst;
	struct si_label_t *label;
	si2bin::Arg *arg;
	SI::Arg *si_arg;
	std::vector<si2bin::Arg *> *list;

#line 244 "Parser.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE si2bin_yylval;

int si2bin_yyparse (void);

#endif /* !YY_SI2BIN_YY_PARSER_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "Parser.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   129,   133,   134,   138,   142,   143,   147,
     148,   149,   150,   165,   166,   171,   170,   204,   205,   209,
     213,   214,   219,   218,   273,   272,   304,   303,   367,   371,
     375,   387,   388,   392,   396,   397,   401,   402,   403,   404,
     405,   406,   409,   411,   412,   421,   420,   430,   432,   433,
     444,   443,   455,   457,   458,   469,   468,   480,   482,   483,
     494,   493,   506,   507,   511,   515,   516,   522,   521,   544,
     543,   565,   564,   586,   585,   606,   611,   624,   638,   651,
     666,   677,   689,   702,   703,   707,   711,   712,   716,   718,
     717,   739,   743,   773,   795,   798,   805,   822,   837,   852,
     860,   865,   870,   878,   885,   890,   927,   951,   975,  1016,
    1027,  1036,  1040,  1052,  1064,  1078,  1080,  1107
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_SCALAR_REGISTER",
  "TOK_VECTOR_REGISTER", "TOK_SPECIAL_REGISTER", "TOK_MEMORY_REGISTER",
  "TOK_DECIMAL", "TOK_HEX", "TOK_FLOAT", "TOK_ID", "TOK_COMMA",
  "TOK_COLON", "TOK_FORMAT", "TOK_OFFEN", "TOK_IDXEN", "TOK_OFFSET",
  "TOK_OBRA", "TOK_CBRA", "TOK_OPAR", "TOK_CPAR", "TOK_NEW_LINE",
  "TOK_AMP", "TOK_ABS", "TOK_NEG", "TOK_STAR", "TOK_EQ", "TOK_UAV",
  "TOK_HL", "TOK_GLOBAL", "TOK_METADATA", "TOK_ARGS", "TOK_DATA",
  "TOK_TEXT", "TOK_CONST", "TOK_INT_DECL", "TOK_SHORT_DECL",
  "TOK_FLOAT_DECL", "TOK_HALF_DECL", "TOK_WORD_DECL", "TOK_BYTE_DECL",
  "$accept", "program", "kernel_list", "kernel", "section_list", "section",
  "global_section", "global_header", "$@1", "metadata_section",
  "metadata_header", "metadata_stmt_list", "metadata_stmt", "$@2", "$@3",
  "$@4", "hex_or_dec_value", "data_section", "data_header",
  "data_stmt_list", "data_stmt", "float_vals", "$@5", "word_vals", "$@6",
  "half_vals", "$@7", "byte_vals", "$@8", "args_section", "args_header",
  "args_stmt_list", "args_stmt", "$@9", "$@10", "$@11", "$@12",
  "val_stmt_list", "ptr_stmt_list", "text_section", "text_header",
  "text_stmt_list", "text_stmt", "$@13", "label", "instr", "arg_list",
  "operand", "arg", "maddr_qual", "waitcnt_arg", "waitcnt_elem", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

#define YYPACT_NINF -74

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-74)))

#define YYTABLE_NINF -105

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,   -10,    37,    51,   -74,   -10,    53,    49,   -74,   -74,
     -74,   -74,    50,    54,    55,    61,   -74,    53,   -74,    -3,
     -74,    -7,   -74,     5,   -74,    14,   -74,    70,   -74,   -74,
     -74,   -74,   -74,    -1,   -74,   -74,    -3,    60,   -74,   -74,
     -74,   -74,   -74,    -7,    -5,   -74,   -74,     5,    34,   -74,
     -74,    14,    71,   -74,   -74,    64,    86,     2,   -74,    73,
       8,     6,    46,    48,   -74,    88,    89,    87,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,    31,   -74,    79,    56,
      90,    57,   -74,   -74,    77,   -74,   -74,    81,    78,    82,
     -74,   -74,   -74,   -74,    92,   -74,   -74,    94,   -74,    95,
     -74,    96,   -74,    91,   101,   103,   104,    56,   -74,    56,
      74,   102,   -74,     2,    93,    97,   -74,    99,   -74,   100,
     -74,   105,   -74,   106,    80,    -2,   -74,   110,   108,   109,
     -74,   111,   -74,   -74,   112,    98,   -74,   -74,   115,   -74,
     -74,   -74,   -74,   -74,   -74,   113,   123,   121,    -6,   125,
     -74,   -74,   116,   128,   117,   126,   -74,   -74,   129,   -74,
     -74,   -74,   -74,   118,   122,   131,   -74,   -74,   135,    80,
     -74,   -74,   -74,   132,   133,   124,    -6,   136,   137,   -74,
     127,   134,   138,   -74,   -74,   142,   139,   143,   140,   -74,
     141,   -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     0,    13,     3,    15,
       1,     5,     0,     0,     0,     0,     6,     7,     9,    17,
      10,    31,    11,    62,    12,    83,    14,     0,    19,    64,
      33,    85,     8,     0,    28,    18,    20,     0,    42,    52,
      47,    57,    32,    34,     0,    75,    63,    65,    94,    91,
      84,    86,     0,    89,    16,     0,     0,     0,    21,    36,
      38,    40,    39,    41,    35,     0,     0,     0,    66,    97,
      98,    99,   100,   101,   102,   103,   109,    92,     0,     0,
      93,   111,    95,   110,   115,    87,    88,     0,     0,     0,
      29,    30,    22,    37,    45,    43,    53,    55,    48,    50,
      58,    60,    76,     0,     0,     0,     0,     0,   107,     0,
       0,     0,    90,     0,     0,     0,    44,     0,    54,     0,
      49,     0,    59,     0,    67,     0,    78,     0,     0,     0,
      96,     0,   112,   113,     0,     0,   116,    26,     0,    23,
      46,    56,    51,    61,    77,     0,     0,     0,    71,     0,
     117,   106,     0,     0,     0,     0,    68,    76,     0,    79,
      80,    81,    82,     0,     0,     0,   114,    27,     0,    69,
      78,    72,   105,     0,     0,     0,    73,     0,     0,    70,
       0,     0,     0,    74,   108,     0,     0,     0,     0,    24,
       0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,    44,   -74,   144,   -74,   -74,   -74,   -74,   -74,
     -74,   120,   -74,   -74,   -74,   -74,   -61,   -74,   -74,    72,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    66,   -74,   -74,   -74,   -74,   -74,   -41,   -17,   -74,
     -74,   114,   -74,   -74,   -74,   -74,   -74,   -74,   -73,   -74,
      43,   -74
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    17,     6,     7,    27,    18,
      19,    35,    36,   115,   190,   154,    92,    20,    21,    42,
      43,    60,   117,    62,   121,    61,   119,    63,   123,    22,
      23,    46,    47,   145,   175,   163,   180,   124,   148,    24,
      25,    50,    51,    87,    52,    53,    80,    81,    82,   110,
      83,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,    99,   101,    37,   159,    65,   108,    33,   146,    90,
      91,    55,    66,    90,    91,    44,    56,    94,    34,     2,
      67,   160,   161,   147,    48,    57,    45,    96,   162,    95,
      38,    39,    40,    41,   129,    49,   130,    69,    70,    71,
      72,    73,    74,    75,    76,     8,    77,     9,   105,    11,
     106,    10,   137,    90,    91,    90,    91,    78,    79,    69,
      70,    71,    72,    73,    74,    75,    76,    98,  -104,   100,
      26,    28,    59,     1,    88,    29,    30,  -104,  -104,    78,
      79,     2,    31,    12,    13,    14,    15,   131,   132,   133,
     134,    54,    86,    89,    93,   102,   103,   104,   107,   111,
     114,   109,   112,   116,   113,   118,   120,   122,   126,   125,
     127,   128,   135,    68,   144,    64,   169,   106,   139,   138,
     140,   141,   149,   152,   153,   155,   142,   143,   150,   151,
     157,   158,   164,   165,   156,   166,   170,   168,   167,   171,
     172,   173,   174,   177,   178,   179,   181,   182,   183,   186,
     188,   187,   184,   176,   136,   185,    58,     0,   189,     0,
       0,    32,   191,     0,     0,    85
};

static const yytype_int16 yycheck[] =
{
      61,    62,    63,    10,    10,    10,    79,    10,    10,     7,
       8,    12,    17,     7,     8,    10,    17,     9,    21,    29,
      25,    27,    28,    25,    10,    26,    21,    21,    34,    21,
      37,    38,    39,    40,   107,    21,   109,     3,     4,     5,
       6,     7,     8,     9,    10,     1,    12,    10,    17,     5,
      19,     0,   113,     7,     8,     7,     8,    23,    24,     3,
       4,     5,     6,     7,     8,     9,    10,    21,    11,    21,
      21,    21,    12,    21,    10,    21,    21,    20,    21,    23,
      24,    29,    21,    30,    31,    32,    33,    13,    14,    15,
      16,    21,    21,     7,    21,     7,     7,    10,    19,    22,
      18,    11,    21,    11,    26,    11,    11,    11,     7,    18,
       7,     7,    10,    47,    34,    43,   157,    19,    21,    26,
      21,    21,    12,    12,    12,    10,    21,    21,    20,    20,
       7,    10,     7,    17,    21,     7,     7,    11,    21,    21,
      18,    10,     7,    11,    11,    21,    10,    10,    21,     7,
       7,    12,    18,   170,   111,    17,    36,    -1,    18,    -1,
      -1,    17,    21,    -1,    -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    29,    42,    43,    44,    47,    48,    43,    10,
       0,    43,    30,    31,    32,    33,    45,    46,    50,    51,
      58,    59,    70,    71,    80,    81,    21,    49,    21,    21,
      21,    21,    45,    10,    21,    52,    53,    10,    37,    38,
      39,    40,    60,    61,    10,    21,    72,    73,    10,    21,
      82,    83,    85,    86,    21,    12,    17,    26,    52,    12,
      62,    66,    64,    68,    60,    10,    17,    25,    72,     3,
       4,     5,     6,     7,     8,     9,    10,    12,    23,    24,
      87,    88,    89,    91,    92,    82,    21,    84,    10,     7,
       7,     8,    57,    21,     9,    21,    21,    57,    21,    57,
      21,    57,     7,     7,    10,    17,    19,    19,    89,    11,
      90,    22,    21,    26,    18,    54,    11,    63,    11,    67,
      11,    65,    11,    69,    78,    18,     7,     7,     7,    89,
      89,    13,    14,    15,    16,    10,    91,    57,    26,    21,
      21,    21,    21,    21,    34,    74,    10,    25,    79,    12,
      20,    20,    12,    12,    56,    10,    21,     7,    10,    10,
      27,    28,    34,    76,     7,    17,     7,    21,    11,    78,
       7,    21,    18,    10,     7,    75,    79,    11,    11,    21,
      77,    10,    10,    21,    18,    17,     7,    12,     7,    18,
      55,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    45,    45,    46,
      46,    46,    46,    47,    47,    49,    48,    50,    50,    51,
      52,    52,    54,    53,    55,    53,    56,    53,    53,    57,
      57,    58,    58,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    62,    62,    62,    63,    62,    64,    64,    64,
      65,    64,    66,    66,    66,    67,    66,    68,    68,    68,
      69,    68,    70,    70,    71,    72,    72,    74,    73,    75,
      73,    76,    73,    77,    73,    73,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    81,    82,    82,    83,    84,
      83,    83,    85,    86,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    91,    91,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     2,     0,     4,     1,     2,     2,
       1,     2,     0,     5,     0,    17,     0,     7,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     3,     2,     2,
       2,     2,     0,     2,     3,     0,     4,     0,     2,     3,
       0,     4,     0,     2,     3,     0,     4,     0,     2,     3,
       0,     4,     1,     2,     2,     1,     2,     0,     6,     0,
       9,     0,     7,     0,    10,     1,     0,     2,     0,     2,
       2,     2,     2,     1,     2,     2,     1,     2,     2,     0,
       3,     1,     2,     2,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     4,     2,     9,     1,
       1,     0,     2,     2,     4,     1,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOK_SCALAR_REGISTER  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1228 "Parser.cc" /* yacc.c:1257  */
        break;

    case 4: /* TOK_VECTOR_REGISTER  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1234 "Parser.cc" /* yacc.c:1257  */
        break;

    case 5: /* TOK_SPECIAL_REGISTER  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1240 "Parser.cc" /* yacc.c:1257  */
        break;

    case 6: /* TOK_MEMORY_REGISTER  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1246 "Parser.cc" /* yacc.c:1257  */
        break;

    case 8: /* TOK_HEX  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1252 "Parser.cc" /* yacc.c:1257  */
        break;

    case 10: /* TOK_ID  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1258 "Parser.cc" /* yacc.c:1257  */
        break;

    case 27: /* TOK_UAV  */
#line 70 "Parser.yy" /* yacc.c:1257  */
      { free ((*yyvaluep).id); }
#line 1264 "Parser.cc" /* yacc.c:1257  */
        break;

    case 87: /* arg_list  */
#line 71 "Parser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).list); }
#line 1270 "Parser.cc" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:
#line 151 "Parser.yy" /* yacc.c:1646  */
    {
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		// Process tasks and reset list
		context->TaskProcess();

		// Reset symbol table
		context->SymbolTableClear();
	}
#line 1544 "Parser.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 171 "Parser.yy" /* yacc.c:1646  */
    {
		int unique_id;

		std::string kernel_name((yyvsp[0].id));
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		//Get outer binary from context
		si2bin::OuterBin *outer_bin = context->GetOuterBin();
		
		// Create new objects for each kernel
		context->SetInnerBin(outer_bin->NewInnerBin(kernel_name));
		context->SetMetadata(outer_bin->NewMetadata());
		context->SetEntry(context->GetInnerBin()->NewEntry());
		context->SetTextBuffer(context->GetEntry()->GetTextSectionBuffer());

		// Add objects and values to over all elf (outer_bin)
		context->GetMetadata()->setUniqueId(context->GetUniqueId());

		// Increment id
		unique_id = context->GetUniqueId();
		unique_id++;
		context->SetUniqueId(unique_id);


	}
#line 1577 "Parser.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 219 "Parser.yy" /* yacc.c:1646  */
    {
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		// Find memory information and store it in metadata
		if (!strcmp((yyvsp[-2].id), "uavprivate"))
		{
			context->GetMetadata()->setUAVPrivate((yyvsp[0].num));
		}
		else if (!strcmp((yyvsp[-2].id), "hwregion"))
		{	
			context->GetMetadata()->setHWRegion((yyvsp[0].num));
		}
		else if (!strcmp((yyvsp[-2].id), "hwlocal"))
		{
			context->GetMetadata()->setHWLocal((yyvsp[0].num));
		}
		else if (!strcmp((yyvsp[-2].id), "userElementCount"))
		{
			misc::warning("User has provided 'userElementCount' but this number is automatically calculated");
		}
		else if (!strcmp((yyvsp[-2].id), "NumVgprs"))
		{	
			misc::warning("User has provided 'NumVgprs' but this number is automatically calculated");
		}
		else if (!strcmp((yyvsp[-2].id), "NumSgprs"))
		{
			misc::warning("User has provided 'NumSgprs' but this number is automatically calculated");
		}
		else if (!strcmp((yyvsp[-2].id), "FloatMode"))
		{
			context->GetInnerBin()->SetFloatMode((yyvsp[0].num));
		}
		else if (!strcmp((yyvsp[-2].id), "IeeeMode"))
		{	
			context->GetInnerBin()->SetIeeeMode((yyvsp[0].num));
		}
		else if (!strcmp((yyvsp[-2].id), "COMPUTE_PGM_RSRC2"))
		{
			misc::warning("User has provided 'COMPUTE_PGM_RSRC2' but this number is automatically calculated from provided PGM_RSRC2 fields");
		}
		else if (!strcmp((yyvsp[-2].id), "COMPUTE_PGM_RSRC2"))
		{
			misc::warning("User has provided 'COMPUTE_PGM_RSRC2' but this number is automatically calculated from provided PGM_RSRC2 fields");
		}
		else
		{
			si2bin_yyerror_fmt("Unrecognized assignment: %s", (yyvsp[-2].id));
		}
		
	}
#line 1635 "Parser.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 273 "Parser.yy" /* yacc.c:1646  */
    {
		bool err;
		
		// Get context instance
		si2bin::Context *context = si2bin::Context::getInstance();

		//User Elements should be in scalar registers
		if (strcmp((yyvsp[-5].id), "s"))
			si2bin_yyerror_fmt("User Elements should be stored in scalar registers");

		// check for correct syntax
		if (strcmp((yyvsp[-14].id), "userElements"))
			si2bin_yyerror_fmt("User Elements not correctly specified: %s", (yyvsp[-14].id));
		
		// Make sure userElement index is in correct range
		if ((yyvsp[-12].num) > 15 || (yyvsp[-12].num) < 0)
			si2bin_yyerror_fmt("User Elements index is out of allowed range (0 to 15)");

		// Create userElement object
		context->GetInnerBin()->NewUserElement((yyvsp[-12].num), 
			SI::binary_user_data_map.MapString((yyvsp[-9].id), err),
			(yyvsp[-7].num),
			(yyvsp[-3].num),
			(yyvsp[-1].num) - (yyvsp[-3].num) + 1);

		if (err)
			si2bin_yyerror_fmt("Unrecognized data class: %s", (yyvsp[-9].id));


	}
#line 1670 "Parser.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 304 "Parser.yy" /* yacc.c:1646  */
    {
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		SI::BinaryComputePgmRsrc2 *pgm_rsrc2 = 
			context->GetInnerBin()->GetPgmRsrc2();
		
		// Find pgm_rsrc2 information
		if (strcmp((yyvsp[-4].id), "COMPUTE_PGM_RSRC2"))
			si2bin_yyerror_fmt("Unrecognized assignment: %s", (yyvsp[-4].id));
		
		if (!strcmp((yyvsp[-2].id), "SCRATCH_EN"))
		{
			pgm_rsrc2->scrach_en = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "USER_SGPR"))
		{
			pgm_rsrc2->user_sgpr = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "TRAP_PRESENT"))
		{
			pgm_rsrc2->trap_present = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "TGID_X_EN"))
		{
			pgm_rsrc2->tgid_x_en = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "TGID_Y_EN"))
		{
			pgm_rsrc2->tgid_y_en = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "TGID_Z_EN"))
		{
			pgm_rsrc2->tgid_z_en = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "TG_SIZE_EN"))
		{
			pgm_rsrc2->tg_size_en = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "TIDIG_COMP_CNT"))
		{
			pgm_rsrc2->tidig_comp_cnt = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "EXCP_EN_MSB"))
		{
			pgm_rsrc2->excp_en_msb = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "LDS_SIZE"))
		{
			pgm_rsrc2->lds_size = (yyvsp[0].num);
		}
		else if (!strcmp((yyvsp[-2].id), "EXCP_EN"))
		{
			pgm_rsrc2->excp_en = (yyvsp[0].num);
		}
		else
		{
			si2bin_yyerror_fmt("Unrecognized field of COMPUTE_PGM_RSRC2: %s", (yyvsp[-2].id));
		}


	}
#line 1738 "Parser.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 372 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.num) = (yyvsp[0].num);
	}
#line 1746 "Parser.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 376 "Parser.yy" /* yacc.c:1646  */
    {
		int value;
		
		sscanf((yyvsp[0].id), "%x", &value);

		(yyval.num) = value;
	}
#line 1758 "Parser.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 413 "Parser.yy" /* yacc.c:1646  */
    {
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataFloat((yyvsp[-1].num_float));
	}
#line 1770 "Parser.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 421 "Parser.yy" /* yacc.c:1646  */
    {
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataFloat((yyvsp[0].num_float));
	}
#line 1782 "Parser.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 434 "Parser.yy" /* yacc.c:1646  */
    {
		unsigned int value = (yyvsp[-1].num);
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataWord(value);
	}
#line 1796 "Parser.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 444 "Parser.yy" /* yacc.c:1646  */
    {
		unsigned int value = (yyvsp[0].num);
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataWord(value);
	}
#line 1810 "Parser.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 459 "Parser.yy" /* yacc.c:1646  */
    {
		unsigned short value = (yyvsp[-1].num);
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataHalf(value);
	}
#line 1824 "Parser.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 469 "Parser.yy" /* yacc.c:1646  */
    { 
		unsigned short value = (yyvsp[0].num);
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataHalf(value);
	}
#line 1838 "Parser.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 484 "Parser.yy" /* yacc.c:1646  */
    {
		unsigned char value = (yyvsp[-1].num);
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataByte(value);
	}
#line 1852 "Parser.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 494 "Parser.yy" /* yacc.c:1646  */
    {
		unsigned char value = (yyvsp[0].num);
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		context->GetOuterBin()->NewDataByte(value);
	}
#line 1866 "Parser.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 522 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[0].si_arg);
		SI::ArgValue *arg_val = dynamic_cast<SI::ArgValue *>(arg);
		bool err;

		
		// Set argument name
		arg_val->setName((yyvsp[-2].id));
		
		// Set arg fields
		arg_val->setDataType(
			static_cast<SI::ArgDataType>(
			SI::arg_data_type_map.MapString((yyvsp[-3].id), err)));
		if(err)
			si2bin_yyerror_fmt("Unrecognized data type: %s", (yyvsp[-3].id));

		arg_val->setNumElems(1);
		arg_val->setConstantBufferNum(1);
		arg_val->setConstantOffset((yyvsp[-1].num));
		
	}
#line 1892 "Parser.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 544 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[0].si_arg);
		SI::ArgValue *arg_val = dynamic_cast<SI::ArgValue *>(arg);
		bool err;

		// Set argument name
		arg_val->setName((yyvsp[-2].id));
		
		// Set argument fields
		arg_val->setDataType(
			static_cast<SI::ArgDataType>(
			SI::arg_data_type_map.MapString((yyvsp[-6].id), err)));
		if (err)
			si2bin_yyerror_fmt("Unrecognized data type: %s", (yyvsp[-6].id));
		
		arg_val->setNumElems((yyvsp[-4].num));
		arg_val->setConstantBufferNum(1);
		arg_val->setConstantOffset((yyvsp[-1].num));
		
	}
#line 1917 "Parser.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 565 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[0].si_arg);
		SI::ArgPointer *arg_ptr = dynamic_cast<SI::ArgPointer *>(arg);
		bool err;

		// Set new argument name
		arg_ptr->setName((yyvsp[-2].id));
		
		// Initialize argument
		arg_ptr->setNumElems(1);
		arg_ptr->setDataType(
			static_cast<SI::ArgDataType>(
			SI::arg_data_type_map.MapString((yyvsp[-4].id), err)));
		if (err)
			si2bin_yyerror_fmt("Unrecognized data type: %s", (yyvsp[-4].id));

		arg_ptr->setConstantBufferNum(1);
		arg_ptr->setConstantOffset((yyvsp[-1].num));

	}
#line 1942 "Parser.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 586 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[0].si_arg);
		SI::ArgPointer *arg_ptr = dynamic_cast<SI::ArgPointer *>(arg);
		bool err;

		// Set new argument name
		arg_ptr->setName((yyvsp[-2].id));
		
		// Initialize argument
		arg_ptr->setNumElems((yyvsp[-5].num));
		arg_ptr->setDataType(
			static_cast<SI::ArgDataType>(
			SI::arg_data_type_map.MapString((yyvsp[-7].id), err)));
		if (err)
			si2bin_yyerror_fmt("Unrecognized data type: %s", (yyvsp[-7].id));
		
		arg_ptr->setConstantBufferNum(1);
		arg_ptr->setConstantOffset((yyvsp[-1].num));

	}
#line 1967 "Parser.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 611 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg;
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		/* Create an argument with defaults*/
		arg = context->GetMetadata()->NewArgValue("arg",
			static_cast<SI::ArgDataType>(0), 0, 0, 0);

		(yyval.si_arg) = arg;
	}
#line 1985 "Parser.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 625 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[-1].si_arg);

		// set constarg field to true
		arg->setConstArg(true);
		
		// Return argument
		(yyval.si_arg) = arg;
	}
#line 1999 "Parser.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 638 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg;
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		/* Create an argument with defaults*/
		arg = context->GetMetadata()->NewArgPointer("arg", 
			static_cast<SI::ArgDataType>(0), 0, 0, 0, 
			SI::ArgScopeUAV, 12, 0, SI::ArgAccessTypeReadWrite);
		(yyval.si_arg) = arg;
	}
#line 2017 "Parser.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 652 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[-1].si_arg);
		SI::ArgPointer *arg_ptr = dynamic_cast<SI::ArgPointer *>(arg);
		bool err;

		// Translate access type
		arg_ptr->setAccessType(
			static_cast<SI::ArgAccessType>(
			SI::arg_access_type_map.MapString((yyvsp[0].id), err)));
		if (err)
			si2bin_yyerror_fmt("Unrecognized access type: %s", (yyvsp[0].id));
		
		(yyval.si_arg) = arg;
	}
#line 2036 "Parser.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 667 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[-1].si_arg);
		SI::ArgPointer *arg_ptr = dynamic_cast<SI::ArgPointer *>(arg);
		
		// Obtain UAV index
		arg_ptr->setScope(SI::ArgScopeUAV);
		arg_ptr->setBufferNum(atoi((yyvsp[0].id) + 3));

		(yyval.si_arg) = arg;
	}
#line 2051 "Parser.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 678 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[-1].si_arg);
		SI::ArgPointer *arg_ptr = dynamic_cast<SI::ArgPointer *>(arg);
	
		// Set scope to hl
		arg_ptr->setScope(SI::ArgScopeHwLocal);
		arg_ptr->setBufferNum(1);

		// Return argument
		(yyval.si_arg) = arg;
	}
#line 2067 "Parser.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 690 "Parser.yy" /* yacc.c:1646  */
    {
		SI::Arg *arg = (yyvsp[-1].si_arg);
	
		// set constarg field to true
		arg->setConstArg(true);

		// Return argument
		(yyval.si_arg) = arg;
	}
#line 2081 "Parser.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 718 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Inst *inst = (yyvsp[0].inst);
		
		ELFWriter::Buffer *buffer;
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
	
		buffer = context->GetEntry()->GetTextSectionBuffer();
		std::stringstream &stream =  buffer->getStream();

		// Generate code
		inst->Encode();
		inst->Write(stream);
		//ELFWriterBufferWrite(si2bin_entry->text_section_buffer,
		//		inst->bytes.byte, inst->size);
		
		// Dump Instruction Info
		//si2bin::inst->Dump(os);
	}
#line 2107 "Parser.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 744 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Symbol *symbol;
		
		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		
		// Check if symbol exists
		symbol = context->getSymbol((yyvsp[-1].id));

		// Create if it does not exists
		if (!symbol)
		{
			symbol = context->NewSymbol((yyvsp[-1].id));
		}
		else
		{
			if (symbol->GetDefined())
				si2bin_yyerror_fmt("multiply defined label: %s", (yyvsp[-1].id));
		}

		// Define symbol	
		symbol->SetDefined(true);
		symbol->SetValue(context->GetTextBuffer()->getWritePosition());

	}
#line 2139 "Parser.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 774 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Inst *inst;
		std::vector<si2bin::Arg *> *arg_list;

		// Get arguments
		arg_list = (yyvsp[0].list);

		//no arguments - s_endpgm
		if (!arg_list)
			arg_list = new std::vector<si2bin::Arg *>() ;
		
		// Create instruction
		inst = new si2bin::Inst((yyvsp[-1].id), *arg_list);

		// Return instructions
		(yyval.inst) = inst;
	}
#line 2161 "Parser.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 795 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.list) = NULL;
	}
#line 2169 "Parser.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 799 "Parser.yy" /* yacc.c:1646  */
    {
		std::vector<si2bin::Arg *> *arg_list = new std::vector<si2bin::Arg *>() ;
		
		arg_list->push_back((yyvsp[0].arg));
		(yyval.list) = arg_list;
	}
#line 2180 "Parser.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 806 "Parser.yy" /* yacc.c:1646  */
    {
		std::vector<si2bin::Arg *> *arg_list = (yyvsp[-2].list);

		// Add argument to head of argument list
		//ListHead(arg_list);
		//ListInsert(arg_list, asObject($1));
		arg_list->push_back((yyvsp[0].arg));
		
		// Return the argument list
		(yyval.list) = arg_list;

	}
#line 2197 "Parser.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 823 "Parser.yy" /* yacc.c:1646  */
    {	
		int value = atoi((yyvsp[0].id) + 1);

		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		(yyval.arg) = new si2bin::ArgScalarRegister(value);

		if (value >= context->GetInnerBin()->GetNumSgpr())
			context->GetInnerBin()->SetNumSgpr(value + 1);
		
	}
#line 2215 "Parser.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 838 "Parser.yy" /* yacc.c:1646  */
    {
		int value = atoi((yyvsp[0].id) + 1);

		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();

		(yyval.arg) = new si2bin::ArgVectorRegister(value);

		if (value >= context->GetInnerBin()->GetNumVgpr())
			context->GetInnerBin()->SetNumVgpr(value + 1);
		
	}
#line 2233 "Parser.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 853 "Parser.yy" /* yacc.c:1646  */
    {
		SI::InstSpecialReg reg;
		reg = static_cast<SI::InstSpecialReg>
			(SI::inst_special_reg_map.MapString((yyvsp[0].id)));
		(yyval.arg) = new si2bin::ArgSpecialRegister(reg);
	}
#line 2244 "Parser.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 861 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.arg) = new si2bin::ArgMemRegister(atoi((yyvsp[0].id) + 1));
	}
#line 2252 "Parser.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 866 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.arg) = new si2bin::ArgLiteral((yyvsp[0].num));
	}
#line 2260 "Parser.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 871 "Parser.yy" /* yacc.c:1646  */
    {
		int value;

		sscanf((yyvsp[0].id), "%x", &value);
		(yyval.arg) = new si2bin::ArgLiteral(value);
	}
#line 2271 "Parser.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 879 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.arg) = new si2bin::ArgLiteralFloat((yyvsp[0].num_float));
	}
#line 2279 "Parser.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 886 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.arg) = (yyvsp[0].arg);
	}
#line 2287 "Parser.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 891 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Arg *arg = NULL;

		int low;
		int high;

		// Get context instance
		si2bin::Context *context;
		context = si2bin::Context::getInstance();
		
		// Read arguments
		low = (yyvsp[-3].num);
		high = (yyvsp[-1].num);
		
		// Initialize
		if (!strcmp((yyvsp[-5].id), "s"))
		{
			arg = new si2bin::ArgScalarRegisterSeries(low, high);
			if (high >= context->GetInnerBin()->GetNumSgpr())
				context->GetInnerBin()->SetNumSgpr(high + 1);
		}
		else if (!strcmp((yyvsp[-5].id), "v"))
		{
			arg = new si2bin::ArgVectorRegisterSeries(low, high);
			if (high >= context->GetInnerBin()->GetNumVgpr())
				context->GetInnerBin()->SetNumVgpr(high + 1);
		}
		else
		{
			si2bin_yyerror_fmt("invalid register series: %s", (yyvsp[-5].id));
		}
		
		// Return created argument
		(yyval.arg) = arg;
	}
#line 2327 "Parser.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 928 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Arg *arg = (yyvsp[-1].arg);

		// Activate absolute value flag
		arg->setAbs(true);

		// Check valid application of 'abs'
		switch (arg->getType())
		{
		case si2bin::ArgTypeScalarRegister:
		case si2bin::ArgTypeScalarRegisterSeries:
		case si2bin::ArgTypeVectorRegister:
		case si2bin::ArgTypeVectorRegisterSeries:
			break;

		default:
			si2bin_yyerror_fmt("abs() function not allowed for argument");
		}

		// Return
		(yyval.arg) = arg;
	}
#line 2354 "Parser.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 952 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Arg *arg = (yyvsp[0].arg);

		// Activate absolute value flag
		arg->setNeg(true);

		// Check valid application of 'abs'
		switch (arg->getType())
		{
		case si2bin::ArgTypeScalarRegister:
		case si2bin::ArgTypeScalarRegisterSeries:
		case si2bin::ArgTypeVectorRegister:
		case si2bin::ArgTypeVectorRegisterSeries:
			break;

		default:
			si2bin_yyerror_fmt("abs() function not allowed for argument");
		}

		// Return
		(yyval.arg) = arg;
	}
#line 2381 "Parser.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 976 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Arg *arg;
		si2bin::Arg *soffset;
		si2bin::ArgMaddrQual *qual;

		char *id_data_format;
		char *id_num_format;
		
		SI::InstBufDataFormat data_format;
		SI::InstBufNumFormat num_format;
		
		bool err;

		// Read arguments
		soffset = (yyvsp[-8].arg);
		qual = dynamic_cast<si2bin::ArgMaddrQual *>((yyvsp[-7].arg));
		id_data_format = (yyvsp[-3].id);
		id_num_format = (yyvsp[-1].id);
		
		// Data format
		data_format = 
			static_cast<SI::InstBufDataFormat>(
			SI::inst_buf_data_format_map.MapString(id_data_format, err));
		if (err)
			si2bin_yyerror_fmt("%s: invalid data format", id_data_format);
			
		// Number format
		num_format = 
			static_cast<SI::InstBufNumFormat>(
			SI::inst_buf_num_format_map.MapString(id_num_format, err));
		if (err)
			si2bin_yyerror_fmt("%s: invalid number format", id_num_format); 

		// Create argument
		arg = new si2bin::ArgMaddr(soffset, qual, data_format, num_format);	
			
		// Return
		(yyval.arg) = arg;
	}
#line 2425 "Parser.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 1017 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::Arg *arg;
		
		// Create argument
		arg = new si2bin::ArgLabel((yyvsp[0].id));

		// Return argument
		(yyval.arg) = arg;
	}
#line 2439 "Parser.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 1028 "Parser.yy" /* yacc.c:1646  */
    {
		// The return value is given by 'waitcnt_arg's definition
	}
#line 2447 "Parser.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 1036 "Parser.yy" /* yacc.c:1646  */
    {
		(yyval.arg) = new si2bin::ArgMaddrQual(false, false, 0);
	}
#line 2455 "Parser.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 1041 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::ArgMaddrQual *qual = 
			static_cast<si2bin::ArgMaddrQual *>((yyvsp[-1].arg));

		assert(qual->getType() == si2bin::ArgTypeMaddrQual);
		if (qual->getOffen())
			si2bin_yyerror_fmt("redundant qualifier 'offen'");
		qual->setOffen(true);
		(yyval.arg) = qual;
	}
#line 2470 "Parser.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 1053 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::ArgMaddrQual *qual = 
			static_cast<si2bin::ArgMaddrQual *>((yyvsp[-1].arg));

		assert(qual->getType() == si2bin::ArgTypeMaddrQual);
		if (qual->getIdxen())
			si2bin_yyerror_fmt("redundant qualifier 'idxen'");
		qual->setIdxen(true);
		(yyval.arg) = qual;
	}
#line 2485 "Parser.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 1065 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::ArgMaddrQual *qual =
			static_cast<si2bin::ArgMaddrQual *>((yyvsp[-3].arg));
		int offset = (yyvsp[0].num);

		assert(qual->getType() == si2bin::ArgTypeMaddrQual);
		qual->setOffset(offset);
		// FIXME - check range of 'offset'
		(yyval.arg) = qual;
	}
#line 2500 "Parser.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 1081 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::ArgWaitCnt *arg1 = dynamic_cast<si2bin::ArgWaitCnt *>((yyvsp[-2].arg));
		si2bin::ArgWaitCnt *arg2 = dynamic_cast<si2bin::ArgWaitCnt *>((yyvsp[0].arg));
		
		if (arg2->getVmcntActive() && arg1->getVmcntActive())
			si2bin_yyerror_fmt("duplicate 'vmcnt' token");
		arg2->setVmcntActive(arg2->getVmcntActive() + arg1->getVmcntActive());
		arg2->setVmcntValue(arg2->getVmcntValue() + arg1->getVmcntValue());		
		
		if (arg2->getExpcntActive() && arg1->getExpcntActive())
			si2bin_yyerror_fmt("duplicate 'expcnt' token");
		arg2->setExpcntActive(arg2->getExpcntActive() + arg1->getExpcntActive());
		arg2->setExpcntValue(arg2->getExpcntValue() + arg1->getExpcntValue());		
		
		if (arg2->getLgkmcntActive() && arg1->getLgkmcntActive())
			si2bin_yyerror_fmt("duplicate 'lgkmcnt' token");
		arg2->setLgkmcntActive(arg2->getLgkmcntActive() + arg1->getLgkmcntActive());
		arg2->setLgkmcntValue(arg2->getLgkmcntValue() + arg1->getLgkmcntValue());		
		
		delete arg1;
		(yyval.arg) = arg2;
	}
#line 2527 "Parser.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 1108 "Parser.yy" /* yacc.c:1646  */
    {
		si2bin::ArgWaitCnt *arg;

		// Create argument
		arg = new si2bin::ArgWaitCnt();
		
		if (!strcmp((yyvsp[-3].id), "vmcnt"))
		{
			arg->setVmcntActive(true);
			arg->setVmcntValue((yyvsp[-1].num));
		}
		else if (!strcmp((yyvsp[-3].id), "expcnt"))
		{
			arg->setExpcntActive(true);
			arg->setExpcntValue((yyvsp[-1].num));
		}
		else if (!strcmp((yyvsp[-3].id), "lgkmcnt"))
		{
			arg->setLgkmcntActive(true);
			arg->setLgkmcntValue((yyvsp[-1].num));
		}
		
		// Return
		(yyval.arg) = arg;
	}
#line 2557 "Parser.cc" /* yacc.c:1646  */
    break;


#line 2561 "Parser.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1135 "Parser.yy" /* yacc.c:1906  */

