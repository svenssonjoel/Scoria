/* -*- c -*- This FLex file was machine-generated by the BNF converter */
%option noyywrap noinput nounput
%{
#define yylval scorialval
#define yylloc scorialloc
#define YY_BUFFER_APPEND scoria_BUFFER_APPEND
#define YY_BUFFER_RESET scoria_BUFFER_RESET
#define init_lexer scoria_init_lexer
#include <string.h>
#include "Parser.h"
#define YY_BUFFER_LENGTH 4096
char YY_PARSED_STRING[YY_BUFFER_LENGTH];
void YY_BUFFER_APPEND(char *s)
{
  strcat(YY_PARSED_STRING, s); //Do something better here!
}
void YY_BUFFER_RESET(void)
{
  int x;
  for(x = 0; x < YY_BUFFER_LENGTH; x++)
    YY_PARSED_STRING[x] = 0;
}
static void update_loc(YYLTYPE* loc, char* text)
{
  loc->first_line = loc->last_line;
  loc->first_column = loc->last_column;
  for (int i = 0; text[i] != '\0'; ++i) {
      if (text[i] == '\n') {
          ++loc->last_line;
          loc->last_column = 0;
      } else {
          ++loc->last_column;
      }
  }
}
#define YY_USER_ACTION update_loc(&yylloc, yytext);

%}

LETTER [a-zA-Z]
CAPITAL [A-Z]
SMALL [a-z]
DIGIT [0-9]
IDENT [a-zA-Z0-9'_]
%START YYINITIAL COMMENT CHAR CHARESC CHAREND STRING ESCAPED
%%

<YYINITIAL>"="      	 return _SYMB_0;
<YYINITIAL>":"      	 return _SYMB_1;
<YYINITIAL>"+"      	 return _SYMB_2;
<YYINITIAL>"*"      	 return _SYMB_3;
<YYINITIAL>"->"      	 return _SYMB_4;
<YYINITIAL>"("      	 return _SYMB_5;
<YYINITIAL>")"      	 return _SYMB_6;
<YYINITIAL>"|"      	 return _SYMB_7;
<YYINITIAL>"Bool"      	 return _SYMB_8;
<YYINITIAL>"Int"      	 return _SYMB_9;
<YYINITIAL>"data"      	 return _SYMB_10;
<YYINITIAL>"lambda"      	 return _SYMB_11;
<YYINITIAL>"match"      	 return _SYMB_12;



<YYINITIAL>True|False     	 yylval.string_ = strdup(yytext); return _SYMB_13;
<YYINITIAL>{CAPITAL}({LETTER}|{DIGIT}|\_)*     	 yylval.string_ = strdup(yytext); return _SYMB_14;
<YYINITIAL>{DIGIT}+"."{DIGIT}+("e"(\-)?{DIGIT}+)?      	 yylval.double_ = atof(yytext); return _DOUBLE_;
<YYINITIAL>{DIGIT}+      	 yylval.int_ = atoi(yytext); return _INTEGER_;
<YYINITIAL>{LETTER}{IDENT}*      	 yylval.string_ = strdup(yytext); return _IDENT_;
<YYINITIAL>[ \t\r\n\f]      	 /* ignore white space. */;
<YYINITIAL>.      	 return _ERROR_;
%%
void init_lexer(FILE *inp)
{
  yyrestart(inp);
  yylloc.first_line = 1;
  yylloc.first_column = 1;
  yylloc.last_line = 1;
  yylloc.last_column = 1;
  BEGIN YYINITIAL;
}

