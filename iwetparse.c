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
#define YYSTYPE         IWETSTYPE
/* Substitute the variable and function names.  */
#define yyparse         iwetparse
#define yylex           iwetlex
#define yyerror         iweterror
#define yylval          iwetlval
#define yychar          iwetchar
#define yydebug         iwetdebug
#define yynerrs         iwetnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "iparser.y"

#include "parser.h"
#include <stdlib.h>
#include <stdio.h>

void yyerror(struct nary_node **root, void *scanner, const char *str){
	fprintf(stderr, "[Interactive] %s\n", str);
}


/* Line 371 of yacc.c  */
#line 87 "iwetparse.c"

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
   by #include "iwetparse.h".  */
#ifndef YY_IWET_IWETPARSE_H_INCLUDED
# define YY_IWET_IWETPARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef IWETDEBUG
# if defined YYDEBUG
#  if YYDEBUG
#   define IWETDEBUG 1
#  else
#   define IWETDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define IWETDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined IWETDEBUG */
#if IWETDEBUG
extern int iwetdebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 30 "iparser.y"

#define YYSTYPE IWETSTYPE


/* Line 387 of yacc.c  */
#line 132 "iwetparse.c"

/* Tokens.  */
#ifndef IWETTOKENTYPE
# define IWETTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum iwettokentype {
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
     RET = 311,
     CASE = 312,
     FUNCTION = 313,
     EXTERNAL = 314,
     TRUE = 315,
     FALSE = 316,
     STRING = 317,
     NUMBER = 318,
     ID = 319,
     FCELANG = 320,
     FCEB_CODE = 321,
     INT = 322,
     FFI_CHAR = 323,
     FFI_SHORT = 324,
     FFI_INT = 325,
     FFI_LONG = 326,
     FFI_LONG_LONG = 327,
     FFI_DOUBLE = 328,
     FFI_FLOAT = 329,
     FFI_LONG_DOUBLE = 330,
     FFI_VOIDPTR = 331,
     CURLOPEN = 332,
     CURLCLOSE = 333,
     PAROPEN = 334,
     PARCLOSE = 335,
     BOXOPEN = 336,
     BOXCLOSE = 337,
     SEMI = 338,
     DP = 339,
     POINT = 340,
     COMMA = 341,
     SHARP = 342,
     DOLLAR = 343,
     QMARK = 344,
     NL = 345
   };
#endif


