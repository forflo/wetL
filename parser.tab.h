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
/* Line 2053 of yacc.c  */
#line 9 "parser.y"

	struct value *v;
	struct nary_node *k;


/* Line 2053 of yacc.c  */
#line 149 "parser.tab.h"
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
