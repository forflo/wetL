%{
/* 
Parser for WETL
Author: Florian MAyer
Date: 28.Dez.2013
Summary: This file has been generated. Do not edit!
Edit the file "parser.y" instead
*/

#include <tree.h>
%}

%union {
	char *fcecode;
	long nat_num;
	double fl_num;
}

/* Operators, their precedence and associativity */
%left OR
%left AND
%left BINOR
%left BINXOR
%left BINAND
%left EQUAL NOTEQUAL
%left GREATERTHAN LESSTHAN GREATER LESS
%left LEFTSHIFT RIGHTSHIFT
%left PLUS MINUS
%left MUL DIV MOD
%left POW
%left COMPL NOT

/* Assignment operators */
%token ASSOP ASPLUS ASMINUS ASMUL ASDIV ASMOD ASPOW ASBINOR ASBINAND ASBINXOR ASRIGHTSHIFT ASLEFTSHIFT
/* Hot things */
%token KEYSTROKE HOTSTRING ON
/* Statements*/
%token IF GLOBAL ELSE ELIF CONTINUE BREAK UTIL FOR IN WHILE DO SWITCH RET CASE FUNCTION EXTERNAL TRUE FALSE
/* Literals */
%token STRING NUMBER ID FCELANG FCEB_CODE
/* Token for FFI */
%token FFI_CHAR FFI_SHORT FFI_INT FFI_LONG FFI_LONG_LONG FFI_DOUBLE FFI_FLOAT FFI_LONG_DOUBLE FFI_VOIDPTR
/* Symbols*/
%token CURLOPEN CURLCLOSE PAROPEN PARCLOSE BOXOPEN BOXCLOSE SEMI DP POINT COMMA SHARP DOLLAR QMARK

%type <t> functioncall expression evalexpression fceexp fceexp_rc listconstructor ffi_struct_def end_exp 

%%

program 				: stmtlist 
						;

block 					: CURLOPEN stmtlist CURLCLOSE
						;

switchblock				: CURLOPEN labeled_stmtlist CURLCLOSE
						;

labeled_stmtlist		: labeled_statement
						| labeled_stmtlist labeled_statement
						;

labeled_statement		: CASE PAROPEN expression PARCLOSE stmtlist
						;

explist					: expression 
						| explist COMMA expression
						;

exp_cast_list			: 
						| ffi_cast expression COMMA exp_cast_list /* right associative */
						;

parlist 				: PAROPEN idlist PARCLOSE
						| PAROPEN PARCLOSE
						;

arglist					: PAROPEN explist PARCLOSE
						| PAROPEN PARCLOSE
						;

idlist					: ID
						| idlist ID
						;

stmtlist 				: statement
						| stmtlist statement
						;

assignment 				: idlist ASSOP explist
						| idlist ASPLUS explist
						| idlist ASMINUS explist
						| idlist ASMUL explist
						| idlist ASDIV explist
						| idlist ASMOD explist
						| idlist ASPOW explist
						| idlist ASBINOR explist
						| idlist ASBINAND explist
						| idlist ASBINXOR explist
						| idlist ASRIGHTSHIFT explist
						| idlist ASLEFTSHIFT explist
						;


expression				: expression OR expression 	{ 
}
						| expression AND expression {
}
						| expression BINOR expression	{
}
						| expression BINXOR expression	{
}
						| expression BINAND expression	{
}
						| expression EQUAL expression 	{
}
						| expression NOTEQUAL expression	{
}
						| expression GREATERTHAN expression 	{
}
						| expression LESSTHAN expression 	{
}
						| expression GREATER expression 	{
}
						| expression LESS expression	{
}
						| expression LEFTSHIFT expression 	{
}
						| expression RIGHTSHIFT expression	{
}
						| expression PLUS expression 	{
}
						| expression MINUS expression	{
}
						| expression MUL expression 	{
}
						| expression DIV expression 	{
}
						| expression MOD expression	{
}
						| expression POW expression	{
}
						| COMPL expression	{
}
						| NOT expression	{
}
						| evalexpression	{
}
						;

evalexpression			: fceexp {
}	
						| fceexp_rc {
}
						| listconstructor {
}
						| ffi_struct_def {
}
						| end_exp {
}
						| evalexpression BOXOPEN expression BOXCLOSE {
}
						;

functioncall			: evalexpression arglist {
}
						;

end_exp					: ID
						| TRUE
						| FALSE
						| NUMBER 
						| STRING
						| PAROPEN expression PARCLOSE
						;

functiondef				: FUNCTION ID parlist block
						| FUNCTION ID parlist hotkeydef block
						| FUNCTION ID parlist hotstringdef block
						;

hotkeydef				: ON KEYSTROKE expression
						;

hotstringdef			: ON HOTSTRING expression
						;

ffi_struct_def			: CURLOPEN exp_cast_list CURLCLOSE
						| MUL CURLOPEN exp_cast_list CURLCLOSE
						;

ffi_cast 				: FFI_CHAR
						| FFI_SHORT
						| FFI_INT
						| FFI_LONG
						| FFI_LONG_LONG
						| FFI_DOUBLE
						| FFI_FLOAT
						| FFI_LONG_DOUBLE
						| ffi_void_cast
						;
	
ffi_void_cast			: FFI_VOIDPTR
						;

listconstructor 		: BOXOPEN BOXCLOSE
						| BOXOPEN fieldlist BOXCLOSE
						;

fieldlist				: field 
						| fieldlist COMMA field
						;

field					: expression
						;

statement				: assignment SEMI 
						| BREAK SEMI
						| CONTINUE SEMI
						| block SEMI
						| functioncall SEMI
						| functiondef
						| GLOBAL assignment SEMI
						| GLOBAL functiondef
						| IF PAROPEN expression PARCLOSE block  
						| FOR PAROPEN assignment SEMI expression SEMI explist PARCLOSE block
						| FOR idlist IN explist block
						| WHILE PAROPEN expression PARCLOSE block
						| DO block WHILE PAROPEN expression PARCLOSE SEMI
						| SWITCH PAROPEN expression PARCLOSE switchblock
						| fceblock
						;

fceblock 				: EXTERNAL FCELANG FCEB_CODE
						;

fceexp					: PAROPEN NOT FCELANG PARCLOSE FCEB_CODE
						;

fceexp_rc				: PAROPEN QMARK FCELANG PARCLOSE FCEB_CODE 
						;

%%