#if ! defined IWETSTYPE && ! defined IWETSTYPE_IS_DECLARED
typedef union IWETSTYPE
{
/* Line 387 of yacc.c  */
#line 12 "iparser.y"

	struct value *v;
	struct nary_node *k;


/* Line 387 of yacc.c  */
#line 243 "iwetparse.c"
} IWETSTYPE;
# define IWETSTYPE_IS_TRIVIAL 1
# define iwetstype IWETSTYPE /* obsolescent; will be withdrawn */
# define IWETSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int iwetparse (void *YYPARSE_PARAM);
#else
int iwetparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int iwetparse (struct nary_node **root, void *scan);
#else
int iwetparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_IWET_IWETPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 270 "iwetparse.c"

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
	 || (defined IWETSTYPE_IS_TRIVIAL && IWETSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   859

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  285

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

#if IWETDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    15,    18,    20,    24,    29,
      31,    34,    40,    42,    46,    48,    52,    56,    60,    62,
      64,    68,    71,    75,    78,    80,    84,    86,    89,    93,
      97,   101,   105,   109,   113,   117,   121,   125,   129,   133,
     137,   141,   145,   149,   153,   157,   161,   165,   169,   173,
     177,   181,   185,   189,   193,   197,   201,   205,   209,   213,
     216,   219,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   241,   243,   245,   247,   249,   253,   256,   258,   263,
     268,   274,   280,   284,   288,   292,   297,   299,   301,   303,
     305,   307,   309,   311,   313,   315,   319,   324,   327,   331,
     335,   339,   343,   348,   353,   358,   361,   365,   368,   373,
     377,   384,   393,   403,   411,   422,   429,   436,   445,   452,
     455,   457,   460,   463,   467,   473
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      92,     0,    -1,   118,    -1,    77,   105,    78,    -1,    44,
      79,   107,    80,    93,    -1,    95,    94,    -1,    94,    -1,
      77,    97,    78,    -1,    77,    90,    97,    78,    -1,    98,
      -1,    97,    98,    -1,    57,    79,   107,    80,   105,    -1,
     107,    -1,    99,    86,   107,    -1,   110,    -1,   100,    86,
     110,    -1,   101,    86,   115,    -1,   101,    86,   116,    -1,
     115,    -1,   116,    -1,    79,   104,    80,    -1,    79,    80,
      -1,    79,    99,    80,    -1,    79,    80,    -1,    64,    -1,
     104,    86,    64,    -1,   118,    -1,   105,   118,    -1,   100,
      26,    99,    -1,   100,    27,    99,    -1,   100,    28,    99,
      -1,   100,    29,    99,    -1,   100,    30,    99,    -1,   100,
      31,    99,    -1,   100,    32,    99,    -1,   100,    33,    99,
      -1,   100,    34,    99,    -1,   100,    35,    99,    -1,   100,
      36,    99,    -1,   100,    37,    99,    -1,   107,     3,   107,
      -1,   107,     4,   107,    -1,   107,     5,   107,    -1,   107,
       6,   107,    -1,   107,     7,   107,    -1,   107,     9,   107,
      -1,   107,     8,   107,    -1,   107,    13,   107,    -1,   107,
      12,   107,    -1,   107,    11,   107,    -1,   107,    10,   107,
      -1,   107,    15,   107,    -1,   107,    14,   107,    -1,   107,
      17,   107,    -1,   107,    16,   107,    -1,   107,    20,   107,
      -1,   107,    19,   107,    -1,   107,    18,   107,    -1,   107,
      21,   107,    -1,    16,   107,    -1,    24,   107,    -1,    23,
     107,    -1,   117,    -1,   114,    -1,    63,    -1,    62,    -1,
      60,    -1,    67,    -1,    61,    -1,   108,    -1,   116,   107,
      -1,   120,    -1,   121,    -1,   110,    -1,   109,    -1,    79,
     107,    80,    -1,   108,   103,    -1,    64,    -1,   108,    81,
     107,    82,    -1,    58,    64,   102,    93,    -1,    58,    64,
     102,   112,    93,    -1,    58,    64,   102,   113,    93,    -1,
      40,    38,   107,    -1,    40,    39,   107,    -1,    77,    99,
      78,    -1,    20,    77,    99,    78,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    79,   101,    80,    -1,    20,
      80,   101,    79,    -1,    81,    82,    -1,    81,    99,    82,
      -1,   106,    83,    90,    -1,    46,    83,    90,    -1,    45,
      83,    90,    -1,    54,   110,    83,    90,    -1,    55,   110,
      83,    90,    -1,    53,   107,    83,    90,    -1,    93,    90,
      -1,   109,    83,    90,    -1,   111,    90,    -1,    42,   106,
      83,    90,    -1,    42,   111,    90,    -1,    41,    79,   107,
      80,    93,    90,    -1,    41,    79,   107,    80,    93,    43,
      93,    90,    -1,    41,    79,   107,    80,    93,    95,    43,
      93,    90,    -1,    41,    79,   107,    80,    93,    95,    90,
      -1,    48,    79,   106,    83,   107,    83,   106,    80,    93,
      90,    -1,    48,   104,    49,    99,    93,    90,    -1,    50,
      79,   107,    80,    93,    90,    -1,    51,    93,    50,    79,
     107,    80,    83,    90,    -1,    52,    79,   107,    80,    96,
      90,    -1,   119,    90,    -1,    90,    -1,     1,    83,    -1,
       1,    90,    -1,    59,    65,    66,    -1,    79,    23,    65,
      80,    66,    -1,    79,    89,    65,    80,    66,    -1
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
     371,   373,   376,   381,   385,   389
};
#endif

