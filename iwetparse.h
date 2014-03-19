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
#  define IWETDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined IWETDEBUG */
#if IWETDEBUG
extern int iwetdebug;
#endif
/* "%code requires" blocks.  */
/* Line 2053 of yacc.c  */
#line 30 "iparser.y"

#define YYSTYPE IWETSTYPE


/* Line 2053 of yacc.c  */
#line 59 "iwetparse.h"

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
/* Line 2053 of yacc.c  */
#line 12 "iparser.y"

	struct value *v;
	struct nary_node *k;


/* Line 2053 of yacc.c  */
#line 170 "iwetparse.h"
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
