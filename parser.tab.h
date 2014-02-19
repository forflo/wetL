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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     NOT = 277,
     COMPL = 278,
     ASSOP = 279,
     ASPLUS = 280,
     ASMINUS = 281,
     ASMUL = 282,
     ASDIV = 283,
     ASMOD = 284,
     ASPOW = 285,
     ASBINOR = 286,
     ASBINAND = 287,
     ASBINXOR = 288,
     ASRIGHTSHIFT = 289,
     ASLEFTSHIFT = 290,
     KEYSTROKE = 291,
     HOTSTRING = 292,
     ON = 293,
     IF = 294,
     GLOBAL = 295,
     ELSE = 296,
     ELIF = 297,
     CONTINUE = 298,
     BREAK = 299,
     UTIL = 300,
     FOR = 301,
     IN = 302,
     WHILE = 303,
     DO = 304,
     SWITCH = 305,
     RET = 306,
     CASE = 307,
     FUNCTION = 308,
     EXTERNAL = 309,
     TRUE = 310,
     FALSE = 311,
     STRING = 312,
     NUMBER = 313,
     ID = 314,
     FCELANG = 315,
     FCEB_CODE = 316,
     FFI_CHAR = 317,
     FFI_SHORT = 318,
     FFI_INT = 319,
     FFI_LONG = 320,
     FFI_LONG_LONG = 321,
     FFI_DOUBLE = 322,
     FFI_FLOAT = 323,
     FFI_LONG_DOUBLE = 324,
     FFI_VOIDPTR = 325,
     CURLOPEN = 326,
     CURLCLOSE = 327,
     PAROPEN = 328,
     PARCLOSE = 329,
     BOXOPEN = 330,
     BOXCLOSE = 331,
     SEMI = 332,
     DP = 333,
     POINT = 334,
     COMMA = 335,
     SHARP = 336,
     DOLLAR = 337,
     QMARK = 338
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 13 "parser.y"

	char *fcecode;
	long nat_num;
	double fl_num;


/* Line 2053 of yacc.c  */
#line 147 "parser.tab.h"
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
