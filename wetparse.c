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
#include <stdio.h>
#include <stdlib.h>

void yyerror(struct nary_node **root, void *scanner, const char *str){
	fprintf(stderr, "[Non-Interactive] %s\n", str);
}


/* Line 371 of yacc.c  */
#line 87 "wetparse.c"

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
#  define WETDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined WETDEBUG */
#if WETDEBUG
extern int wetdebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 30 "parser.y"

#define YYSTYPE WETSTYPE


/* Line 387 of yacc.c  */
#line 132 "wetparse.c"

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
     CAST = 280,
     ASSOP = 281,
     ASPLUS = 282,
     ASMINUS = 283,
     ASMUL = 284,
     ASDIV = 285,
     ASMOD = 286,
     ASPOW = 287,
     ASBINOR = 288,
     ASBINAND = 289,
     ASBINXOR = 290,
     ASRIGHTSHIFT = 291,
     ASLEFTSHIFT = 292,
     KEYSTROKE = 293,
     HOTSTRING = 294,
     ON = 295,
     IF = 296,
     GLOBAL = 297,
     ELSE = 298,
     ELIF = 299,
     CONTINUE = 300,
     BREAK = 301,
     UTIL = 302,
     FOR = 303,
     IN = 304,
     WHILE = 305,
     DO = 306,
     SWITCH = 307,
     PRINT = 308,
     INC = 309,
     DEC = 310,
     DEFAULT = 311,
     RET = 312,
     CASE = 313,
     FUNCTION = 314,
     EXTERNAL = 315,
     TRUE = 316,
     FALSE = 317,
     STRING = 318,
     NUMBER = 319,
     ID = 320,
     FCELANG = 321,
     FCEB_CODE = 322,
     INT = 323,
     FFI_CHAR = 324,
     FFI_SHORT = 325,
     FFI_INT = 326,
     FFI_LONG = 327,
     FFI_LONG_LONG = 328,
     FFI_DOUBLE = 329,
     FFI_FLOAT = 330,
     FFI_LONG_DOUBLE = 331,
     FFI_VOIDPTR = 332,
     CURLOPEN = 333,
     CURLCLOSE = 334,
     PAROPEN = 335,
     PARCLOSE = 336,
     BOXOPEN = 337,
     BOXCLOSE = 338,
     SEMI = 339,
     DP = 340,
     POINT = 341,
     COMMA = 342,
     SHARP = 343,
     DOLLAR = 344,
     QMARK = 345
   };
#endif


#if ! defined WETSTYPE && ! defined WETSTYPE_IS_DECLARED
typedef union WETSTYPE
{
/* Line 387 of yacc.c  */
#line 12 "parser.y"

	struct value *v;
	struct nary_node *k;


/* Line 387 of yacc.c  */
#line 243 "wetparse.c"
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
#line 270 "wetparse.c"

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   974

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  262

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

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
      85,    86,    87,    88,    89,    90
};

