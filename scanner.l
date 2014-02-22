%top{

#include "parser.tab.h" 
#include <glib.h>
#include "util.h"
#include "parser.h"

}

/* [Operators] Arithmetic */

plus "+"
minus "-"
mul "*"
div "/"
mod "%"
pow "**"
compl "~"
binand "&"
binor "|"
binxor "^" 
leftshift "<<"
rightshift ">>"

/* [Operators] Assignment */

assop "="
inc "++"
dec "--"
asplus "+="
asminus "-="
asmul "*="
asdiv "/="
asmod "%="
aspow "**="
asbinor "|="
asbinand "&="
asbinxor "^="
asrightshift ">>="
asleftshift "<<="

/* [Operators] Logical */

not  "!"
and "&&"
or "||"
equal "=="
notequal "!="
greaterthan ">="
lessthan "<="
greater ">"
less "<"

/* FFI Keywords */

char "(char)"
short "(short)"
int "(int)"
long "(long)"
longlong "(longlong)"
double "(double)"
float "(float)"
longdouble "(longdouble)"
voidptr "(void*)"

/* Keywords */

if "if"
else "else"
elif "elif"
continue "continue"
break "break"
true "true"
false "false"
for "for"
in "in"
do "do"
while "while"
switch "switch"
case "case"
at "at"
hotstring "hotstring"
keystroke "keystroke"
function "function"
util "utilize"
global "global"
external "external"
ret "return"

/* Symbols */

curlopen "{"
curlclose "}"
boxopen "["
boxclose "]"
paropen "("
parclose ")"
semi ";"
dp ":"
comma ","
point "."
sharp "#"
excl "!"
dollar "$"
qmark "?"

/* literals */

digit [0-9]
digit_not_null  [1-9]
number  {digit}+|{digit}+"."{digit}+

/* these are currently unused */
hexdigit  {digit}|[A-Fa-f]
hexcode  \\0[xX]{hexdigit}+
/* ------------------------*/

letter  [A-Za-z]
allowed_symbols   "!"|"#"|"$"|"%"|"&"|"'"|"("|")"|"*"|"+"|"`"|"´"|"-"|"."|"/"|":"|";"|"<"|">"|"="|"?"|"@"|"["|"]"|"^"|"_"|"{"|"}"|"~"|"|"|" "
/* let's hope this lines up ....*/
escapes  \\n|\\t|\\a|\\b|\\r|\\v|\\\\|\\\"|\\\'|\\f|\\0 
dquote  \"
squote  \'

delim \n\t\v\b" "

/* String is either quoted with single or double quotes */
string  ({dquote}({letter}|{escapes}|{allowed_symbols}|{digit})+{dquote})|({squote}({letter}|{escapes}|{allowed_symbols}|{digit})+{squote})

id ({letter}|\-|\_)+
fcelanguage (bash|sh|python|perl)

/* Exclusive start conditions */
%x blockcomment linecomment

%%

"[[[" { 
	/** 
	 * Token: FCECODE
	 * This Token is identified by the unique string "[[[" in the Code.
	 * This Code will move the foreign code into an dynamically 
	 * growing string structure.
	 */
	int next;
	int index = 0, c = 0;

	dyn_string_t *buffer = ds_get_string("");

	do {
		next = input();
		if(next == ']') 
			c++;
		else 
			c=0;
		/* Error handling */
		if(-1 == ds_append_char(buffer, (char) next))
			con_log("Could not tokenize FCE-Code", "scanner", LOG_ERROR);
		
		if(c == 3) 
			break;
	} while(!feof(yyin));

	/* Passes the FCE-Code as value to the parser for further processing */
	yylval.v = (struct value *) malloc(sizeof(struct value));
	yylval.v->c = (void *) buffer->data;
	yylval.v->type = P_TYPE_STRING;

	free(buffer);
	return(FCEB_CODE);
}

 /* skip line comments */
"//" {BEGIN(linecomment);}
<linecomment>[^\n] 
<linecomment>\n {BEGIN(INITIAL);}

 /* skip block comments */
"/*" {BEGIN(blockcomment);}
<blockcomment>"*"+"/" {BEGIN(INITIAL); } 
<blockcomment>[^*] /* eat everything except * */
<blockcomment>"*"+[^*/] /* eat every * not followed by */

{plus} {return(PLUS);}
{minus} {return(MINUS);}
{mul} {return(MUL);}
{div} {return(DIV);}
{mod} {return(MOD);}
{pow} {return(POW);}
{compl} {return(COMPL);}
{binand} {return(BINAND);}
{binor} {return(BINOR);}
{binxor} {return(BINXOR);}
{leftshift} {return(LEFTSHIFT);}
{rightshift} {return(RIGHTSHIFT);}

{assop} {return(ASSOP);}
{asplus} {return(ASPLUS);}
{asminus} {return(ASMINUS);}
{asmul} {return(ASMUL);}
{asdiv} {return(ASDIV);}
{asmod} {return(ASMOD);}
{aspow} {return(ASPOW);}
{asbinor} {return(ASBINOR);}
{asbinand} {return(ASBINAND);}
{asbinxor} {return(ASBINXOR);}
{asrightshift} {return(ASRIGHTSHIFT);}
{asleftshift} {return(ASLEFTSHIFT);}

{not} {return(NOT);}
{and} {return(AND);}
{or} {return(OR);}
{equal} {return(EQUAL);}
{notequal} {return(NOTEQUAL);}
{greaterthan} {return(GREATERTHAN);}
{lessthan} {return(LESSTHAN);}
{greater} {return(GREATER);}
{less} {return(LESS);}

{if} {return(IF);}
{else} {return(ELSE);}
{elif} {return(ELIF);}
{continue} {return(CONTINUE);}
{break} {return(BREAK);}
{true} {return(TRUE);}
{false} {return(FALSE);}
{for} {return(FOR);}
{in} {return(IN);}
{do} {return(DO);}
{while} {return(WHILE);}
{function} {return(FUNCTION);}
{global} {return(GLOBAL);}
{switch} {return(SWITCH);}
{case} {return(CASE);}
{hotstring} {return(HOTSTRING);}
{keystroke} {return(KEYSTROKE);}
{external} {return(EXTERNAL);}
{util} {return(UTIL);}
{ret} {return(RET);}
{curlopen} {return(CURLOPEN);}
{curlclose} {return(CURLCLOSE);}
{paropen} {return(PAROPEN);}
{parclose} {return(PARCLOSE);}
{boxopen} {return(BOXOPEN);}
{boxclose} {return(BOXCLOSE);}
{semi} {return(SEMI);}
{dp} {return(DP);}
{comma} {return(COMMA);}
{point} {return(POINT);}
{sharp} {return(SHARP);}
{dollar} {return(DOLLAR);}
{qmark} {return(QMARK);}

{char} {return(FFI_CHAR);}
{short} {return(FFI_SHORT);}
{int} {return(FFI_INT);}
{long} {return(FFI_LONG);}
{longlong} {return(FFI_LONG_LONG);}
{double} {return(FFI_DOUBLE);}
{float} {return(FFI_FLOAT);}
{longdouble} {return(FFI_LONG_DOUBLE);}
{voidptr} {return(FFI_VOIDPTR);}

 /* has to be placed before id */
{fcelanguage} {return(FCELANG);} 

{string} {return(STRING);}
{number} {return(NUMBER);}
{id} {return(ID);}   

{delim} {}

%%
