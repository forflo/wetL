/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

#include "parser.h"
#include <stdlib.h>

struct nary_node *root;


/* Line 371 of yacc.c  */
#line 76 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OR = 258,
     AND = 259,
     BINOR = 260,
     BINXOR = 261,
     BINAND = 262,
     NOTEQUAL = 263,
     EQUAL = 264,
     LESS = 265,
     GREATER = 266,
     LESSTHAN = 267,
     GREATERTHAN = 268,
     RIGHTSHIFT = 269,
     LEFTSHIFT = 270,
     MINUS = 271,
     PLUS = 272,
     MOD = 273,
     DIV = 274,
     MUL = 275,
     POW = 276,
     UMINUS = 277,
     NOT = 278,
     COMPL = 279,
     ASSOP = 280,
     ASPLUS = 281,
     ASMINUS = 282,
     ASMUL = 283,
     ASDIV = 284,
     ASMOD = 285,
     ASPOW = 286,
     ASBINOR = 287,
     ASBINAND = 288,
     ASBINXOR = 289,
     ASRIGHTSHIFT = 290,
     ASLEFTSHIFT = 291,
     KEYSTROKE = 292,
     HOTSTRING = 293,
     ON = 294,
     IF = 295,
     GLOBAL = 296,
     ELSE = 297,
     ELIF = 298,
     CONTINUE = 299,
     BREAK = 300,
     UTIL = 301,
     FOR = 302,
     IN = 303,
     WHILE = 304,
     DO = 305,
     SWITCH = 306,
     PRINT = 307,
     RET = 308,
     CASE = 309,
     FUNCTION = 310,
     EXTERNAL = 311,
     TRUE = 312,
     FALSE = 313,
     STRING = 314,
     NUMBER = 315,
     ID = 316,
     FCELANG = 317,
     FCEB_CODE = 318,
     INT = 319,
     FFI_CHAR = 320,
     FFI_SHORT = 321,
     FFI_INT = 322,
     FFI_LONG = 323,
     FFI_LONG_LONG = 324,
     FFI_DOUBLE = 325,
     FFI_FLOAT = 326,
     FFI_LONG_DOUBLE = 327,
     FFI_VOIDPTR = 328,
     CURLOPEN = 329,
     CURLCLOSE = 330,
     PAROPEN = 331,
     PARCLOSE = 332,
     BOXOPEN = 333,
     BOXCLOSE = 334,
     SEMI = 335,
     DP = 336,
     POINT = 337,
     COMMA = 338,
     SHARP = 339,
     DOLLAR = 340,
     QMARK = 341
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 9 "parser.y"

	struct value *v;
	struct nary_node *k;


