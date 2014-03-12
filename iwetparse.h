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


#if ! defined IWETSTYPE && ! defined IWETSTYPE_IS_DECLARED
typedef union IWETSTYPE
{
/* Line 2053 of yacc.c  */
#line 9 "iparser.y"

	struct value *v;
	struct nary_node *k;


/* Line 2053 of yacc.c  */
#line 160 "iwetparse.h"
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
int iwetparse (void *scan);
#else
int iwetparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_IWET_IWETPARSE_H_INCLUDED  */
