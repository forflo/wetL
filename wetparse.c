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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         WETSTYPE
/* Substitute the variable and function names.  */
#define yyparse         wetparse
#define yylex           wetlex
#define yyerror         weterror
#define yylval          wetlval
#define yychar          wetchar
#define yydebug         wetdebug
#define yynerrs         wetnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

#include "parser.h"
#include <stdlib.h>


/* Line 371 of yacc.c  */
#line 82 "wetparse.c"

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
   by #include "wetparse.h".  */
#ifndef YY_WET_WETPARSE_H_INCLUDED
# define YY_WET_WETPARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef WETDEBUG
# if defined YYDEBUG
#  if YYDEBUG
#   define WETDEBUG 1
#  else
#   define WETDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define WETDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined WETDEBUG */
#if WETDEBUG
extern int wetdebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 25 "parser.y"

#define YYSTYPE IWETSTYPE


/* Line 387 of yacc.c  */
#line 127 "wetparse.c"

/* Tokens.  */
#ifndef WETTOKENTYPE
# define WETTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum wettokentype {
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
     QMARK = 343
   };
#endif


#if ! defined WETSTYPE && ! defined WETSTYPE_IS_DECLARED
typedef union WETSTYPE
{
/* Line 387 of yacc.c  */
#line 7 "parser.y"

	struct value *v;
	struct nary_node *k;


/* Line 387 of yacc.c  */
#line 236 "wetparse.c"
} WETSTYPE;
# define WETSTYPE_IS_TRIVIAL 1
# define wetstype WETSTYPE /* obsolescent; will be withdrawn */
# define WETSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int wetparse (void *YYPARSE_PARAM);
#else
int wetparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int wetparse (struct nary_node **root, void *scan);
#else
int wetparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_WET_WETPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 263 "wetparse.c"

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
	 || (defined WETSTYPE_IS_TRIVIAL && WETSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   781

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      85,    86,    87,    88
};

#if WETDEBUG
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
     297,   300,   303,   306,   310,   314,   318,   320,   323,   325,
     329,   332,   338,   346,   357,   367,   373,   379,   387,   393,
     395,   398,   402,   408
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      90,     0,    -1,   113,    -1,    76,   101,    77,    -1,    76,
      93,    77,    -1,    94,    -1,    93,    94,    -1,    56,    78,
     103,    79,   101,    -1,   103,    -1,    95,    85,   103,    -1,
     106,    -1,    96,    85,   106,    -1,    -1,    97,   111,   103,
      85,    -1,    78,   100,    79,    -1,    78,    79,    -1,    78,
      95,    79,    -1,    78,    79,    -1,    63,    -1,   100,    85,
      63,    -1,   113,    -1,   101,   113,    -1,    96,    25,    95,
      -1,    96,    26,    95,    -1,    96,    27,    95,    -1,    96,
      28,    95,    -1,    96,    29,    95,    -1,    96,    30,    95,
      -1,    96,    31,    95,    -1,    96,    32,    95,    -1,    96,
      33,    95,    -1,    96,    34,    95,    -1,    96,    35,    95,
      -1,    96,    36,    95,    -1,   103,     3,   103,    -1,   103,
       4,   103,    -1,   103,     5,   103,    -1,   103,     6,   103,
      -1,   103,     7,   103,    -1,   103,     9,   103,    -1,   103,
       8,   103,    -1,   103,    13,   103,    -1,   103,    12,   103,
      -1,   103,    11,   103,    -1,   103,    10,   103,    -1,   103,
      15,   103,    -1,   103,    14,   103,    -1,   103,    17,   103,
      -1,   103,    16,   103,    -1,   103,    20,   103,    -1,   103,
      19,   103,    -1,   103,    18,   103,    -1,   103,    21,   103,
      -1,    16,   103,    -1,    24,   103,    -1,    23,   103,    -1,
     112,    -1,   110,    -1,    62,    -1,    61,    -1,    59,    -1,
      66,    -1,    60,    -1,   104,    -1,   115,    -1,   116,    -1,
     106,    -1,   105,    -1,    78,   103,    79,    -1,   104,    99,
      -1,    63,    -1,   104,    80,   103,    81,    -1,    57,    63,
      98,    91,    -1,    57,    63,    98,   108,    91,    -1,    57,
      63,    98,   109,    91,    -1,    39,    37,   103,    -1,    39,
      38,   103,    -1,    76,    97,    77,    -1,    20,    76,    97,
      77,    -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,
      80,    81,    -1,    80,    95,    81,    -1,   102,    82,    -1,
      45,    82,    -1,    44,    82,    -1,    53,   106,    82,    -1,
      54,   106,    82,    -1,    52,   103,    82,    -1,    91,    -1,
     105,    82,    -1,   107,    -1,    41,   102,    82,    -1,    41,
     107,    -1,    40,    78,   103,    79,    91,    -1,    40,    78,
     103,    79,    91,    42,    91,    -1,    40,    78,   103,    79,
      91,    43,    78,   103,    79,    91,    -1,    47,    78,   102,
      82,   103,    82,   102,    79,    91,    -1,    47,   100,    48,
      95,    91,    -1,    49,    78,   103,    79,    91,    -1,    50,
      91,    49,    78,   103,    79,    82,    -1,    51,    78,   103,
      79,    92,    -1,   114,    -1,     1,    82,    -1,    58,    64,
      65,    -1,    78,    23,    64,    79,    65,    -1,    78,    88,
      64,    79,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    78,    82,    86,    88,    92,    96,    98,
     102,   104,   108,   109,   112,   114,   118,   120,   124,   128,
     133,   135,   139,   141,   143,   145,   147,   149,   151,   153,
     155,   157,   159,   161,   166,   168,   170,   172,   174,   176,
     178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   200,   202,   204,   206,   208,   210,   212,   214,   216,
     218,   220,   222,   224,   228,   230,   232,   234,   236,   240,
     244,   246,   250,   252,   254,   258,   262,   266,   268,   272,
     274,   276,   278,   280,   282,   284,   286,   288,   292,   294,
     298,   300,   302,   304,   306,   308,   310,   312,   314,   316,
     318,   320,   322,   324,   327,   330,   332,   334,   336,   338,
     340,   345,   349,   353
};
#endif