/* Line 387 of yacc.c  */
#line 211 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 239 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   797

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    13,    15,    18,    24,    26,
      30,    32,    36,    37,    42,    46,    49,    53,    56,    58,
      62,    64,    67,    71,    75,    79,    83,    87,    91,    95,
      99,   103,   107,   111,   115,   119,   123,   127,   131,   135,
     139,   143,   147,   151,   155,   159,   163,   167,   171,   175,
     179,   183,   187,   191,   194,   197,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   228,
     231,   233,   238,   243,   249,   255,   259,   263,   267,   272,
     274,   276,   278,   280,   282,   284,   286,   288,   290,   293,
     297,   300,   303,   306,   310,   312,   315,   317,   321,   324,
     330,   338,   349,   359,   365,   371,   379,   385,   387,   391,
     397
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      88,     0,    -1,    99,    -1,    74,    99,    75,    -1,    74,
      91,    75,    -1,    92,    -1,    91,    92,    -1,    54,    76,
     101,    77,    99,    -1,   101,    -1,    93,    83,   101,    -1,
     104,    -1,    94,    83,   104,    -1,    -1,   109,   101,    83,
      95,    -1,    76,    98,    77,    -1,    76,    77,    -1,    76,
      93,    77,    -1,    76,    77,    -1,    61,    -1,    98,    83,
      61,    -1,   111,    -1,    99,   111,    -1,    94,    25,    93,
      -1,    94,    26,    93,    -1,    94,    27,    93,    -1,    94,
      28,    93,    -1,    94,    29,    93,    -1,    94,    30,    93,
      -1,    94,    31,    93,    -1,    94,    32,    93,    -1,    94,
      33,    93,    -1,    94,    34,    93,    -1,    94,    35,    93,
      -1,    94,    36,    93,    -1,   101,     3,   101,    -1,   101,
       4,   101,    -1,   101,     5,   101,    -1,   101,     6,   101,
      -1,   101,     7,   101,    -1,   101,     9,   101,    -1,   101,
       8,   101,    -1,   101,    13,   101,    -1,   101,    12,   101,
      -1,   101,    11,   101,    -1,   101,    10,   101,    -1,   101,
      15,   101,    -1,   101,    14,   101,    -1,   101,    17,   101,
      -1,   101,    16,   101,    -1,   101,    20,   101,    -1,   101,
      19,   101,    -1,   101,    18,   101,    -1,   101,    21,   101,
      -1,    16,   101,    -1,    24,   101,    -1,    23,   101,    -1,
     110,    -1,   108,    -1,    60,    -1,    59,    -1,    57,    -1,
      64,    -1,    58,    -1,   102,    -1,   113,    -1,   114,    -1,
     104,    -1,   103,    -1,    76,   101,    77,    -1,   102,    97,
      -1,    61,    -1,   102,    78,   101,    79,    -1,    55,    61,
      96,    89,    -1,    55,    61,    96,   106,    89,    -1,    55,
      61,    96,   107,    89,    -1,    39,    37,   101,    -1,    39,
      38,   101,    -1,    74,    95,    75,    -1,    20,    74,    95,
      75,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      78,    79,    -1,    78,    93,    79,    -1,   100,    80,    -1,
      45,    80,    -1,    44,    80,    -1,    52,   101,    80,    -1,
      89,    -1,   103,    80,    -1,   105,    -1,    41,   100,    80,
      -1,    41,   105,    -1,    40,    76,   101,    77,    89,    -1,
      40,    76,   101,    77,    89,    42,    89,    -1,    40,    76,
     101,    77,    89,    43,    76,   101,    77,    89,    -1,    47,
      76,   100,    80,   101,    80,    93,    77,    89,    -1,    47,
      98,    48,    93,    89,    -1,    49,    76,   101,    77,    89,
      -1,    50,    89,    49,    76,   101,    77,    80,    -1,    51,
      76,   101,    77,    90,    -1,   112,    -1,    56,    62,    63,
      -1,    76,    23,    62,    77,    63,    -1,    76,    86,    62,
      77,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    61,    65,    69,    71,    75,    79,    81,
      85,    87,    91,    92,    95,    97,   101,   103,   107,   111,
     116,   118,   122,   124,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   149,   151,   153,   155,   157,   159,
     161,   163,   165,   167,   169,   171,   173,   175,   177,   179,
     181,   183,   185,   187,   189,   191,   193,   195,   197,   199,
     201,   203,   205,   207,   211,   213,   215,   217,   219,   223,
     227,   229,   233,   235,   237,   241,   245,   249,   251,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   275,   277,
     281,   283,   285,   287,   289,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   311,   313,   315,   319,   323,
     327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "BINOR", "BINXOR", "BINAND",
  "NOTEQUAL", "EQUAL", "LESS", "GREATER", "LESSTHAN", "GREATERTHAN",
  "RIGHTSHIFT", "LEFTSHIFT", "MINUS", "PLUS", "MOD", "DIV", "MUL", "POW",
  "UMINUS", "NOT", "COMPL", "ASSOP", "ASPLUS", "ASMINUS", "ASMUL", "ASDIV",
  "ASMOD", "ASPOW", "ASBINOR", "ASBINAND", "ASBINXOR", "ASRIGHTSHIFT",
  "ASLEFTSHIFT", "KEYSTROKE", "HOTSTRING", "ON", "IF", "GLOBAL", "ELSE",
  "ELIF", "CONTINUE", "BREAK", "UTIL", "FOR", "IN", "WHILE", "DO",
  "SWITCH", "PRINT", "RET", "CASE", "FUNCTION", "EXTERNAL", "TRUE",
  "FALSE", "STRING", "NUMBER", "ID", "FCELANG", "FCEB_CODE", "INT",
  "FFI_CHAR", "FFI_SHORT", "FFI_INT", "FFI_LONG", "FFI_LONG_LONG",
  "FFI_DOUBLE", "FFI_FLOAT", "FFI_LONG_DOUBLE", "FFI_VOIDPTR", "CURLOPEN",
  "CURLCLOSE", "PAROPEN", "PARCLOSE", "BOXOPEN", "BOXCLOSE", "SEMI", "DP",
  "POINT", "COMMA", "SHARP", "DOLLAR", "QMARK", "$accept", "program",
  "block", "switchblock", "labeled_stmtlist", "labeled_statement",
  "explist", "varlist", "exp_cast_list", "parlist", "arglist", "idlist",
  "stmtlist", "assignment", "expression", "evalexpression", "functioncall",
  "var_exp", "functiondef", "hotkeydef", "hotstringdef", "ffi_struct_def",
  "ffi_cast", "listconstructor", "statement", "fceblock", "fceexp",
  "fceexp_rc", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    90,    91,    91,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   102,   102,   102,   103,
     104,   104,   105,   105,   105,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   112,   113,
     114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     1,     2,     5,     1,     3,
       1,     3,     0,     4,     3,     2,     3,     2,     1,     3,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     4,     4,     5,     5,     3,     3,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     2,     3,     1,     2,     1,     3,     2,     5,
       7,    10,     9,     5,     5,     7,     5,     1,     3,     5,
       5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,    94,     0,     2,     0,
       0,    67,    10,    96,    20,   107,    64,    65,     0,     0,
      67,    98,    92,    91,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    62,    59,    58,    61,    12,
       0,     0,    63,    66,    57,    56,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    90,     0,     0,
      69,    95,     0,    97,     0,     0,     0,     0,     0,     0,
      53,    12,    55,    54,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,    88,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
     108,     3,     0,     0,    68,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    11,    17,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,    77,
       0,    89,     0,    34,    35,    36,    37,    38,    40,    39,
      44,    43,    42,    41,    46,    45,    48,    47,    51,    50,
      49,    52,    15,     0,     0,    72,     0,     0,     0,     0,
      16,    71,    99,     0,   103,   104,     0,     0,   106,    78,
      12,     9,    14,     0,     0,    73,    74,   109,   110,     0,
       0,     0,     0,     0,     0,     5,    13,    75,    76,   100,
       0,     0,   105,     0,     4,     6,     0,     0,     0,     0,
     102,     0,   101,     7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,   198,   214,   215,   106,    17,   103,   129,
      80,    36,    18,    19,   107,    52,    30,    53,    23,   186,
     187,    54,   104,    55,    24,    25,    26,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
     422,   -52,   -35,   -46,   -41,   -45,   -34,     7,    -3,   649,
      26,    45,   -84,   422,   556,    90,   -84,   161,   422,    29,
     -15,    30,     6,   -84,   -84,   -84,   -84,   -84,   649,    31,
     -84,   -84,   -84,   -84,   -84,   -38,   -39,   649,    63,   649,
     649,    34,   649,   649,   -84,   -84,   -84,   -84,   -84,    -1,
     579,   267,   -15,   -84,   -84,   -84,    38,    52,   312,   602,
      54,   324,   -84,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   -38,   -84,   -84,   625,   649,
     -84,   -84,   399,   -84,    39,   649,    57,   418,    44,   437,
     -84,    -1,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,    47,   649,   -84,   -54,   725,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   -84,   -49,   -29,
     -84,   -84,    49,    51,   -84,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,     6,   -84,   -50,
     305,     7,   649,   -53,   -84,     7,   649,    50,    73,   -84,
     126,   -84,   649,   743,   760,   776,   244,   491,   200,   200,
     159,   159,   159,   159,    33,    33,    59,    59,   100,   100,
     100,   -84,   -84,   -40,    19,   -84,     7,     7,    89,   118,
     -84,   -84,    61,   286,   -84,   -84,   512,   128,   -84,   -84,
      -1,   725,   -84,   649,   649,   -84,   -84,   -84,   -84,     7,
     107,   649,   119,   124,   -43,   -84,   -84,   725,   725,   -84,
     649,   -37,   -84,   649,   -84,   -84,   531,     7,   550,     7,
     -84,   422,   -84,   422
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,    -2,   -84,   -84,   -13,    28,   -84,   -83,   -84,
     -84,    75,    -7,    13,    46,     0,     4,     1,   202,   -84,
     -84,   -84,   -84,   -84,   -11,   -84,   -84,   -84
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int16 yytable[] =
{
      20,    22,    20,    22,    21,    38,    58,    76,   158,    85,
     184,   213,    34,    20,    22,    29,    34,    21,    20,    22,
      10,    13,    21,    12,    28,   161,    12,   190,   182,   162,
     162,    35,   224,   162,    32,    20,    22,   202,    14,    33,
     227,    14,    37,    86,    86,    13,   162,    76,    84,   121,
     122,   123,   124,   125,   126,    51,   203,   204,    20,    22,
      61,    78,    21,    79,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    39,    82,    20,   147,   123,   124,   125,
     126,    13,   -66,    87,   -66,    89,    90,    56,    92,    93,
      62,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   209,   210,    92,   149,    57,    91,    77,
      81,    83,    88,   153,   128,   130,   133,   216,   154,   152,
     156,   126,   159,   162,   197,   150,   188,   185,   189,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   199,   192,
     160,   194,   207,   195,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   119,   120,   121,   122,   123,   124,   125,
     126,   208,   213,   220,   205,   206,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   193,   222,
     223,   225,   196,   183,    31,     0,     0,   219,   201,   200,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    76,     0,   233,   230,     0,   232,     0,     0,
       0,    20,    22,    20,    22,    21,     0,    21,     0,   221,
       0,     0,     0,     0,    75,     0,     0,     0,     0,   217,
     218,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   226,     0,     0,   228,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     1,     2,     0,     0,     3,     4,     0,     5,
       0,     6,     7,     8,     9,     0,   211,    10,    11,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,    13,   131,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
       0,     0,     1,     2,     0,     0,     3,     4,     0,     5,
       0,     6,     7,     8,     9,     0,   151,    10,    11,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,    13,     0,    14,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   157,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    40,     0,     0,     0,    41,     0,     0,    59,
      43,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,    40,     0,     0,     0,    41,
       0,     0,    42,    43,     0,     0,     0,     0,   229,     0,
       0,     0,     0,    44,    45,    46,    47,    12,    40,     0,
      48,     0,    41,     0,     0,    42,    43,   231,     0,     0,
      49,     0,    14,     0,    50,     0,    44,    45,    46,    47,
      12,    40,    60,    48,     0,    41,     0,     0,    42,    43,
       0,     0,     0,    49,     0,    14,     0,    50,   105,    44,
      45,    46,    47,    12,   132,    40,    48,     0,     0,    41,
       0,     0,    42,    43,     0,     0,    49,     0,    14,     0,
      50,     0,    44,    45,    46,    47,    12,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    14,   148,    50,     0,     0,    44,    45,    46,    47,
      12,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    14,     0,    50,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-84)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     0,     2,     2,     0,     7,    13,    18,    91,    48,
      39,    54,    61,    13,    13,     2,    61,    13,    18,    18,
      55,    74,    18,    61,    76,    79,    61,    77,    77,    83,
      83,    76,    75,    83,    80,    35,    35,    77,    76,    80,
      77,    76,    76,    83,    83,    74,    83,    58,    35,    16,
      17,    18,    19,    20,    21,     9,    37,    38,    58,    58,
      14,    76,    58,    78,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    76,    28,    75,    75,    18,    19,    20,
      21,    74,    76,    37,    78,    39,    40,    61,    42,    43,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    42,    43,    59,    78,    62,    74,    80,
      80,    80,    49,    85,    76,    63,    62,   200,    61,    80,
      76,    21,    75,    83,    74,    79,    77,   129,    77,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    75,   151,
     104,   153,    63,   155,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    14,    15,    16,    17,    18,    19,    20,
      21,    63,    54,    76,   186,   187,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   152,    80,
      76,   214,   156,   128,     2,    -1,    -1,   209,   162,    83,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   233,    -1,   231,   227,    -1,   229,    -1,    -1,
      -1,   231,   231,   233,   233,   231,    -1,   233,    -1,   211,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,   203,
     204,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   220,    -1,    -1,   223,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    80,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    -1,    80,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    -1,    77,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    74,    -1,    76,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    77,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    16,    -1,
      64,    -1,    20,    -1,    -1,    23,    24,    77,    -1,    -1,
      74,    -1,    76,    -1,    78,    -1,    57,    58,    59,    60,
      61,    16,    86,    64,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    74,    -1,    76,    -1,    78,    79,    57,
      58,    59,    60,    61,    62,    16,    64,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    74,    -1,    76,    -1,
      78,    -1,    57,    58,    59,    60,    61,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    78,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,    44,    45,    47,    49,    50,    51,    52,
      55,    56,    61,    74,    76,    88,    89,    94,    99,   100,
     102,   103,   104,   105,   111,   112,   113,   114,    76,   100,
     103,   105,    80,    80,    61,    76,    98,    76,    89,    76,
      16,    20,    23,    24,    57,    58,    59,    60,    64,    74,
      78,   101,   102,   104,   108,   110,    61,    62,    99,    23,
      86,   101,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    83,   111,    80,    76,    78,
      97,    80,   101,    80,   100,    48,    83,   101,    49,   101,
     101,    74,   101,   101,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    95,   109,    79,    93,   101,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    80,    76,    96,
      63,    75,    62,    62,    77,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,   104,    77,    93,
     101,    77,    80,    93,    61,    77,    76,    77,    95,    75,
     101,    79,    83,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,    77,    98,    39,    89,   106,   107,    77,    77,
      77,    79,    89,   101,    89,    89,   101,    74,    90,    75,
      83,   101,    77,    37,    38,    89,    89,    63,    63,    42,
      43,    80,    77,    54,    91,    92,    95,   101,   101,    89,
      76,    93,    80,    76,    75,    92,   101,    77,   101,    77,
      89,    77,    89,    99
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 58 "parser.y"
    { root = make_node(P_OP_STMTLST, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 62 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 66 "parser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 70 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMTLST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 72 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 76 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMT, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 80 "parser.y"
    {(yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 82 "parser.y"
    {(yyval.k) = make_node(P_OP_EXPLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 86 "parser.y"
    {(yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 88 "parser.y"
    {(yyval.k) = make_node(P_OP_VARLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 91 "parser.y"
    { }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 96 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 98 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 0); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 102 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 104 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 0); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 108 "parser.y"
    { printf("debug: %s\n", 
							(char *)((struct value*)(yyvsp[(1) - (1)].v))->c);(yyval.k) = 
								make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 112 "parser.y"
    { (yyval.k) = make_node(P_OP_IDLST, NULL, 2, 
							(yyvsp[(1) - (3)].k), make_node(ID, (yyvsp[(3) - (3)].v), 0)); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 117 "parser.y"
    { (yyval.k) = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 119 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 123 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSOP, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 125 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 127 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 129 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 131 "parser.y"
    {(yyval.k) = make_node(P_OP_ASDIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 133 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 135 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPOW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 137 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 139 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 141 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 143 "parser.y"
    {(yyval.k) = make_node(P_OP_ASRIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 145 "parser.y"
    {(yyval.k) = make_node(P_OP_ASLEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 150 "parser.y"
    { (yyval.k) = make_node(P_OP_OR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 152 "parser.y"
    { (yyval.k) = make_node(P_OP_AND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 154 "parser.y"
    { (yyval.k) = make_node(P_OP_BINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 156 "parser.y"
    { (yyval.k) = make_node(P_OP_BINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 158 "parser.y"
    { (yyval.k) = make_node(P_OP_BINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 160 "parser.y"
    { (yyval.k) = make_node(P_OP_EQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 162 "parser.y"
    { (yyval.k) = make_node(P_OP_NOTEQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 164 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATERTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 166 "parser.y"
    { (yyval.k) = make_node(P_OP_LESSTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 168 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATER, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 170 "parser.y"
    { (yyval.k) = make_node(P_OP_LESS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 172 "parser.y"
    { (yyval.k) = make_node(P_OP_LEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 174 "parser.y"
    { (yyval.k) = make_node(P_OP_RIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 176 "parser.y"
    { (yyval.k) = make_node(P_OP_PLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 178 "parser.y"
    { (yyval.k) = make_node(P_OP_MINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 180 "parser.y"
    { (yyval.k) = make_node(P_OP_MUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 182 "parser.y"
    { (yyval.k) = make_node(P_OP_DIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 184 "parser.y"
    { (yyval.k) = make_node(P_OP_MOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 186 "parser.y"
    { (yyval.k) = make_node(P_OP_POW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 188 "parser.y"
    { (yyval.k) = make_node(P_OP_UMINUS, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 190 "parser.y"
    { (yyval.k) = make_node(P_OP_COMPL, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 192 "parser.y"
    { (yyval.k) = make_node(P_OP_NOT, NULL,1,  (yyvsp[(2) - (2)].k));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 194 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 196 "parser.y"
    { (yyval.k) = make_node(P_OP_STRDEF, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 198 "parser.y"
    { (yyval.k) = make_node(NUMBER, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 200 "parser.y"
    { (yyval.k) = make_node(STRING, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 202 "parser.y"
    { (yyval.k) = make_node(TRUE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 204 "parser.y"
    { (yyval.k) = make_node(INT, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 206 "parser.y"
    { (yyval.k) = make_node(FALSE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 208 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 212 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 214 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 216 "parser.y"
    { (yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 218 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 220 "parser.y"
    { (yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 224 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 228 "parser.y"
    { (yyval.k) = make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 230 "parser.y"
    { (yyval.k) = make_node(P_OP_SEL, NULL, 2, (yyvsp[(1) - (4)].k), (yyvsp[(3) - (4)].k));}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 234 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 2, (yyvsp[(3) - (4)].k), (yyvsp[(4) - (4)].k)); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 236 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 238 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 242 "parser.y"
    { (yyval.k) = make_node(P_OP_HKDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 246 "parser.y"
    { (yyval.k) = make_node(P_OP_HSDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 250 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 252 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 256 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 258 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 260 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 262 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 264 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 266 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 268 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 270 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 272 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 276 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 0); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 278 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 282 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSIGN, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 284 "parser.y"
    { (yyval.k) = make_node(P_OP_BREAK, NULL, 0); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 286 "parser.y"
    { (yyval.k) = make_node(P_OP_CONTINUE, NULL, 0); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 288 "parser.y"
    { (yyval.k) = make_node(P_OP_PRINT, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 290 "parser.y"
    { (yyval.k) = make_node(P_OP_BLOCK, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 292 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 294 "parser.y"
    { (yyval.k) = make_node(P_OP_FDEF, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 296 "parser.y"
    { }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 298 "parser.y"
    { }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 300 "parser.y"
    { (yyval.k) = make_node(P_OP_IF, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 302 "parser.y"
    { /* TODO */}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 304 "parser.y"
    { /* TODO */ }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 306 "parser.y"
    { (yyval.k) = make_node(P_OP_FOR, NULL, 4, (yyvsp[(3) - (9)].k), (yyvsp[(5) - (9)].k), (yyvsp[(7) - (9)].k), (yyvsp[(9) - (9)].k)); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 308 "parser.y"
    { (yyval.k) = make_node(P_OP_FORIN, NULL, 3, (yyvsp[(2) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 310 "parser.y"
    { (yyval.k) = make_node(P_OP_WHILE, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 312 "parser.y"
    { (yyval.k) = make_node(P_OP_DOWH, NULL, 2, (yyvsp[(2) - (7)].k), (yyvsp[(5) - (7)].k));}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 314 "parser.y"
    { (yyval.k) = make_node(P_OP_SWITCH, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 316 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 320 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, (yyvsp[(2) - (3)].v), 0); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 324 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, (yyvsp[(5) - (5)].v), 0); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 328 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, (yyvsp[(5) - (5)].v), 0); }
    break;


/* Line 1787 of yacc.c  */
#line 2414 "parser.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 331 "parser.y"


int callback(void *c, void *u){
	if(!(c == NULL))
		printf("Wert des Knotens: %d\n", 
			((struct node_content *) c)->operation);
	return 0;
}

int main(int argc, char **argv){
	yydebug = 1;
	if(yyparse()){
		printf("Ein Syntaxfehler ist aufgetreten!\n");
		return EXIT_FAILURE;
	}
	traverse_preorder(root, callback, NULL);
	printf("Debugging:\n");
	interpreter_init();
	parse_program(root);	
	return EXIT_SUCCESS;
}