#if IWETDEBUG || YYERROR_VERBOSE || 0
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
  "WHILE", "DO", "SWITCH", "PRINT", "INC", "DEC", "RET", "CASE",
  "FUNCTION", "EXTERNAL", "TRUE", "FALSE", "STRING", "NUMBER", "ID",
  "FCELANG", "FCEB_CODE", "INT", "FFI_CHAR", "FFI_SHORT", "FFI_INT",
  "FFI_LONG", "FFI_LONG_LONG", "FFI_DOUBLE", "FFI_FLOAT",
  "FFI_LONG_DOUBLE", "FFI_VOIDPTR", "CURLOPEN", "CURLCLOSE", "PAROPEN",
  "PARCLOSE", "BOXOPEN", "BOXCLOSE", "SEMI", "DP", "POINT", "COMMA",
  "SHARP", "DOLLAR", "QMARK", "NL", "$accept", "program", "block",
  "elif_block", "elif_block_list", "switchblock", "case_stmtlist",
  "case_statement", "explist", "varlist", "castlist", "parlist", "arglist",
  "idlist", "stmtlist", "assignment", "expression", "evalexpression",
  "functioncall", "var_exp", "functiondef", "hotkeydef", "hotstringdef",
  "ffi_struct_def", "ffi_cast", "complex_cast", "listconstructor",
  "statement", "fceblock", "fceexp", "fceexp_rc", YY_NULL
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
     118,   118,   118,   119,   120,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     5,     2,     1,     3,     4,     1,
       2,     5,     1,     3,     1,     3,     3,     3,     1,     1,
       3,     2,     3,     2,     1,     3,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     2,     1,     4,     4,
       5,     5,     3,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     3,     3,
       3,     3,     4,     4,     4,     2,     3,     2,     4,     3,
       6,     8,     9,     7,    10,     6,     6,     8,     6,     2,
       1,     2,     2,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,   120,     0,
       0,     0,     0,     0,    74,    14,     0,     2,     0,    71,
      72,   121,   122,     0,     0,    74,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      68,    65,    64,    67,     0,     0,     0,     0,    69,    73,
      63,     0,    62,    73,    73,     0,     0,     0,    26,     0,
       0,     0,     1,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,   107,   119,     0,     0,   109,   101,   100,     0,
       0,     0,     0,     0,     0,    59,     0,     0,    61,    60,
       0,    12,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     0,    18,    19,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,   123,     3,    27,     0,     0,    75,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    15,
      99,    23,     0,     0,   106,     0,   108,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    19,    84,     0,
      95,     0,    98,    40,    41,    42,    43,    44,    46,    45,
      50,    49,    48,    47,    52,    51,    54,    53,    57,    56,
      55,    58,   104,   102,   103,    21,     0,     0,    79,     0,
       0,     0,     0,    22,    78,     0,     0,     0,     0,     0,
       0,     0,    85,    96,    13,    16,    17,    20,     0,     0,
      80,    81,   124,   125,     0,     0,   110,     6,     0,     0,
     115,   116,     0,     0,     0,     0,     9,   118,    82,    83,
       0,     0,     0,   113,     5,     0,     0,     0,     0,     7,
      10,   111,     0,     0,     0,   117,     0,     8,     0,   112,
       0,     0,     4,   114,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,   247,   248,   231,   255,   256,   110,    21,
     121,   150,    90,    41,    67,    22,   111,    58,    35,    59,
      26,   219,   220,    60,   122,    61,    62,    68,    28,    29,
      30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