#if WETDEBUG || YYERROR_VERBOSE || 0
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
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    92,    93,    93,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   105,
     106,   106,   107,   107,   107,   108,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   115,   116
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
       2,     2,     2,     3,     3,     3,     1,     2,     1,     3,
       2,     5,     7,    10,     9,     5,     5,     7,     5,     1,
       2,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,    96,
       0,     0,     0,    67,    10,    98,     2,   109,    64,    65,
     110,     0,     0,    67,   100,    92,    91,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    62,    59,
      58,    61,    12,     0,     0,    63,    66,    57,    56,    66,
      66,     0,     0,     0,    20,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    69,    97,     0,    99,     0,
       0,     0,     0,     0,     0,    53,    12,    55,    54,     0,
      88,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    93,    94,     0,     0,   111,     3,    21,
       0,     0,    68,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    11,    17,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,    89,     0,
      34,    35,    36,    37,    38,    40,    39,    44,    43,    42,
      41,    46,    45,    48,    47,    51,    50,    49,    52,    15,
       0,     0,    72,     0,     0,     0,     0,    16,    71,   101,
       0,   105,   106,     0,     0,   108,    78,     0,     9,    14,
       0,     0,    73,    74,   112,   113,     0,     0,     0,     0,
       0,     0,     5,    13,    75,    76,   102,     0,     0,   107,
       0,     4,     6,     0,     0,     0,     0,   104,     0,   103,
       0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,   205,   221,   222,   101,    20,    99,   126,
      85,    39,    63,    21,   102,    55,    33,    56,    25,   193,
     194,    57,   167,    58,    64,    27,    28,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int16 yypact[] =
{
     396,   -69,   -17,   -43,    -7,    10,     7,    11,    19,    22,
     682,     8,     8,    21,    37,   -70,   396,   117,   104,   -70,
      -2,    24,    -4,    35,     2,   -70,   -70,   -70,   -70,   -70,
     -70,   682,    36,   -70,   -70,   -70,   -70,   -70,     8,   -44,
     682,    70,   682,   682,    54,   682,   682,   -70,   -70,   -70,
     -70,   -70,   -70,   188,   295,    -4,   -70,   -70,   -70,    49,
      56,    61,    77,   354,   -70,   650,    80,   472,   -70,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,     8,   -70,   659,   682,   -70,   -70,   491,   -70,    64,
     682,    85,   510,    71,   529,   -70,   -70,   -70,   -70,   393,
     -70,    -8,   760,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   -70,   -70,   -70,    -1,   -31,   -70,   -70,   -70,
     102,   103,   -70,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,     2,   -70,   -42,   333,    19,
     682,   -66,   -70,    19,   682,   109,   619,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   682,   -70,   682,
     548,   566,   372,   355,   582,   408,   408,   108,   108,   108,
     108,   154,   154,   171,   171,   163,   163,   163,   -70,   -70,
     -13,    59,   -70,    19,    19,   121,   129,   -70,   -70,    -3,
     314,   -70,   -70,   606,   140,   -70,   -70,   276,   760,   -70,
     682,   682,   -70,   -70,   -70,   -70,    19,   122,     8,   119,
     125,   -41,   -70,   -70,   760,   760,   -70,   682,   120,   -70,
     682,   -70,   -70,   625,    19,   644,    19,   -70,   396,   -70,
      58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,    -6,   -70,   -70,   -15,   -23,   -70,   111,   -70,
     -70,    84,   -25,     4,    48,     0,     5,     6,   211,   -70,
     -70,   -70,   -70,   -70,     1,   -70,   -70,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int16 yytable[] =
{
      22,    26,    41,    22,    90,    23,    24,    32,   191,    24,
      16,    22,    22,    30,    13,   220,    22,    59,    60,   169,
      15,    23,    24,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    17,   231,   197,    22,   216,
     217,    91,    89,   169,    24,    16,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    54,     1,
     147,    31,    37,    22,   129,    67,   209,   151,    23,    24,
      37,    15,    91,   168,    83,    35,    84,   169,   189,    87,
     -66,    22,   -66,    81,    61,    38,    17,   145,    92,    40,
      94,    95,    36,    97,    98,    16,   210,   211,     2,     3,
      42,    62,     4,     5,    68,     6,    82,     7,     8,     9,
      10,    11,    12,    97,    -7,    13,    14,    86,    88,    93,
     192,    15,   114,   115,   116,   117,   118,   119,   120,   121,
      96,   123,   148,    43,    16,    -7,    17,    44,   124,   125,
      65,    46,   127,   199,   131,   201,   150,   202,   152,   154,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     116,   117,   118,   119,   120,   121,    47,    48,    49,    50,
      15,   195,   196,    51,   121,   204,   214,   212,   213,   118,
     119,   120,   121,    52,   215,    17,   220,    53,   200,   234,
     227,   229,   203,   230,    43,    66,   232,   156,    44,   190,
     226,    45,    46,   240,    34,   207,     0,   208,    22,     0,
       0,     0,   228,     0,    24,     0,     0,     0,   237,     0,
     239,     0,     0,     0,     0,     0,     0,     0,    22,     0,
      22,   129,     0,    23,    24,    23,    24,    47,    48,    49,
      50,    15,     0,     0,    51,     0,     0,     0,   224,   225,
       0,     0,     0,     0,    52,     0,    17,     0,    53,   100,
       0,     0,     0,     0,     0,   233,     0,     0,   235,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     1,     0,     0,     0,     0,
       0,   223,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,     2,     3,   218,     1,     4,     5,
       0,     6,     0,     7,     8,     9,    10,    11,    12,     0,
       0,    13,    14,     0,   198,     0,     0,    15,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      16,   128,    17,     0,     0,     0,     2,     3,     0,     0,
       4,     5,     0,     6,     0,     7,     8,     9,    10,    11,
      12,     0,     0,    13,    14,     0,     0,     0,     0,    15,
     157,   158,   159,   160,   161,   162,   163,   164,   165,     0,
     166,     0,    16,     0,    17,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   132,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     149,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,     0,   153,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,     0,     0,     0,     0,   155,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    43,     0,     0,     0,
      44,     0,     0,    45,    46,    43,     0,     0,     0,    44,
       0,     0,    45,    46,     0,   219,   157,   158,   159,   160,
     161,   162,   163,   164,   165,     0,   206,     0,    43,     0,
       0,     0,    44,     0,   236,    45,    46,     0,     0,    47,
      48,    49,    50,    15,   130,     0,    51,     0,    47,    48,
      49,    50,    15,   238,     0,    51,    52,     0,    17,     0,
      53,     0,     0,     0,     0,    52,     0,    17,   146,    53,
       0,    47,    48,    49,    50,    15,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      17,     0,    53,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     0,     8,     3,    48,     0,     0,     3,    39,     3,
      76,    11,    12,    82,    57,    56,    16,    11,    12,    85,
      63,    16,    16,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    78,    77,    79,    38,    42,
      43,    85,    38,    85,    38,    76,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    10,     1,
      83,    78,    63,    63,    63,    17,    79,    90,    63,    63,
      63,    63,    85,    81,    78,    82,    80,    85,    79,    31,
      78,    81,    80,    85,    63,    78,    78,    81,    40,    78,
      42,    43,    82,    45,    46,    76,    37,    38,    40,    41,
      78,    64,    44,    45,     0,    47,    82,    49,    50,    51,
      52,    53,    54,    65,    56,    57,    58,    82,    82,    49,
     126,    63,    14,    15,    16,    17,    18,    19,    20,    21,
      76,    82,    84,    16,    76,    77,    78,    20,    82,    78,
      23,    24,    65,   149,    64,   151,    82,   153,    63,    78,
      85,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      16,    17,    18,    19,    20,    21,    59,    60,    61,    62,
      63,    79,    79,    66,    21,    76,    65,   193,   194,    18,
      19,    20,    21,    76,    65,    78,    56,    80,   150,    79,
      78,    82,   154,    78,    16,    88,   221,    96,    20,   125,
     216,    23,    24,   238,     3,   167,    -1,   169,   218,    -1,
      -1,    -1,   218,    -1,   218,    -1,    -1,    -1,   234,    -1,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
     240,   240,    -1,   238,   238,   240,   240,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    -1,   210,   211,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   230,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     1,    -1,    -1,    -1,    -1,
      -1,    85,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    82,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    40,    41,    82,     1,    44,    45,
      -1,    47,    -1,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,    58,    -1,    81,    -1,    -1,    63,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      76,    77,    78,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    45,    -1,    47,    -1,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    76,    -1,    78,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    79,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      79,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    79,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    79,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    79,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    16,    -1,
      -1,    -1,    20,    -1,    79,    23,    24,    -1,    -1,    59,
      60,    61,    62,    63,    64,    -1,    66,    -1,    59,    60,
      61,    62,    63,    79,    -1,    66,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    40,    41,    44,    45,    47,    49,    50,    51,
      52,    53,    54,    57,    58,    63,    76,    78,    90,    91,
      96,   102,   104,   105,   106,   107,   113,   114,   115,   116,
      82,    78,   102,   105,   107,    82,    82,    63,    78,   100,
      78,    91,    78,    16,    20,    23,    24,    59,    60,    61,
      62,    66,    76,    80,   103,   104,   106,   110,   112,   106,
     106,    63,    64,   101,   113,    23,    88,   103,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    85,    82,    78,    80,    99,    82,   103,    82,   102,
      48,    85,   103,    49,   103,   103,    76,   103,   103,    97,
      81,    95,   103,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    82,    82,    82,    78,    98,    65,    77,   113,
      64,    64,    79,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,   106,    79,    95,   103,    79,
      82,    95,    63,    79,    78,    79,    97,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    77,   111,    81,    85,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,    79,
     100,    39,    91,   108,   109,    79,    79,    79,    81,    91,
     103,    91,    91,   103,    76,    92,    77,   103,   103,    79,
      37,    38,    91,    91,    65,    65,    42,    43,    82,    79,
      56,    93,    94,    85,   103,   103,    91,    78,   102,    82,
      78,    77,    94,   103,    79,   103,    79,    91,    79,    91,
     101
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
      yyerror (root, scan, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scan)
#endif

/* Enable debugging if requested.  */
#if WETDEBUG

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
		  Type, Value, root, scan); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct nary_node **root, void *scan)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, root, scan)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct nary_node **root;
    void *scan;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (root);
  YYUSE (scan);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct nary_node **root, void *scan)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, root, scan)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct nary_node **root;
    void *scan;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, root, scan);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, struct nary_node **root, void *scan)
