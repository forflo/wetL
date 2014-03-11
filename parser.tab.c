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
     INC = 308,
     DEC = 309,
     RET = 310,
     CASE = 311,
     FUNCTION = 312,
     EXTERNAL = 313,
     TRUE = 314,
     FALSE = 315,
     STRING = 316,
     NUMBER = 317,
     ID = 318,
     FCELANG = 319,
     FCEB_CODE = 320,
     INT = 321,
     FFI_CHAR = 322,
     FFI_SHORT = 323,
     FFI_INT = 324,
     FFI_LONG = 325,
     FFI_LONG_LONG = 326,
     FFI_DOUBLE = 327,
     FFI_FLOAT = 328,
     FFI_LONG_DOUBLE = 329,
     FFI_VOIDPTR = 330,
     CURLOPEN = 331,
     CURLCLOSE = 332,
     PAROPEN = 333,
     PARCLOSE = 334,
     BOXOPEN = 335,
     BOXCLOSE = 336,
     SEMI = 337,
     DP = 338,
     POINT = 339,
     COMMA = 340,
     SHARP = 341,
     DOLLAR = 342,
     QMARK = 343,
     NL = 344
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
#line 214 "parser.tab.c"
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
#line 242 "parser.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   803

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  263

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    15,    17,    20,    26,
      28,    32,    34,    38,    39,    44,    48,    51,    55,    58,
      60,    64,    66,    69,    73,    77,    81,    85,    89,    93,
      97,   101,   105,   109,   113,   117,   121,   125,   129,   133,
     137,   141,   145,   149,   153,   157,   161,   165,   169,   173,
     177,   181,   185,   189,   193,   196,   199,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
     230,   233,   235,   240,   245,   251,   257,   261,   265,   269,
     274,   276,   278,   280,   282,   284,   286,   288,   290,   292,
     295,   299,   303,   307,   311,   316,   321,   326,   329,   333,
     336,   341,   345,   352,   361,   374,   385,   392,   399,   408,
     415,   418,   422,   426,   432
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      91,     0,    -1,    -1,    91,   114,    -1,    76,   102,    77,
      -1,    76,    94,    77,    -1,    95,    -1,    94,    95,    -1,
      56,    78,   104,    79,   102,    -1,   104,    -1,    96,    85,
     104,    -1,   107,    -1,    97,    85,   107,    -1,    -1,    98,
     112,   104,    85,    -1,    78,   101,    79,    -1,    78,    79,
      -1,    78,    96,    79,    -1,    78,    79,    -1,    63,    -1,
     101,    85,    63,    -1,   114,    -1,   102,   114,    -1,    97,
      25,    96,    -1,    97,    26,    96,    -1,    97,    27,    96,
      -1,    97,    28,    96,    -1,    97,    29,    96,    -1,    97,
      30,    96,    -1,    97,    31,    96,    -1,    97,    32,    96,
      -1,    97,    33,    96,    -1,    97,    34,    96,    -1,    97,
      35,    96,    -1,    97,    36,    96,    -1,   104,     3,   104,
      -1,   104,     4,   104,    -1,   104,     5,   104,    -1,   104,
       6,   104,    -1,   104,     7,   104,    -1,   104,     9,   104,
      -1,   104,     8,   104,    -1,   104,    13,   104,    -1,   104,
      12,   104,    -1,   104,    11,   104,    -1,   104,    10,   104,
      -1,   104,    15,   104,    -1,   104,    14,   104,    -1,   104,
      17,   104,    -1,   104,    16,   104,    -1,   104,    20,   104,
      -1,   104,    19,   104,    -1,   104,    18,   104,    -1,   104,
      21,   104,    -1,    16,   104,    -1,    24,   104,    -1,    23,
     104,    -1,   113,    -1,   111,    -1,    62,    -1,    61,    -1,
      59,    -1,    66,    -1,    60,    -1,   105,    -1,   116,    -1,
     117,    -1,   107,    -1,   106,    -1,    78,   104,    79,    -1,
     105,   100,    -1,    63,    -1,   105,    80,   104,    81,    -1,
      57,    63,    99,    92,    -1,    57,    63,    99,   109,    92,
      -1,    57,    63,    99,   110,    92,    -1,    39,    37,   104,
      -1,    39,    38,   104,    -1,    76,    98,    77,    -1,    20,
      76,    98,    77,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    80,    81,    -1,    80,    96,    81,    -1,   103,
      82,    89,    -1,    45,    82,    89,    -1,    44,    82,    89,
      -1,    53,   107,    82,    89,    -1,    54,   107,    82,    89,
      -1,    52,   104,    82,    89,    -1,    92,    89,    -1,   106,
      82,    89,    -1,   108,    89,    -1,    41,   103,    82,    89,
      -1,    41,   108,    89,    -1,    40,    78,   104,    79,    92,
      89,    -1,    40,    78,   104,    79,    92,    42,    92,    89,
      -1,    40,    78,   104,    79,    92,    43,    78,    89,   104,
      79,    92,    89,    -1,    47,    78,   103,    82,   104,    82,
     103,    79,    92,    89,    -1,    47,   101,    48,    96,    92,
      89,    -1,    49,    78,   104,    79,    92,    89,    -1,    50,
      92,    49,    78,   104,    79,    82,    89,    -1,    51,    78,
     104,    79,    93,    89,    -1,   115,    89,    -1,     1,    82,
      89,    -1,    58,    64,    65,    -1,    78,    23,    64,    79,
      65,    -1,    78,    88,    64,    79,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    60,    64,    68,    72,    74,    78,    82,
      84,    88,    90,    94,    95,    98,   100,   104,   106,   110,
     114,   119,   121,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   152,   154,   156,   158,   160,
     162,   164,   166,   168,   170,   172,   174,   176,   178,   180,
     182,   184,   186,   188,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   214,   216,   218,   220,   222,
     226,   230,   232,   236,   238,   240,   244,   248,   252,   254,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   278,
     280,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   310,   313,   316,   318,   320,   322,
     324,   326,   331,   335,   339
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
  "SWITCH", "PRINT", "INC", "DEC", "RET", "CASE", "FUNCTION", "EXTERNAL",
  "TRUE", "FALSE", "STRING", "NUMBER", "ID", "FCELANG", "FCEB_CODE", "INT",
  "FFI_CHAR", "FFI_SHORT", "FFI_INT", "FFI_LONG", "FFI_LONG_LONG",
  "FFI_DOUBLE", "FFI_FLOAT", "FFI_LONG_DOUBLE", "FFI_VOIDPTR", "CURLOPEN",
  "CURLCLOSE", "PAROPEN", "PARCLOSE", "BOXOPEN", "BOXCLOSE", "SEMI", "DP",
  "POINT", "COMMA", "SHARP", "DOLLAR", "QMARK", "NL", "$accept", "program",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    94,    94,    95,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   107,   107,   108,   108,   108,   109,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   116,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     1,     2,     5,     1,
       3,     1,     3,     0,     4,     3,     2,     3,     2,     1,
       3,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     4,     4,     5,     5,     3,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     3,     3,     4,     4,     4,     2,     3,     2,
       4,     3,     6,     8,    12,    10,     6,     6,     8,     6,
       2,     3,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,     0,    68,    11,     0,     3,     0,    65,
      66,     0,     0,     0,    68,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    63,
      60,    59,    62,    13,     0,     0,    64,    67,    58,    57,
      67,    67,     0,     0,     0,    21,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,    99,   110,
     111,     0,     0,   101,    93,    92,     0,     0,     0,     0,
       0,     0,    54,    13,    56,    55,     0,    89,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     4,    22,     0,     0,    69,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    12,    91,    18,     0,     0,    98,     0,   100,
       0,     0,    20,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    78,     0,    90,     0,
      35,    36,    37,    38,    39,    41,    40,    45,    44,    43,
      42,    47,    46,    49,    48,    52,    51,    50,    53,    96,
      94,    95,    16,     0,     0,    73,     0,     0,     0,     0,
      17,    72,     0,     0,     0,     0,     0,     0,     0,    79,
       0,    10,    15,     0,     0,    74,    75,   113,   114,     0,
       0,   102,     0,   106,   107,     0,     0,     0,     6,   109,
      14,    76,    77,     0,     0,     0,     0,     0,     5,     7,
     103,     0,     0,   108,     0,     0,     0,     0,     0,   105,
       0,     0,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    20,   218,   237,   238,   108,    21,   106,   133,
      86,    40,    64,    22,   109,    56,    34,    57,    26,   206,
     207,    58,   177,    59,    65,    28,    29,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
     -59,   140,   -59,   -58,   -44,   -41,    -3,    37,   -53,    21,
      42,    44,   689,   -52,   -52,    57,    59,   -59,   422,    12,
      35,   316,    45,   -51,    47,   -39,    43,   -59,    48,   -59,
     -59,    49,   689,    51,   -59,    62,    65,    68,   -59,   -52,
     -17,   689,    77,   689,   689,    55,   689,   689,   -59,   -59,
     -59,   -59,   -59,   -59,   189,   272,   -51,   -59,   -59,   -59,
      52,    54,    61,    90,   381,   -59,   657,    95,   357,   -59,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   -52,    93,   666,   689,   -59,    94,   -59,   -59,
     -59,   498,    97,   -59,   -59,   -59,   106,   689,   116,   517,
     117,   536,   -59,   -59,   -59,   -59,    75,   -59,    17,   767,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   107,
     110,   111,   -56,    -6,   -59,   -59,   -59,   125,   127,   -59,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   -39,   -59,   -59,    16,   318,   -59,    42,   -59,
     689,     4,   -59,    42,   689,   132,   169,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   689,   -59,   689,
     574,   592,   610,   782,   683,   393,   393,   431,   431,   431,
     431,   470,   470,    66,    66,   190,   190,   190,   -59,   -59,
     -59,   -59,   -59,    36,    39,   -59,    42,    42,   150,   152,
     -59,   -59,   -22,   299,   130,   131,   555,   165,   133,   -59,
      40,   767,   -59,   689,   689,   -59,   -59,   -59,   -59,    42,
     145,   -59,   -52,   -59,   -59,   143,   148,   -47,   -59,   -59,
     -59,   767,   767,   139,   141,   153,   156,   689,   -59,   -59,
     -59,   689,    42,   -59,   632,   651,   174,   422,    42,   -59,
     339,   175,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,    -5,   -59,   -59,    29,    33,   -59,   151,   -59,
     -59,   102,    11,     3,    50,    -1,     0,     1,   266,   -59,
     -59,   -59,   -59,   -59,     2,   -59,   -59,   -59
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -68
static const yytype_int16 yytable[] =
{
      23,    24,    25,    27,    23,    42,    25,    38,    33,   236,
      38,    17,    23,    23,    60,    61,    15,    23,    24,    25,
     229,   230,    17,   202,    31,    39,    19,    84,    44,    85,
     248,    97,    45,   204,    32,    66,    47,    19,    23,   -67,
      25,   -67,    96,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    55,    23,    24,    25,   136,   231,    98,    68,
      18,    48,    49,    50,    51,    17,   223,   224,    52,    36,
      18,    23,    91,   152,   125,   126,   127,   128,    53,   179,
      19,    99,    54,   101,   102,   210,   104,   105,   178,    41,
      67,   179,   179,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   222,   104,   155,    18,    37,
      62,    98,    43,    63,    69,   240,   100,    83,   205,    87,
     161,   103,    88,    92,   130,   156,   131,    89,    90,   132,
       2,     3,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    93,   176,   212,    94,   134,   214,    95,   215,   138,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   162,
       4,     5,   153,   157,     6,     7,   159,     8,   160,     9,
      10,    11,    12,    13,    14,   164,   199,    15,    16,   200,
     201,   225,   226,    17,   208,    44,   209,   179,   217,    45,
     213,   128,    46,    47,   216,   227,    18,   228,    19,   233,
     234,   236,   239,   244,   243,   246,   247,   220,   250,   221,
     251,    23,   252,    25,   203,   245,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   253,   219,   256,    48,    49,
      50,    51,    17,   261,   166,    52,    23,    24,    25,    23,
      24,    25,   136,   259,   262,    53,   249,    19,   260,    54,
     107,    35,     0,   241,   242,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,   254,     0,     0,
       0,   255,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       3,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,   129,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     4,
       5,   232,     3,     6,     7,     0,     8,     0,     9,    10,
      11,    12,    13,    14,     0,    -8,    15,    16,     0,   211,
       0,    82,    17,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    18,    -8,    19,     0,     0,
       0,     4,     5,     3,     0,     6,     7,     0,     8,     0,
       9,    10,    11,    12,    13,    14,   139,     0,    15,    16,
       0,     0,     0,     0,    17,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,    18,   135,    19,
       0,     0,     4,     5,     0,     0,     6,     7,     0,     8,
       0,     9,    10,    11,    12,    13,    14,     0,     0,    15,
      16,     0,     0,     0,     0,    17,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     0,     0,     0,    18,     0,
      19,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   158,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   163,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,   165,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,   235,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    44,     0,     0,     0,    45,     0,     0,
      46,    47,    44,     0,     0,     0,    45,     0,     0,    46,
      47,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    44,     0,     0,     0,    45,
       0,   257,    46,    47,     0,     0,    48,    49,    50,    51,
      17,   137,     0,    52,     0,    48,    49,    50,    51,    17,
     258,     0,    52,    53,     0,    19,     0,    54,     0,     0,
       0,     0,    53,     0,    19,   154,    54,     0,    48,    49,
      50,    51,    17,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    19,     0,    54,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,     1,     1,     1,     5,    10,     5,    63,     5,    56,
      63,    63,    13,    14,    13,    14,    57,    18,    18,    18,
      42,    43,    63,    79,    82,    78,    78,    78,    16,    80,
      77,    48,    20,    39,    78,    23,    24,    78,    39,    78,
      39,    80,    39,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    12,    64,    64,    64,    64,    89,    85,    19,
      76,    59,    60,    61,    62,    63,    37,    38,    66,    82,
      76,    82,    32,    82,    18,    19,    20,    21,    76,    85,
      78,    41,    80,    43,    44,    79,    46,    47,    81,    78,
      88,    85,    85,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    79,    66,    84,    76,    82,
      63,    85,    78,    64,    89,    85,    49,    82,   133,    82,
      97,    76,    89,    82,    82,    85,    82,    89,    89,    78,
       0,     1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    89,    77,   158,    89,    65,   161,    89,   163,    64,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    63,
      40,    41,    89,    89,    44,    45,    89,    47,    82,    49,
      50,    51,    52,    53,    54,    78,    89,    57,    58,    89,
      89,   206,   207,    63,    79,    16,    79,    85,    76,    20,
     160,    21,    23,    24,   164,    65,    76,    65,    78,    89,
      89,    56,    89,    78,   229,    82,    78,   177,    89,   179,
      89,   232,    79,   232,   132,   232,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    89,    77,   252,    59,    60,
      61,    62,    63,   258,   103,    66,   257,   257,   257,   260,
     260,   260,   260,    89,    89,    76,   237,    78,   257,    80,
      81,     5,    -1,   223,   224,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    82,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    40,
      41,    82,     1,    44,    45,    -1,    47,    -1,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    -1,    81,
      -1,    85,    63,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    76,    77,    78,    -1,    -1,
      -1,    40,    41,     1,    -1,    44,    45,    -1,    47,    -1,
      49,    50,    51,    52,    53,    54,    79,    -1,    57,    58,
      -1,    -1,    -1,    -1,    63,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    40,    41,    -1,    -1,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    63,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    79,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    79,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    79,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    79,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    16,    -1,    -1,    -1,    20,
      -1,    79,    23,    24,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    -1,    59,    60,    61,    62,    63,
      79,    -1,    66,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    76,    -1,    78,    79,    80,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    91,     0,     1,    40,    41,    44,    45,    47,    49,
      50,    51,    52,    53,    54,    57,    58,    63,    76,    78,
      92,    97,   103,   105,   106,   107,   108,   114,   115,   116,
     117,    82,    78,   103,   106,   108,    82,    82,    63,    78,
     101,    78,    92,    78,    16,    20,    23,    24,    59,    60,
      61,    62,    66,    76,    80,   104,   105,   107,   111,   113,
     107,   107,    63,    64,   102,   114,    23,    88,   104,    89,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    85,    82,    78,    80,   100,    82,    89,    89,
      89,   104,    82,    89,    89,    89,   103,    48,    85,   104,
      49,   104,   104,    76,   104,   104,    98,    81,    96,   104,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    82,
      82,    82,    78,    99,    65,    77,   114,    64,    64,    79,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,   107,    89,    79,    96,   104,    89,    79,    89,
      82,    96,    63,    79,    78,    79,    98,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    77,   112,    81,    85,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,    89,
      89,    89,    79,   101,    39,    92,   109,   110,    79,    79,
      79,    81,    92,   104,    92,    92,   104,    76,    93,    77,
     104,   104,    79,    37,    38,    92,    92,    65,    65,    42,
      43,    89,    82,    89,    89,    79,    56,    94,    95,    89,
      85,   104,   104,    92,    78,   103,    82,    78,    77,    95,
      89,    89,    79,    89,   104,   104,    92,    79,    79,    89,
     102,    92,    89
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
        case 3:
/* Line 1787 of yacc.c  */
#line 61 "parser.y"
    { root = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (2)].k)); YYACCEPT; }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 65 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 69 "parser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 73 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMTLST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 75 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 79 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMT, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 83 "parser.y"
    {(yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 85 "parser.y"
    {(yyval.k) = make_node(P_OP_EXPLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 89 "parser.y"
    {(yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 91 "parser.y"
    {(yyval.k) = make_node(P_OP_VARLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 94 "parser.y"
    { }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 99 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 101 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 0); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 105 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 107 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 0); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 111 "parser.y"
    { printf("debug: %s\n", 
							(char *)((struct value*)(yyvsp[(1) - (1)].v))->c);(yyval.k) = 
								make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 115 "parser.y"
    { (yyval.k) = make_node(P_OP_IDLST, NULL, 2, 
							(yyvsp[(1) - (3)].k), make_node(ID, (yyvsp[(3) - (3)].v), 0)); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 120 "parser.y"
    { (yyval.k) = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 122 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 126 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSOP, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 128 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 130 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 132 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 134 "parser.y"
    {(yyval.k) = make_node(P_OP_ASDIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 136 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 138 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPOW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 140 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 142 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 144 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 146 "parser.y"
    {(yyval.k) = make_node(P_OP_ASRIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 148 "parser.y"
    {(yyval.k) = make_node(P_OP_ASLEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 153 "parser.y"
    { (yyval.k) = make_node(P_OP_OR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 155 "parser.y"
    { (yyval.k) = make_node(P_OP_AND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 157 "parser.y"
    { (yyval.k) = make_node(P_OP_BINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 159 "parser.y"
    { (yyval.k) = make_node(P_OP_BINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 161 "parser.y"
    { (yyval.k) = make_node(P_OP_BINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 163 "parser.y"
    { (yyval.k) = make_node(P_OP_EQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 165 "parser.y"
    { (yyval.k) = make_node(P_OP_NOTEQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 167 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATERTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 169 "parser.y"
    { (yyval.k) = make_node(P_OP_LESSTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 171 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATER, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 173 "parser.y"
    { (yyval.k) = make_node(P_OP_LESS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 175 "parser.y"
    { (yyval.k) = make_node(P_OP_LEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 177 "parser.y"
    { (yyval.k) = make_node(P_OP_RIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 179 "parser.y"
    { (yyval.k) = make_node(P_OP_PLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 181 "parser.y"
    { (yyval.k) = make_node(P_OP_MINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 183 "parser.y"
    { (yyval.k) = make_node(P_OP_MUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 185 "parser.y"
    { (yyval.k) = make_node(P_OP_DIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 187 "parser.y"
    { (yyval.k) = make_node(P_OP_MOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 189 "parser.y"
    { (yyval.k) = make_node(P_OP_POW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 191 "parser.y"
    { (yyval.k) = make_node(P_OP_UMINUS, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 193 "parser.y"
    { (yyval.k) = make_node(P_OP_COMPL, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 195 "parser.y"
    { (yyval.k) = make_node(P_OP_NOT, NULL,1,  (yyvsp[(2) - (2)].k));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 197 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 199 "parser.y"
    { (yyval.k) = make_node(P_OP_STRDEF, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 201 "parser.y"
    { (yyval.k) = make_node(NUMBER, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 203 "parser.y"
    { (yyval.k) = make_node(STRING, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 205 "parser.y"
    { (yyval.k) = make_node(TRUE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 207 "parser.y"
    { (yyval.k) = make_node(INT, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 209 "parser.y"
    { (yyval.k) = make_node(FALSE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 211 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 215 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 217 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 219 "parser.y"
    { (yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 221 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 223 "parser.y"
    { (yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 227 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 231 "parser.y"
    { (yyval.k) = make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 233 "parser.y"
    { (yyval.k) = make_node(P_OP_SEL, NULL, 2, (yyvsp[(1) - (4)].k), (yyvsp[(3) - (4)].k));}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 237 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLST, NULL, 2, (yyvsp[(3) - (4)].k), (yyvsp[(4) - (4)].k));}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 239 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 241 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 245 "parser.y"
    { (yyval.k) = make_node(P_OP_HKDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 249 "parser.y"
    { (yyval.k) = make_node(P_OP_HSDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 253 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 255 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 259 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 261 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 263 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 265 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 267 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 269 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 271 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 273 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 275 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 279 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 0); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 281 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 285 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSIGN, NULL, 1, (yyvsp[(1) - (3)].k)); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 287 "parser.y"
    { (yyval.k) = make_node(P_OP_BREAK, NULL, 0); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 289 "parser.y"
    { (yyval.k) = make_node(P_OP_CONTINUE, NULL, 0); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 291 "parser.y"
    { (yyval.k) = make_node(P_OP_INC, NULL, 1, (yyvsp[(2) - (4)].k)); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 293 "parser.y"
    { (yyval.k) = make_node(P_OP_DEC, NULL, 1, (yyvsp[(2) - (4)].k)); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 295 "parser.y"
    { (yyval.k) = make_node(P_OP_PRINT, NULL, 1, (yyvsp[(2) - (4)].k)); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 297 "parser.y"
    { (yyval.k) = make_node(P_OP_BLOCK, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 299 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (3)].k)); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 301 "parser.y"
    { (yyval.k) = make_node(P_OP_FDEF, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 303 "parser.y"
    { }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 305 "parser.y"
    { }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 307 "parser.y"
    { (yyval.k) = make_node(P_OP_IF, NULL, 2, (yyvsp[(3) - (6)].k), (yyvsp[(5) - (6)].k)); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 309 "parser.y"
    { (yyval.k) = make_node(P_OP_ELSE, NULL, 3, (yyvsp[(3) - (8)].k), (yyvsp[(5) - (8)].k), (yyvsp[(7) - (8)].k)); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 312 "parser.y"
    { /* TODO */ }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 315 "parser.y"
    { (yyval.k) = make_node(P_OP_FOR, NULL, 4, (yyvsp[(3) - (10)].k), (yyvsp[(5) - (10)].k), (yyvsp[(7) - (10)].k), (yyvsp[(9) - (10)].k)); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 317 "parser.y"
    { (yyval.k) = make_node(P_OP_FORIN, NULL, 3, (yyvsp[(2) - (6)].k), (yyvsp[(4) - (6)].k), (yyvsp[(5) - (6)].k));}
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 319 "parser.y"
    { (yyval.k) = make_node(P_OP_WHILE, NULL, 2, (yyvsp[(3) - (6)].k), (yyvsp[(5) - (6)].k)); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 321 "parser.y"
    { (yyval.k) = make_node(P_OP_DOWH, NULL, 2, (yyvsp[(2) - (8)].k), (yyvsp[(5) - (8)].k));}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 323 "parser.y"
    { (yyval.k) = make_node(P_OP_SWITCH, NULL, 2, (yyvsp[(3) - (6)].k), (yyvsp[(5) - (6)].k)); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 325 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 327 "parser.y"
    { printf("Invalid Statement. Skipping until semicolon\n");
							yyerrok; }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 332 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, (yyvsp[(2) - (3)].v), 0); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 336 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, (yyvsp[(5) - (5)].v), 0); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 340 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, (yyvsp[(5) - (5)].v), 0); }
    break;


/* Line 1787 of yacc.c  */
#line 2450 "parser.tab.c"
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
#line 343 "parser.y"


int yyerror(const char *str){
	printf("[Parser:] %s\n", str);
	return 0;
	return 0;
}

int callback(void *c, void *u){
	if(!(c == NULL))
		printf("Wert des Knotens: %d\n", 
			((struct node_content *) c)->operation);
	return 0;
}


int main(int argc, char **argv){
#ifdef DEBUG
	yydebug = 1;
#endif
	//traverse_preorder(root, callback, NULL);
	interpreter_init();
	while(1){
		if(yyparse()){
			printf("Ein Syntaxfehler ist aufgetreten!\n");
			break;
		}
		parse_program_interactive(root);	
	}
	return EXIT_SUCCESS;
}