static const yytype_int16 yypact[] =
{
     343,    44,   -69,    12,   -19,    14,    23,    31,    18,    51,
     727,    26,    26,   105,   107,  -175,   343,   667,  -175,   170,
      85,    20,    97,    50,    98,    63,    87,  -175,   138,  -175,
    -175,  -175,  -175,   727,   148,  -175,   142,   144,   145,  -175,
      26,    -8,   727,   186,   727,   727,   -15,   727,   727,  -175,
    -175,  -175,  -175,  -175,   727,   637,    59,    16,    50,  -175,
    -175,   727,  -175,   155,   156,   161,   175,   297,  -175,   302,
     178,   450,  -175,  -175,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,    26,   154,   699,   727,
    -175,   157,  -175,  -175,   469,   158,  -175,  -175,  -175,   163,
     727,   189,   488,   171,   566,  -175,   727,   151,  -175,  -175,
      30,   806,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,   -71,  -175,   727,  -175,    10,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   165,   824,   166,   167,    -6,
       3,  -175,  -175,  -175,   179,   190,  -175,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,    63,
    -175,  -175,    53,   431,  -175,    18,  -175,   727,    32,  -175,
      18,   727,   192,    46,   191,   151,    49,  -175,  -175,   727,
    -175,   151,  -175,   824,   661,   195,   508,   838,   398,   398,
     247,   247,   247,   247,   315,   315,    94,    94,   252,   252,
     252,  -175,  -175,  -175,  -175,  -175,    88,   108,  -175,    18,
      18,   208,   209,  -175,  -175,    -5,   146,   187,   188,   585,
     -13,   197,  -175,  -175,   806,  -175,  -175,  -175,   727,   727,
    -175,  -175,  -175,  -175,    18,   200,  -175,  -175,    17,    26,
    -175,  -175,   206,   201,   233,     6,  -175,  -175,   806,   806,
     210,   727,    18,  -175,  -175,   211,   217,   727,    15,  -175,
    -175,  -175,   604,   221,    18,  -175,   623,  -175,    18,  -175,
     222,   343,  -175,  -175,   251
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,    -2,    65,  -175,  -175,    60,  -174,   458,  -175,
     212,  -175,  -175,   204,    35,     5,    56,     0,     1,     2,
     317,  -175,  -175,  -175,   130,   -48,  -175,     4,  -175,  -175,
    -175
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      23,    24,    25,    23,    27,    25,    43,   123,    34,   190,
      33,    23,    23,    63,    64,   191,    23,    24,    25,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   244,   245,
      23,   100,    25,   217,   253,    99,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    39,   187,
     262,   245,   106,   253,    37,   107,    57,    23,    24,    25,
      13,   153,   253,    71,   215,    45,    15,   254,   101,    46,
      16,   270,    47,    48,   269,   246,    23,    39,   169,    94,
      15,    17,   192,   277,   270,    16,   189,    38,   102,   145,
     104,   105,    40,   108,   109,    17,    86,   263,   188,    16,
      42,    71,   141,   142,   143,   144,   189,   146,   189,    49,
      50,    51,    52,    15,   232,   108,    53,    31,   233,    88,
      44,    89,   189,   223,    32,   191,    54,   187,    55,   189,
      56,   124,   -73,   236,   -73,   173,   238,   239,   218,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   237,    65,
      72,   184,    66,   225,   101,    73,   227,    92,   228,   146,
      87,    91,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   240,   241,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    93,   249,
     185,    95,    96,   226,    97,    98,   103,   229,   147,   148,
     149,   151,   260,   155,   170,   234,   177,   174,   176,    23,
     181,    25,     1,   179,   265,   212,   213,   214,   189,   221,
     273,   137,   138,   139,   140,   141,   142,   143,   144,   230,
     222,   107,   280,   144,   242,   243,   282,   250,   251,   261,
     267,    23,    24,    25,    23,    24,    25,   257,   153,   266,
     253,   274,     2,     3,   258,   259,     4,     5,     1,     6,
     271,     7,     8,     9,    10,    11,    12,   275,   -11,    13,
      14,   279,   283,   264,   268,    15,   284,   272,    45,   186,
      36,   235,    46,   276,     0,    47,    48,     0,    16,   -11,
      17,   139,   140,   141,   142,   143,   144,     0,     2,     3,
       0,    18,     4,     5,     1,     6,     0,     7,     8,     9,
      10,    11,    12,   216,     0,    13,    14,     0,     0,     0,
       0,    15,    49,    50,    51,    52,    15,   154,     0,    53,
       0,     0,     0,     0,    16,   152,    17,     0,     0,    54,
       0,    55,     0,    56,     2,     3,     0,    18,     4,     5,
       0,     6,     0,     7,     8,     9,    10,    11,    12,     0,
       0,    13,    14,     0,     0,     0,     0,    15,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      16,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,   224,   125,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     156,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,   172,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,   183,     0,     0,     0,   180,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   182,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,     0,     0,
      69,    48,     0,     0,     0,   252,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    45,   278,     0,     0,    46,     0,     0,
      69,    48,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    15,     0,   281,    53,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    54,    45,    55,     0,    56,    46,
       0,     0,    47,    48,     0,     0,    70,    49,    50,    51,
      52,    15,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    54,     0,    55,    46,    56,     0,
      47,    48,     0,     0,     0,     0,    70,     0,     0,    49,
      50,    51,    52,    15,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,    55,   171,
      56,     0,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    15,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,    55,     0,    56,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-175)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     3,     0,     3,     8,    55,     3,    80,
      79,    11,    12,    11,    12,    86,    16,    16,    16,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    43,    44,
      40,    49,    40,    40,    57,    40,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    64,   107,
      43,    44,    77,    57,    83,    80,    10,    67,    67,    67,
      58,    67,    57,    17,    80,    16,    64,    90,    86,    20,
      77,   255,    23,    24,    78,    90,    86,    64,    86,    33,
      64,    79,    82,    78,   268,    77,    86,    83,    42,    83,
      44,    45,    79,    47,    48,    79,    86,    90,    78,    77,
      79,    55,    18,    19,    20,    21,    86,    61,    86,    60,
      61,    62,    63,    64,    78,    69,    67,    83,    79,    79,
      79,    81,    86,    80,    90,    86,    77,   185,    79,    86,
      81,    82,    79,   191,    81,    89,    38,    39,   150,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    80,    64,
       0,    20,    65,   175,    86,    90,   178,    90,   180,   123,
      83,    83,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   219,   220,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    90,    83,
      79,    83,    90,   177,    90,    90,    50,   181,    83,    83,
      79,    66,   244,    65,    90,   189,    83,    90,    90,   249,
      79,   249,     1,    64,   249,    90,    90,    90,    86,    80,
     262,    14,    15,    16,    17,    18,    19,    20,    21,    77,
      80,    80,   274,    21,    66,    66,   278,    90,    90,    79,
      79,   281,   281,   281,   284,   284,   284,    90,   284,    83,
      57,    80,    41,    42,   238,   239,    45,    46,     1,    48,
      90,    50,    51,    52,    53,    54,    55,    90,    57,    58,
      59,    90,    90,   248,   254,    64,   281,   261,    16,   107,
       3,   191,    20,   267,    -1,    23,    24,    -1,    77,    78,
      79,    16,    17,    18,    19,    20,    21,    -1,    41,    42,
      -1,    90,    45,    46,     1,    48,    -1,    50,    51,    52,
      53,    54,    55,   149,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    77,    78,    79,    -1,    -1,    77,
      -1,    79,    -1,    81,    41,    42,    -1,    90,    45,    46,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    82,    56,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      80,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    80,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    80,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    16,    80,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    80,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    16,    79,    -1,    81,    20,
      -1,    -1,    23,    24,    -1,    -1,    89,    60,    61,    62,
      63,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    77,    -1,    79,    20,    81,    -1,
      23,    24,    -1,    -1,    -1,    -1,    89,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    41,    42,    45,    46,    48,    50,    51,    52,
      53,    54,    55,    58,    59,    64,    77,    79,    90,    92,
      93,   100,   106,   108,   109,   110,   111,   118,   119,   120,
     121,    83,    90,    79,   106,   109,   111,    83,    83,    64,
      79,   104,    79,    93,    79,    16,    20,    23,    24,    60,
      61,    62,    63,    67,    77,    79,    81,   107,   108,   110,
     114,   116,   117,   110,   110,    64,    65,   105,   118,    23,
      89,   107,     0,    90,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    86,    83,    79,    81,
     103,    83,    90,    90,   107,    83,    90,    90,    90,   106,
      49,    86,   107,    50,   107,   107,    77,    80,   107,   107,
      99,   107,    68,    69,    70,    71,    72,    73,    74,    75,
      76,   101,   115,   116,    82,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    83,   107,    83,    83,    79,
     102,    66,    78,   118,    65,    65,    80,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   110,
      90,    80,    99,   107,    90,    80,    90,    83,    99,    64,
      80,    79,    80,    99,    20,    79,   101,   116,    78,    86,
      80,    86,    82,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,    90,    90,    90,    80,   104,    40,    93,   112,
     113,    80,    80,    80,    82,    93,   107,    93,    93,   107,
      77,    96,    78,    79,   107,   115,   116,    80,    38,    39,
      93,    93,    66,    66,    43,    44,    90,    94,    95,    83,
      90,    90,    80,    57,    90,    97,    98,    90,   107,   107,
      93,    79,    43,    90,    94,   106,    83,    79,    97,    78,
      98,    90,   107,    93,    80,    90,   107,    78,    80,    90,
      93,    80,    93,    90,   105
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
#if IWETDEBUG

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
#else /* !IWETDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !IWETDEBUG */


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
#line 84 "iparser.y"
    { *root = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); YYACCEPT; }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 88 "iparser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 92 "iparser.y"
    {(yyval.k) = make_node(P_OP_ELIFBLK, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 96 "iparser.y"
    {(yyval.k) = make_node(P_OP_ELIFLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 98 "iparser.y"
    {(yyval.k) = make_node(P_OP_ELIFBLK, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 102 "iparser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 1, (yyvsp[(2) - (3)].k));}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 104 "iparser.y"
    {(yyval.k) = make_node(P_OP_SWBLOCK, NULL, 1, (yyvsp[(3) - (4)].k));}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 108 "iparser.y"
    {(yyval.k) = make_node(P_OP_CASESTMT, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 110 "iparser.y"
    {(yyval.k) = make_node(P_OP_CASELST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 114 "iparser.y"
    {(yyval.k) = make_node(P_OP_CASESTMT, NULL, 2, (yyvsp[(3) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 118 "iparser.y"
    {(yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 120 "iparser.y"
    {(yyval.k) = make_node(P_OP_EXPLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 124 "iparser.y"
    {(yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 126 "iparser.y"
    {(yyval.k) = make_node(P_OP_VARLST, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 136 "iparser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 138 "iparser.y"
    { (yyval.k) = make_node(P_OP_PARLST, NULL, 0); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 142 "iparser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 144 "iparser.y"
    { (yyval.k) = make_node(P_OP_ARGLST, NULL, 0); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 148 "iparser.y"
    { printf("debug: %s\n", 
							(char *)((struct value*)(yyvsp[(1) - (1)].v))->c);(yyval.k) = 
								make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 152 "iparser.y"
    { (yyval.k) = make_node(P_OP_IDLST, NULL, 2, 
							(yyvsp[(1) - (3)].k), make_node(ID, (yyvsp[(3) - (3)].v), 0)); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 157 "iparser.y"
    { (yyval.k) = make_node(P_OP_STMT, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 159 "iparser.y"
    {(yyval.k) = make_node(P_OP_STMTLST, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k));}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 163 "iparser.y"
    { (yyval.k) = make_node(P_OP_ASSOP, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 165 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASPLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 167 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASMINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 169 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASMUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 171 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASDIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 173 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASMOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 175 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASPOW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 177 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASBINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 179 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASBINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 181 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASBINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 183 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASRIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 185 "iparser.y"
    {(yyval.k) = make_node(P_OP_ASLEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 190 "iparser.y"
    { (yyval.k) = make_node(P_OP_OR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 192 "iparser.y"
    { (yyval.k) = make_node(P_OP_AND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 194 "iparser.y"
    { (yyval.k) = make_node(P_OP_BINOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 196 "iparser.y"
    { (yyval.k) = make_node(P_OP_BINXOR, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 198 "iparser.y"
    { (yyval.k) = make_node(P_OP_BINAND, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 200 "iparser.y"
    { (yyval.k) = make_node(P_OP_EQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 202 "iparser.y"
    { (yyval.k) = make_node(P_OP_NOTEQUAL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k)); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 204 "iparser.y"
    { (yyval.k) = make_node(P_OP_GREATERTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 206 "iparser.y"
    { (yyval.k) = make_node(P_OP_LESSTHAN, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 208 "iparser.y"
    { (yyval.k) = make_node(P_OP_GREATER, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 210 "iparser.y"
    { (yyval.k) = make_node(P_OP_LESS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 212 "iparser.y"
    { (yyval.k) = make_node(P_OP_LEFTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 214 "iparser.y"
    { (yyval.k) = make_node(P_OP_RIGHTSHIFT, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 216 "iparser.y"
    { (yyval.k) = make_node(P_OP_PLUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 218 "iparser.y"
    { (yyval.k) = make_node(P_OP_MINUS, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 220 "iparser.y"
    { (yyval.k) = make_node(P_OP_MUL, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 222 "iparser.y"
    { (yyval.k) = make_node(P_OP_DIV, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 224 "iparser.y"
    { (yyval.k) = make_node(P_OP_MOD, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 226 "iparser.y"
    { (yyval.k) = make_node(P_OP_POW, NULL, 2, (yyvsp[(1) - (3)].k), (yyvsp[(3) - (3)].k));}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 228 "iparser.y"
    { (yyval.k) = make_node(P_OP_UMINUS, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 230 "iparser.y"
    { (yyval.k) = make_node(P_OP_COMPL, NULL, 1, (yyvsp[(2) - (2)].k));}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 232 "iparser.y"
    { (yyval.k) = make_node(P_OP_NOT, NULL,1,  (yyvsp[(2) - (2)].k));}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 234 "iparser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 236 "iparser.y"
    { (yyval.k) = make_node(P_OP_STRDEF, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 238 "iparser.y"
    { (yyval.k) = make_node(NUMBER, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 240 "iparser.y"
    { (yyval.k) = make_node(STRING, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 242 "iparser.y"
    { (yyval.k) = make_node(TRUE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 244 "iparser.y"
    { (yyval.k) = make_node(INT, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 246 "iparser.y"
    { (yyval.k) = make_node(FALSE, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 248 "iparser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 1, (yyvsp[(1) - (1)].k)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 253 "iparser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 255 "iparser.y"
    { (yyval.k) = make_node(P_OP_FCRC, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 257 "iparser.y"
    { (yyval.k) = make_node(P_OP_VAREXP, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 259 "iparser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (1)].k));}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 261 "iparser.y"
    { (yyval.k) = make_node(P_OP_EXP, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 265 "iparser.y"
    { (yyval.k) = make_node(P_OP_EVEXP, NULL, 2, (yyvsp[(1) - (2)].k), (yyvsp[(2) - (2)].k)); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 269 "iparser.y"
    { (yyval.k) = make_node(ID, (yyvsp[(1) - (1)].v), 0); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 271 "iparser.y"
    { (yyval.k) = make_node(P_OP_SEL, NULL, 2, (yyvsp[(1) - (4)].k), (yyvsp[(3) - (4)].k));}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 275 "iparser.y"
    {(yyval.k) = make_node(P_OP_PARLST, NULL, 2, (yyvsp[(3) - (4)].k), (yyvsp[(4) - (4)].k));}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 277 "iparser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 279 "iparser.y"
    {(yyval.k) = make_node(P_OP_PARLSTHK, NULL, 3, (yyvsp[(3) - (5)].k), (yyvsp[(4) - (5)].k), (yyvsp[(5) - (5)].k));}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 283 "iparser.y"
    { (yyval.k) = make_node(P_OP_HKDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 287 "iparser.y"
    { (yyval.k) = make_node(P_OP_HSDEF, NULL, 1, (yyvsp[(3) - (3)].k)); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 291 "iparser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 293 "iparser.y"
    { (yyval.k) = make_node(0, NULL, 0); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 297 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFICHAR, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 299 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFISHORT, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 301 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFIINT, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 303 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFILONG, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 305 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFILONGLONG, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 307 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFIDOUBLE, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 309 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFIFLOAT, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 311 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFILONGDOUBLE, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 313 "iparser.y"
    { (yyval.k) = make_node(P_OP_FFIVOIDPTR, (yyvsp[(1) - (1)].v), 0);}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 317 "iparser.y"
    { (yyval.k) = (yyvsp[(2) - (3)].k); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 319 "iparser.y"
    { (yyval.k) = (yyvsp[(3) - (4)].k); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 323 "iparser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 0); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 325 "iparser.y"
    { (yyval.k) = make_node(P_OP_LSTCONST, NULL, 1, (yyvsp[(2) - (3)].k)); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 329 "iparser.y"
    { (yyval.k) = make_node(P_OP_ASSIGN, NULL, 1, (yyvsp[(1) - (3)].k)); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 331 "iparser.y"
    { (yyval.k) = make_node(P_OP_BREAK, NULL, 0); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 333 "iparser.y"
    { (yyval.k) = make_node(P_OP_CONTINUE, NULL, 0); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 335 "iparser.y"
    { (yyval.k) = make_node(P_OP_INC, NULL, 1, (yyvsp[(2) - (4)].k)); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 337 "iparser.y"
    { (yyval.k) = make_node(P_OP_DEC, NULL, 1, (yyvsp[(2) - (4)].k)); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 339 "iparser.y"
    { (yyval.k) = make_node(P_OP_PRINT, NULL, 1, (yyvsp[(2) - (4)].k)); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 341 "iparser.y"
    { (yyval.k) = make_node(P_OP_BLOCK, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 343 "iparser.y"
    { (yyval.k) = make_node(P_OP_CALL, NULL, 1, (yyvsp[(1) - (3)].k)); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 345 "iparser.y"
    { (yyval.k) = make_node(P_OP_FDEF, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 347 "iparser.y"
    { }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 349 "iparser.y"
    { }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 351 "iparser.y"
    { (yyval.k) = make_node(P_OP_IF, NULL, 2, (yyvsp[(3) - (6)].k), (yyvsp[(5) - (6)].k)); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 353 "iparser.y"
    { (yyval.k) = make_node(P_OP_ELSE, NULL, 3, (yyvsp[(3) - (8)].k), (yyvsp[(5) - (8)].k), (yyvsp[(7) - (8)].k)); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 355 "iparser.y"
    { (yyval.k) = make_node(P_OP_ELIF, NULL, 4, (yyvsp[(3) - (9)].k),(yyvsp[(5) - (9)].k),(yyvsp[(6) - (9)].k),(yyvsp[(8) - (9)].k)); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 357 "iparser.y"
    { (yyval.k) = make_node(P_OP_ELIF, NULL, 3, (yyvsp[(3) - (7)].k),(yyvsp[(5) - (7)].k),(yyvsp[(6) - (7)].k)); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 360 "iparser.y"
    { (yyval.k) = make_node(P_OP_FOR, NULL, 4, (yyvsp[(3) - (10)].k), (yyvsp[(5) - (10)].k), (yyvsp[(7) - (10)].k), (yyvsp[(9) - (10)].k)); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 362 "iparser.y"
    { (yyval.k) = make_node(P_OP_FORIN, NULL, 3, (yyvsp[(2) - (6)].k), (yyvsp[(4) - (6)].k), (yyvsp[(5) - (6)].k));}
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 364 "iparser.y"
    { (yyval.k) = make_node(P_OP_WHILE, NULL, 2, (yyvsp[(3) - (6)].k), (yyvsp[(5) - (6)].k)); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 366 "iparser.y"
    { (yyval.k) = make_node(P_OP_DOWH, NULL, 2, (yyvsp[(2) - (8)].k), (yyvsp[(5) - (8)].k));}
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 368 "iparser.y"
    { (yyval.k) = make_node(P_OP_SWITCH, NULL, 2, (yyvsp[(3) - (6)].k), (yyvsp[(5) - (6)].k)); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 370 "iparser.y"
    { (yyval.k) = make_node(P_OP_FCEB, NULL, 1, (yyvsp[(1) - (2)].k)); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 372 "iparser.y"
    { (yyval.k) = make_node(P_OP_NOOP, NULL, 0); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 374 "iparser.y"
    { printf("Invalid Statement. Skipping until semicolon\n"); 
							yyerrok; }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 377 "iparser.y"
    { printf("Invalid Statement. Skipping until newline\n");
							yyerrok; }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 382 "iparser.y"
    { (yyval.k) = make_node(P_OP_FCEB, (yyvsp[(2) - (3)].v), 0); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 386 "iparser.y"
    { (yyval.k) = make_node(P_OP_FCEXP, (yyvsp[(5) - (5)].v), 0); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 390 "iparser.y"
    { (yyval.k) = make_node(P_OP_FCRC, (yyvsp[(5) - (5)].v), 0); }
    break;


/* Line 1787 of yacc.c  */
#line 2581 "iwetparse.c"
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
#line 393 "iparser.y"