#if WETDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    15,    18,    20,    24,    30,
      32,    35,    41,    43,    47,    49,    53,    57,    61,    63,
      65,    69,    72,    76,    79,    81,    85,    87,    90,    94,
      98,   102,   106,   110,   114,   118,   122,   126,   130,   134,
     138,   142,   146,   150,   154,   158,   162,   166,   170,   174,
     178,   182,   186,   190,   194,   198,   202,   206,   210,   214,
     217,   220,   223,   225,   227,   229,   231,   233,   235,   237,
     239,   242,   244,   246,   248,   250,   254,   257,   259,   264,
     269,   275,   281,   285,   289,   293,   298,   300,   302,   304,
     306,   308,   310,   312,   314,   316,   320,   325,   328,   332,
     335,   338,   341,   345,   349,   353,   355,   358,   360,   364,
     367,   373,   381,   390,   397,   407,   413,   419,   427,   433,
     435,   438,   442,   448
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      92,     0,    -1,   105,    -1,    78,   105,    79,    -1,    44,
      80,   107,    81,    93,    -1,    95,    94,    -1,    94,    -1,
      78,    97,    79,    -1,    78,    97,    56,   105,    79,    -1,
      98,    -1,    97,    98,    -1,    58,    80,   107,    81,   105,
      -1,   107,    -1,    99,    87,   107,    -1,   110,    -1,   100,
      87,   110,    -1,   101,    87,   115,    -1,   101,    87,   116,
      -1,   115,    -1,   116,    -1,    80,   104,    81,    -1,    80,
      81,    -1,    80,    99,    81,    -1,    80,    81,    -1,    65,
      -1,   104,    87,    65,    -1,   118,    -1,   105,   118,    -1,
     100,    26,    99,    -1,   100,    27,    99,    -1,   100,    28,
      99,    -1,   100,    29,    99,    -1,   100,    30,    99,    -1,
     100,    31,    99,    -1,   100,    32,    99,    -1,   100,    33,
      99,    -1,   100,    34,    99,    -1,   100,    35,    99,    -1,
     100,    36,    99,    -1,   100,    37,    99,    -1,   107,     3,
     107,    -1,   107,     4,   107,    -1,   107,     5,   107,    -1,
     107,     6,   107,    -1,   107,     7,   107,    -1,   107,     9,
     107,    -1,   107,     8,   107,    -1,   107,    13,   107,    -1,
     107,    12,   107,    -1,   107,    11,   107,    -1,   107,    10,
     107,    -1,   107,    15,   107,    -1,   107,    14,   107,    -1,
     107,    17,   107,    -1,   107,    16,   107,    -1,   107,    20,
     107,    -1,   107,    19,   107,    -1,   107,    18,   107,    -1,
     107,    21,   107,    -1,    16,   107,    -1,    24,   107,    -1,
      23,   107,    -1,   117,    -1,   114,    -1,    64,    -1,    63,
      -1,    61,    -1,    68,    -1,    62,    -1,   108,    -1,   116,
     107,    -1,   120,    -1,   121,    -1,   110,    -1,   109,    -1,
      80,   107,    81,    -1,   108,   103,    -1,    65,    -1,   108,
      82,   107,    83,    -1,    59,    65,   102,    93,    -1,    59,
      65,   102,   112,    93,    -1,    59,    65,   102,   113,    93,
      -1,    40,    38,   107,    -1,    40,    39,   107,    -1,    78,
      99,    79,    -1,    20,    78,    99,    79,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    80,   101,    81,    -1,
      20,    81,   101,    80,    -1,    82,    83,    -1,    82,    99,
      83,    -1,   106,    84,    -1,    46,    84,    -1,    45,    84,
      -1,    54,   110,    84,    -1,    55,   110,    84,    -1,    53,
     107,    84,    -1,    93,    -1,   109,    84,    -1,   111,    -1,
      42,   106,    84,    -1,    42,   111,    -1,    41,    80,   107,
      81,    93,    -1,    41,    80,   107,    81,    93,    43,    93,
      -1,    41,    80,   107,    81,    93,    95,    43,    93,    -1,
      41,    80,   107,    81,    93,    95,    -1,    48,    80,   106,
      84,   107,    84,   106,    81,    93,    -1,    48,   104,    49,
      99,    93,    -1,    50,    80,   107,    81,    93,    -1,    51,
      93,    50,    80,   107,    81,    84,    -1,    52,    80,   107,
      81,    96,    -1,   119,    -1,     1,    84,    -1,    60,    66,
      67,    -1,    80,    23,    66,    81,    67,    -1,    80,    90,
      66,    81,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    87,    91,    95,    97,   101,   103,   107,
     109,   113,   117,   119,   123,   125,   129,   130,   131,   132,
     135,   137,   141,   143,   147,   151,   156,   158,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   180,   182,   184,
     189,   191,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   237,   239,   241,   243,   245,   247,
     249,   252,   254,   256,   258,   260,   264,   268,   270,   274,
     276,   278,   282,   286,   290,   292,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   316,   318,   322,   324,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   356,   358,   361,   363,   365,   367,   369,
     371,   376,   380,   384
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
  "UMINUS", "NOT", "COMPL", "CAST", "ASSOP", "ASPLUS", "ASMINUS", "ASMUL",
  "ASDIV", "ASMOD", "ASPOW", "ASBINOR", "ASBINAND", "ASBINXOR",
  "ASRIGHTSHIFT", "ASLEFTSHIFT", "KEYSTROKE", "HOTSTRING", "ON", "IF",
  "GLOBAL", "ELSE", "ELIF", "CONTINUE", "BREAK", "UTIL", "FOR", "IN",
  "WHILE", "DO", "SWITCH", "PRINT", "INC", "DEC", "DEFAULT", "RET", "CASE",
  "FUNCTION", "EXTERNAL", "TRUE", "FALSE", "STRING", "NUMBER", "ID",
  "FCELANG", "FCEB_CODE", "INT", "FFI_CHAR", "FFI_SHORT", "FFI_INT",
  "FFI_LONG", "FFI_LONG_LONG", "FFI_DOUBLE", "FFI_FLOAT",
  "FFI_LONG_DOUBLE", "FFI_VOIDPTR", "CURLOPEN", "CURLCLOSE", "PAROPEN",
  "PARCLOSE", "BOXOPEN", "BOXCLOSE", "SEMI", "DP", "POINT", "COMMA",
  "SHARP", "DOLLAR", "QMARK", "$accept", "program", "block", "elif_block",
  "elif_block_list", "switchblock", "case_stmtlist", "case_statement",
  "explist", "varlist", "castlist", "parlist", "arglist", "idlist",
  "stmtlist", "assignment", "expression", "evalexpression", "functioncall",
  "var_exp", "functiondef", "hotkeydef", "hotstringdef", "ffi_struct_def",
  "ffi_cast", "complex_cast", "listconstructor", "statement", "fceblock",
  "fceexp", "fceexp_rc", YY_NULL
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    95,    95,    96,    96,    97,
      97,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   109,   110,   110,   111,
     111,   111,   112,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     5,     2,     1,     3,     5,     1,
       2,     5,     1,     3,     1,     3,     3,     3,     1,     1,
       3,     2,     3,     2,     1,     3,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     2,     1,     4,     4,
       5,     5,     3,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     3,     2,
       2,     2,     3,     3,     3,     1,     2,     1,     3,     2,
       5,     7,     8,     6,     9,     5,     5,     7,     5,     1,
       2,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,   105,
       0,     0,     0,     0,    74,    14,   107,    26,   119,    71,
      72,   120,     0,     0,    74,   109,   101,   100,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    68,
      65,    64,    67,     0,     0,     0,     0,    69,    73,    63,
       0,    62,    73,    73,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    99,     0,     0,    76,   106,
       0,   108,     0,     0,     0,     0,     0,     0,    59,     0,
       0,    61,    60,     0,    12,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    18,    19,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,    70,
     102,   103,     0,     0,   121,     3,     0,     0,    75,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    15,    23,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    19,    84,     0,    95,
       0,    98,    40,    41,    42,    43,    44,    46,    45,    50,
      49,    48,    47,    52,    51,    54,    53,    57,    56,    55,
      58,    21,     0,     0,    79,     0,     0,     0,     0,    22,
      78,   110,     0,   115,   116,     0,     0,   118,    85,    96,
      13,    16,    17,    20,     0,     0,    80,    81,   122,   123,
       0,     0,     6,   113,     0,     0,     0,     0,     9,    82,
      83,   111,     0,     0,     5,     0,   117,     0,     0,     7,
      10,     0,   112,     0,     0,     0,     0,   114,     0,     8,
       4,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,   232,   233,   217,   237,   238,   103,    20,
     114,   143,    88,    40,    21,    22,   104,    57,    34,    58,
      26,   205,   206,    59,   115,    60,    61,    27,    28,    29,
      30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
     495,   -64,   -38,   -30,   -44,    -7,   -37,     9,   -20,    17,
     826,   -29,   -29,    44,    55,   -65,   495,    10,   126,   -65,
     179,   338,    45,   -28,    46,    31,   -65,   -65,   -65,   -65,
     -65,   -65,   826,    47,   -65,   -65,   -65,   -65,   -65,   -29,
     -40,   826,    78,   826,   826,    29,   826,   826,   -65,   -65,
     -65,   -65,   -65,   826,   742,    40,   139,   -28,   -65,   -65,
     826,   -65,    48,    50,    56,    68,   411,   765,    71,   345,
     -65,   826,   826,   826,   826,   826,   826,   826,   826,   826,
     826,   826,   826,   -29,   -65,   -65,   776,   826,   -65,   -65,
     573,   -65,    54,   826,    75,   592,    82,   611,   -65,   826,
     209,   -65,   -65,   -55,   856,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -26,   -65,   826,   -65,     4,   826,
     826,   826,   826,   826,   826,   826,   826,   826,   826,   826,
     826,   826,   826,   826,   826,   826,   826,   826,   -65,   905,
     -65,   -65,   -50,   -21,   -65,   -65,    80,    83,   -65,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    31,   -65,   -22,   316,   -20,   826,   -41,   -65,   -20,
     826,    91,     7,    89,   209,   -42,   -65,   -65,   826,   -65,
     209,   -65,   905,   922,   938,   953,   651,   180,   180,   253,
     253,   253,   253,   324,   324,    61,    61,   181,   181,   181,
     -65,   -65,   -11,    76,   -65,   -20,   -20,   150,   152,   -65,
     -65,    73,   297,   -65,   -65,   630,   162,   -65,   -65,   -65,
     856,   -65,   -65,   -65,   826,   826,   -65,   -65,   -65,   -65,
     -20,   141,   -65,    81,   -29,   140,   145,   -31,   -65,   856,
     856,   -65,   826,   -20,   -65,   146,   -65,   826,   495,   -65,
     -65,   709,   -65,   -20,   728,   453,   -20,   -65,   495,   -65,
     -65,   369
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,    -2,    -1,   -65,   -65,   -65,    -4,   603,   -65,
     131,   -65,   -65,    84,    -6,     5,    52,     0,     1,     2,
     232,   -65,   -65,   -65,    57,   -47,   -65,   -17,   -65,   -65,
     -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      23,    24,    25,    23,    84,    25,    42,   116,    33,    93,
      66,    23,    23,    62,    63,    38,    23,    24,    25,   203,
      31,    23,    24,    25,   177,   248,    44,   236,    38,    13,
      45,   201,   178,    67,    47,    15,    15,    16,   219,    23,
      36,    25,    32,    39,    92,   180,   178,    94,   249,    84,
      17,    17,    86,   176,    87,   179,    44,    16,    16,   209,
      45,   180,    56,    46,    47,   178,    23,    24,    25,    69,
     223,    48,    49,    50,    51,    15,    94,    37,    52,   134,
     135,   136,   137,    23,    90,   161,   218,   181,    53,    41,
      54,   178,    55,    95,   178,    97,    98,    43,   101,   102,
      68,    48,    49,    50,    51,    15,    69,    99,    52,    64,
     100,   -73,   139,   -73,   224,   225,   230,   231,    53,   101,
      54,    65,    55,   117,   243,   231,    70,   176,    96,    85,
      89,    91,   140,   222,   141,   144,   142,   147,   166,   164,
     168,   204,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   207,   170,   211,   208,   213,   178,   214,   139,   216,
     100,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   137,   226,   227,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,   228,   212,   229,
     236,   242,   215,   138,   246,   247,   202,   253,   241,   173,
     220,   175,   244,   250,    23,    35,    25,   221,    84,   245,
       0,   252,   255,     0,    84,     0,     0,     0,    23,    24,
      25,   257,   261,     0,   260,    23,    24,    25,    23,    24,
      25,    23,    24,    25,     0,     0,    83,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   239,   240,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   174,
       0,     0,     0,     0,   251,     0,     0,     0,     0,   254,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -2,     1,
     132,   133,   134,   135,   136,   137,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,   234,     0,     4,     5,     0,     6,     0,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,    14,   210,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       2,     3,     1,     0,     4,     5,    16,     6,    17,     7,
       8,     9,    10,    11,    12,   -11,   148,   -11,    13,    14,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,   -11,    17,
       0,     0,     2,     3,     1,     0,     4,     5,     0,     6,
       0,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
     145,    17,     0,     0,     2,     3,     1,     0,     4,     5,
       0,     6,     0,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,   259,    17,     0,     0,     2,     3,     0,     0,
       4,     5,     0,     6,     0,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,    14,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,    17,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,     0,   165,     0,     0,     0,   118,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   169,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,   163,
       0,     0,   171,     0,     0,     0,   167,     0,     0,     0,
       0,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,   235,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,     0,    45,     0,     0,    67,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,     0,    45,     0,     0,    46,    47,
     256,     0,    44,     0,     0,     0,    45,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,    15,     0,   258,
      52,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      53,     0,    54,     0,    55,     0,    48,    49,    50,    51,
      15,   146,    68,    52,     0,     0,     0,    48,    49,    50,
      51,    15,    44,    53,    52,    54,    45,    55,     0,    46,
      47,     0,     0,     0,    53,     0,    54,   162,    55,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,    15,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,    54,     0,    55,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     3,    21,     3,     8,    54,     3,    49,
      16,    11,    12,    11,    12,    65,    16,    16,    16,    40,
      84,    21,    21,    21,    79,    56,    16,    58,    65,    59,
      20,    81,    87,    23,    24,    65,    65,    78,    80,    39,
      84,    39,    80,    80,    39,    87,    87,    87,    79,    66,
      80,    80,    80,   100,    82,    81,    16,    78,    78,    81,
      20,    87,    10,    23,    24,    87,    66,    66,    66,    17,
      81,    61,    62,    63,    64,    65,    87,    84,    68,    18,
      19,    20,    21,    83,    32,    83,    79,    83,    78,    80,
      80,    87,    82,    41,    87,    43,    44,    80,    46,    47,
      90,    61,    62,    63,    64,    65,    54,    78,    68,    65,
      81,    80,    60,    82,    38,    39,    43,    44,    78,    67,
      80,    66,    82,    83,    43,    44,     0,   174,    50,    84,
      84,    84,    84,   180,    84,    67,    80,    66,    84,    87,
      65,   143,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    81,    80,   165,    81,   167,    87,   169,   116,    78,
      81,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    21,   205,   206,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    67,   166,    67,
      58,    80,   170,    84,    84,    80,   142,    81,   230,    20,
     178,   100,   233,   237,   234,     3,   234,   180,   255,   234,
      -1,   243,   248,    -1,   261,    -1,    -1,    -1,   248,   248,
     248,   253,   258,    -1,   256,   255,   255,   255,   258,   258,
     258,   261,   261,   261,    -1,    -1,    87,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,   224,   225,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,   247,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     1,
      16,    17,    18,    19,    20,    21,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    84,    -1,    45,    46,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    59,    60,    83,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,     1,    -1,    45,    46,    78,    48,    80,    50,
      51,    52,    53,    54,    55,    56,    81,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      -1,    -1,    41,    42,     1,    -1,    45,    46,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    -1,    -1,    41,    42,     1,    -1,    45,    46,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    -1,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    81,    -1,    -1,    -1,    55,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    81,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    86,
      -1,    -1,    81,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      81,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    61,    62,    63,    64,    65,    -1,    81,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    80,    -1,    82,    -1,    61,    62,    63,    64,
      65,    66,    90,    68,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    16,    78,    68,    80,    20,    82,    -1,    23,
      24,    -1,    -1,    -1,    78,    -1,    80,    81,    82,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    41,    42,    45,    46,    48,    50,    51,    52,
      53,    54,    55,    59,    60,    65,    78,    80,    92,    93,
     100,   105,   106,   108,   109,   110,   111,   118,   119,   120,
     121,    84,    80,   106,   109,   111,    84,    84,    65,    80,
     104,    80,    93,    80,    16,    20,    23,    24,    61,    62,
      63,    64,    68,    78,    80,    82,   107,   108,   110,   114,
     116,   117,   110,   110,    65,    66,   105,    23,    90,   107,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    87,   118,    84,    80,    82,   103,    84,
     107,    84,   106,    49,    87,   107,    50,   107,   107,    78,
      81,   107,   107,    99,   107,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   101,   115,   116,    83,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    84,   107,
      84,    84,    80,   102,    67,    79,    66,    66,    81,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   110,    81,    99,   107,    81,    84,    99,    65,    81,
      80,    81,    99,    20,    80,   101,   116,    79,    87,    81,
      87,    83,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,    81,   104,    40,    93,   112,   113,    81,    81,    81,
      83,    93,   107,    93,    93,   107,    78,    96,    79,    80,
     107,   115,   116,    81,    38,    39,    93,    93,    67,    67,
      43,    44,    94,    95,    84,    81,    58,    97,    98,   107,
     107,    93,    80,    43,    94,   106,    84,    80,    56,    79,
      98,   107,    93,    81,   107,   105,    81,    93,    81,    79,
      93,   105
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
#line 84 "parser.y"
    { *root = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 88 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 92 "parser.y"
    {(yyval.k) = make_node(P_OP_ELIFBLK, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 96 "parser.y"
    {(yyval.k) = make_node(P_OP_ELIFLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 98 "parser.y"
    {(yyval.k) = make_node(P_OP_ELIFBLK, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 102 "parser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 104 "parser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 2, (yyvsp[(2) - (5)].k), (yyvsp[(4) - (5)].k));}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 108 "parser.y"
    {(yyval.k) = make_node(P_OP_CASESTMT, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 110 "parser.y"
    {(yyval.k) = make_node(P_OP_CASELST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 114 "parser.y"
    {(yyval.k) = make_node(P_OP_CASESTMT, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 118 "parser.y"
    {(yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 120 "parser.y"
    {(yyval.k) = make_node(P_OP_EXPLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 124 "parser.y"
    {(yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 126 "parser.y"
    {(yyval.k) = make_node(P_OP_VARLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 136 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 138 "parser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 0); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 142 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 144 "parser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 0); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 148 "parser.y"
    { printf("debug: %s\n", 
							(char *)((struct value*)(yyvsp[(1) - (1)].v))->c);(yyval.k) = 
								make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 152 "parser.y"
    { (yyval.k) = make_node(P_OP_IDLST, NULL, 2, 
							(yyvsp[(1) - (3)].k), make_node(ID, (yyvsp[(3) - (3)].v), 0)); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 157 "parser.y"
    { (yyval.k) = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 159 "parser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 163 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSOP, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 165 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 167 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 169 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 171 "parser.y"
    {(yyval.k) = make_node(P_OP_ASDIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 173 "parser.y"
    {(yyval.k) = make_node(P_OP_ASMOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 175 "parser.y"
    {(yyval.k) = make_node(P_OP_ASPOW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 177 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 179 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 181 "parser.y"
    {(yyval.k) = make_node(P_OP_ASBINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 183 "parser.y"
    {(yyval.k) = make_node(P_OP_ASRIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 185 "parser.y"
    {(yyval.k) = make_node(P_OP_ASLEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 190 "parser.y"
    { (yyval.k) = make_node(P_OP_OR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 192 "parser.y"
    { (yyval.k) = make_node(P_OP_AND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 194 "parser.y"
    { (yyval.k) = make_node(P_OP_BINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 196 "parser.y"
    { (yyval.k) = make_node(P_OP_BINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 198 "parser.y"
    { (yyval.k) = make_node(P_OP_BINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 200 "parser.y"
    { (yyval.k) = make_node(P_OP_EQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 202 "parser.y"
    { (yyval.k) = make_node(P_OP_NOTEQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 204 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATERTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 206 "parser.y"
    { (yyval.k) = make_node(P_OP_LESSTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 208 "parser.y"
    { (yyval.k) = make_node(P_OP_GREATER, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 210 "parser.y"
    { (yyval.k) = make_node(P_OP_LESS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 212 "parser.y"
    { (yyval.k) = make_node(P_OP_LEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 214 "parser.y"
    { (yyval.k) = make_node(P_OP_RIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 216 "parser.y"
    { (yyval.k) = make_node(P_OP_PLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 218 "parser.y"
    { (yyval.k) = make_node(P_OP_MINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 220 "parser.y"
    { (yyval.k) = make_node(P_OP_MUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 222 "parser.y"
    { (yyval.k) = make_node(P_OP_DIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 224 "parser.y"
    { (yyval.k) = make_node(P_OP_MOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 226 "parser.y"
    { (yyval.k) = make_node(P_OP_POW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 228 "parser.y"
    { (yyval.k) = make_node(P_OP_UMINUS, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 230 "parser.y"
    { (yyval.k) = make_node(P_OP_COMPL, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 232 "parser.y"
    { (yyval.k) = make_node(P_OP_NOT, NULL,1,  (yyvsp[(2) - (2)].k));}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 234 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 236 "parser.y"
    { (yyval.k) = make_node(P_OP_STRDEF, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 238 "parser.y"
    { (yyval.k) = make_node(NUMBER, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 240 "parser.y"
    { (yyval.k) = make_node(STRING, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 242 "parser.y"
    { (yyval.k) = make_node(TRUE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 244 "parser.y"
    { (yyval.k) = make_node(INT, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 246 "parser.y"
    { (yyval.k) = make_node(FALSE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 248 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 253 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 255 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 257 "parser.y"
    { (yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 259 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 261 "parser.y"
    { (yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 265 "parser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 269 "parser.y"
    { (yyval.k) = make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 271 "parser.y"
    { (yyval.k) = make_node(P_OP_SEL, NULL, 2, (yyvsp[(1) - (4)].k), (yyvsp[(3) - (4)].k));}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 275 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLST, NULL, 2, (yyvsp[(3) - (4)].k), (yyvsp[(4) - (4)].k));}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 277 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 279 "parser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 283 "parser.y"
    { (yyval.k) = make_node(P_OP_HKDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 287 "parser.y"
    { (yyval.k) = make_node(P_OP_HSDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 291 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 293 "parser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 297 "parser.y"
    { (yyval.k) = make_node(P_OP_FFICHAR, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 299 "parser.y"
    { (yyval.k) = make_node(P_OP_FFISHORT, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 301 "parser.y"
    { (yyval.k) = make_node(P_OP_FFIINT, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 303 "parser.y"
    { (yyval.k) = make_node(P_OP_FFILONG, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 305 "parser.y"
    { (yyval.k) = make_node(P_OP_FFILONGLONG, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 307 "parser.y"
    { (yyval.k) = make_node(P_OP_FFIDOUBLE, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 309 "parser.y"
    { (yyval.k) = make_node(P_OP_FFIFLOAT, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 311 "parser.y"
    { (yyval.k) = make_node(P_OP_FFILONGDOUBLE, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 313 "parser.y"
    { (yyval.k) = make_node(P_OP_FFIVOIDPTR, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 317 "parser.y"
    { (yyval.k) = (yyvsp[(2) - (3)].k); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 319 "parser.y"
    { (yyval.k) = (yyvsp[(3) - (4)].k); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 323 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 0); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 325 "parser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 329 "parser.y"
    { (yyval.k) = make_node(P_OP_ASSIGN, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 331 "parser.y"
    { (yyval.k) = make_node(P_OP_BREAK, NULL, 0); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 333 "parser.y"
    { (yyval.k) = make_node(P_OP_CONTINUE, NULL, 0); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 335 "parser.y"
    { (yyval.k) = make_node(P_OP_INC, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 337 "parser.y"
    { (yyval.k) = make_node(P_OP_DEC, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 339 "parser.y"
    { (yyval.k) = make_node(P_OP_PRINT, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 341 "parser.y"
    { (yyval.k) = make_node(P_OP_BLOCK, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 343 "parser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 345 "parser.y"
    { (yyval.k) = make_node(P_OP_FDEF, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 347 "parser.y"
    { }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 349 "parser.y"
    { }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 351 "parser.y"
    { (yyval.k) = make_node(P_OP_IF, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 353 "parser.y"
    { (yyval.k) = make_node(P_OP_ELSE, NULL, 3, (yyvsp[(3) - (7)].k), (yyvsp[(5) - (7)].k), (yyvsp[(7) - (7)].k)); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 355 "parser.y"
    { (yyval.k) = make_node(P_OP_ELIF, NULL, 4, (yyvsp[(3) - (8)].k),(yyvsp[(5) - (8)].k),(yyvsp[(6) - (8)].k),(yyvsp[(8) - (8)].k)); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 357 "parser.y"
    { (yyval.k) = make_node(P_OP_ELIF, NULL, 3, (yyvsp[(3) - (6)].k),(yyvsp[(5) - (6)].k),(yyvsp[(6) - (6)].k)); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 360 "parser.y"
    { (yyval.k) = make_node(P_OP_FOR, NULL, 4, (yyvsp[(3) - (9)].k), (yyvsp[(5) - (9)].k), (yyvsp[(7) - (9)].k), (yyvsp[(9) - (9)].k)); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 362 "parser.y"
    { (yyval.k) = make_node(P_OP_FORIN, NULL, 3, (yyvsp[(2) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 364 "parser.y"
    { (yyval.k) = make_node(P_OP_WHILE, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 366 "parser.y"
    { (yyval.k) = make_node(P_OP_DOWH, NULL, 2, (yyvsp[(2) - (7)].k), (yyvsp[(5) - (7)].k));}
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 368 "parser.y"
    { (yyval.k) = make_node(P_OP_SWITCH, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k)); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 370 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 372 "parser.y"
    { printf("Invalid Statement. Skipping until semicolon\n");
							yyerrok; }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 377 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEB, (yyvsp[(2) - (3)].v), 0); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 381 "parser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, (yyvsp[(5) - (5)].v), 0); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 385 "parser.y"
    { (yyval.k) = make_node(P_OP_FCRC, (yyvsp[(5) - (5)].v), 0); }
    break;


/* Line 1787 of yacc.c  */
#line 2584 "wetparse.c"
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
#line 388 "parser.y"


