/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2053 of yacc.c  */
#line 30 "parser.y"

#define YYSTYPE WETSTYPE


/* Line 2053 of yacc.c  */
#line 59 "wetparse.h"

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
/* Line 2053 of yacc.c  */
#line 12 "parser.y"

	struct value *v;
	struct nary_node *k;


/* Line 2053 of yacc.c  */
#line 170 "wetparse.h"
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