#else
static void
yy_reduce_print (yyvsp, yyrule, root, scan)
    YYSTYPE *yyvsp;
    int yyrule;
    struct nary_node **root;
    void *scan;
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
		       		       , root, scan);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, root, scan); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !WETDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !WETDEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct nary_node **root, void *scan)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, root, scan)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    struct nary_node **root;
    void *scan;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (root);
  YYUSE (scan);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




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
yyparse (struct nary_node **root, void *scan)
#else
int
yyparse (root, scan)
    struct nary_node **root;
    void *scan;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
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
#line 75 "parser.y"
    { root = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); YYACCEPT; }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 79 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 83 "parser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 87 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMTLST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 89 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 93 "parser.y"
    {(yyval.k) = make_node(P_OP_LBSTMT, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 97 "parser.y"
    {(yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 99 "parser.y"
    {(yyval.k) = make_node(P_OP_EXPLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 103 "parser.y"
    {(yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 105 "parser.y"
    {(yyval.k) = make_node(P_OP_VARLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 108 "parser.y"
    { }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 113 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 115 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 0); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 119 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 121 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 0); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 125 "parser.y"
    { printf("debug: %s\n", 
							(char *)((struct value*)(yyvsp[(1) - (1)].v))->c);(yyval.k) = 
								make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 129 "parser.y"
    { (yyval.k) = make_node(P_OP_IDLST, NULL, 2, 
							(yyvsp[(1) - (3)].k), make_node(ID, (yyvsp[(3) - (3)].v), 0)); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 134 "parser.y"
    { (yyval.k) = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 136 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 140 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSOP, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 142 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 144 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 146 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 148 "parser.y"
    {(yyval.k) = make_node(P_OP_ASDIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 150 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 152 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPOW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 154 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 156 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 158 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 160 "parser.y"
    {(yyval.k) = make_node(P_OP_ASRIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 162 "parser.y"
    {(yyval.k) = make_node(P_OP_ASLEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 167 "parser.y"
    { (yyval.k) = make_node(P_OP_OR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 169 "parser.y"
    { (yyval.k) = make_node(P_OP_AND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 171 "parser.y"
    { (yyval.k) = make_node(P_OP_BINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 173 "parser.y"
    { (yyval.k) = make_node(P_OP_BINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 175 "parser.y"
    { (yyval.k) = make_node(P_OP_BINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 177 "parser.y"
    { (yyval.k) = make_node(P_OP_EQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 179 "parser.y"
    { (yyval.k) = make_node(P_OP_NOTEQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 181 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATERTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 183 "parser.y"
    { (yyval.k) = make_node(P_OP_LESSTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 185 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATER, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 187 "parser.y"
    { (yyval.k) = make_node(P_OP_LESS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 189 "parser.y"
    { (yyval.k) = make_node(P_OP_LEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 191 "parser.y"
    { (yyval.k) = make_node(P_OP_RIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 193 "parser.y"
    { (yyval.k) = make_node(P_OP_PLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 195 "parser.y"
    { (yyval.k) = make_node(P_OP_MINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 197 "parser.y"
    { (yyval.k) = make_node(P_OP_MUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 199 "parser.y"
    { (yyval.k) = make_node(P_OP_DIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 201 "parser.y"
    { (yyval.k) = make_node(P_OP_MOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 203 "parser.y"
    { (yyval.k) = make_node(P_OP_POW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 205 "parser.y"
    { (yyval.k) = make_node(P_OP_UMINUS, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 207 "parser.y"
    { (yyval.k) = make_node(P_OP_COMPL, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 209 "parser.y"
    { (yyval.k) = make_node(P_OP_NOT, NULL,1,  (yyvsp[(2) - (2)].k));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 211 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 213 "parser.y"
    { (yyval.k) = make_node(P_OP_STRDEF, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 215 "parser.y"
    { (yyval.k) = make_node(NUMBER, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 217 "parser.y"
    { (yyval.k) = make_node(STRING, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 219 "parser.y"
    { (yyval.k) = make_node(TRUE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 221 "parser.y"
    { (yyval.k) = make_node(INT, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 223 "parser.y"
    { (yyval.k) = make_node(FALSE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 225 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 229 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 231 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 233 "parser.y"
    { (yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 235 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 237 "parser.y"
    { (yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 241 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 245 "parser.y"
    { (yyval.k) = make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 247 "parser.y"
    { (yyval.k) = make_node(P_OP_SEL, NULL, 2, (yyvsp[(1) - (4)].k), (yyvsp[(3) - (4)].k));}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 251 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLST, NULL, 2, (yyvsp[(3) - (4)].k), (yyvsp[(4) - (4)].k));}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 253 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 255 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 259 "parser.y"
    { (yyval.k) = make_node(P_OP_HKDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 263 "parser.y"
    { (yyval.k) = make_node(P_OP_HSDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 267 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 269 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 273 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 275 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 277 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 279 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 281 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 283 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 285 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 287 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 289 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICAST, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 293 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 0); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 295 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 299 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSIGN, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 301 "parser.y"
    { (yyval.k) = make_node(P_OP_BREAK, NULL, 0); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 303 "parser.y"
    { (yyval.k) = make_node(P_OP_CONTINUE, NULL, 0); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 305 "parser.y"
    { (yyval.k) = make_node(P_OP_INC, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 307 "parser.y"
    { (yyval.k) = make_node(P_OP_DEC, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 309 "parser.y"
    { (yyval.k) = make_node(P_OP_PRINT, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 311 "parser.y"
    { (yyval.k) = make_node(P_OP_BLOCK, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 313 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 315 "parser.y"
    { (yyval.k) = make_node(P_OP_FDEF, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 317 "parser.y"
    { }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 319 "parser.y"
    { }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 321 "parser.y"
    { (yyval.k) = make_node(P_OP_IF, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 323 "parser.y"
    { (yyval.k) = make_node(P_OP_ELSE, NULL, 3, (yyvsp[(3) - (7)].k), (yyvsp[(5) - (7)].k), (yyvsp[(7) - (7)].k)); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 326 "parser.y"
    { /* TODO */ }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 329 "parser.y"
    { (yyval.k) = make_node(P_OP_FOR, NULL, 4, (yyvsp[(3) - (9)].k), (yyvsp[(5) - (9)].k), (yyvsp[(7) - (9)].k), (yyvsp[(9) - (9)].k)); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 331 "parser.y"
    { (yyval.k) = make_node(P_OP_FORIN, NULL, 3, (yyvsp[(2) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 333 "parser.y"
    { (yyval.k) = make_node(P_OP_WHILE, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 335 "parser.y"
    { (yyval.k) = make_node(P_OP_DOWH, NULL, 2, (yyvsp[(2) - (7)].k), (yyvsp[(5) - (7)].k));}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 337 "parser.y"
    { (yyval.k) = make_node(P_OP_SWITCH, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 339 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 341 "parser.y"
    { printf("Invalid Statement. Skipping until semicolon\n");
							yyerrok; }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 346 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, (yyvsp[(2) - (3)].v), 0); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 350 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, (yyvsp[(5) - (5)].v), 0); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 354 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, (yyvsp[(5) - (5)].v), 0); }
    break;


/* Line 1787 of yacc.c  */
#line 2485 "wetparse.c"
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
      yyerror (root, scan, YY_("syntax error"));
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
        yyerror (root, scan, yymsgp);
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
		      yytoken, &yylval, root, scan);
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
		  yystos[yystate], yyvsp, root, scan);
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
  yyerror (root, scan, YY_("memory exhausted"));
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
                  yytoken, &yylval, root, scan);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, root, scan);
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
#line 357 "parser.y"

