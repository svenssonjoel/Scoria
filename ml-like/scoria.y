/* This Bison file was machine-generated by BNFC */
%locations
%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Absyn.h"
typedef struct scoria_buffer_state *YY_BUFFER_STATE;
YY_BUFFER_STATE scoria_scan_string(const char *str);
void scoria_delete_buffer(YY_BUFFER_STATE buf);
extern int yyparse(void);
extern int yylex(void);
extern int scoria_init_lexer(FILE * inp);
extern void yyerror(const char *str);

Program YY_RESULT_Program_ = 0;
Def YY_RESULT_Def_ = 0;
ListDef YY_RESULT_ListDef_ = 0;
Const YY_RESULT_Const_ = 0;
Exp YY_RESULT_Exp_ = 0;
SimplePat YY_RESULT_SimplePat_ = 0;
PatMatch YY_RESULT_PatMatch_ = 0;
ListSimplePat YY_RESULT_ListSimplePat_ = 0;
ListPatMatch YY_RESULT_ListPatMatch_ = 0;
Type YY_RESULT_Type_ = 0;
ListIdent YY_RESULT_ListIdent_ = 0;
ListType YY_RESULT_ListType_ = 0;
DataCon YY_RESULT_DataCon_ = 0;
ListDataCon YY_RESULT_ListDataCon_ = 0;

Program pProgram(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}
Program psProgram(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

Def pDef(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Def_;
  }
}
Def psDef(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Def_;
  }
}

ListDef pListDef(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDef_;
  }
}
ListDef psListDef(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDef_;
  }
}

Const pConst(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Const_;
  }
}
Const psConst(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Const_;
  }
}

Exp pExp(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp1(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp1(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp2(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp2(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp3(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp3(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

SimplePat pSimplePat(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_SimplePat_;
  }
}
SimplePat psSimplePat(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_SimplePat_;
  }
}

PatMatch pPatMatch(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PatMatch_;
  }
}
PatMatch psPatMatch(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PatMatch_;
  }
}

ListSimplePat pListSimplePat(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListSimplePat_;
  }
}
ListSimplePat psListSimplePat(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListSimplePat_;
  }
}

ListPatMatch pListPatMatch(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPatMatch_;
  }
}
ListPatMatch psListPatMatch(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPatMatch_;
  }
}

Type pType(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type psType(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

Type pType1(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type psType1(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

ListIdent pListIdent(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListIdent_;
  }
}
ListIdent psListIdent(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListIdent_;
  }
}

ListType pListType(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}
ListType psListType(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}

DataCon pDataCon(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_DataCon_;
  }
}
DataCon psDataCon(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_DataCon_;
  }
}

ListDataCon pListDataCon(FILE *inp)
{
  scoria_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDataCon_;
  }
}
ListDataCon psListDataCon(const char *str)
{
  YY_BUFFER_STATE buf;
  scoria_init_lexer(0);
  buf = scoria_scan_string(str);
  int result = yyparse();
  scoria_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDataCon_;
  }
}


ListDef reverseListDef(ListDef l)
{
  ListDef prev = 0;
  ListDef tmp = 0;
  while (l)
  {
    tmp = l->listdef_;
    l->listdef_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListSimplePat reverseListSimplePat(ListSimplePat l)
{
  ListSimplePat prev = 0;
  ListSimplePat tmp = 0;
  while (l)
  {
    tmp = l->listsimplepat_;
    l->listsimplepat_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListPatMatch reverseListPatMatch(ListPatMatch l)
{
  ListPatMatch prev = 0;
  ListPatMatch tmp = 0;
  while (l)
  {
    tmp = l->listpatmatch_;
    l->listpatmatch_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListIdent reverseListIdent(ListIdent l)
{
  ListIdent prev = 0;
  ListIdent tmp = 0;
  while (l)
  {
    tmp = l->listident_;
    l->listident_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListType reverseListType(ListType l)
{
  ListType prev = 0;
  ListType tmp = 0;
  while (l)
  {
    tmp = l->listtype_;
    l->listtype_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListDataCon reverseListDataCon(ListDataCon l)
{
  ListDataCon prev = 0;
  ListDataCon tmp = 0;
  while (l)
  {
    tmp = l->listdatacon_;
    l->listdatacon_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}

%}

%union
{
  int int_;
  char char_;
  double double_;
  char* string_;
  Program program_;
  Def def_;
  ListDef listdef_;
  Const const_;
  Exp exp_;
  SimplePat simplepat_;
  PatMatch patmatch_;
  ListSimplePat listsimplepat_;
  ListPatMatch listpatmatch_;
  Type type_;
  ListIdent listident_;
  ListType listtype_;
  DataCon datacon_;
  ListDataCon listdatacon_;

}

%token _ERROR_
%token _SYMB_0    /*   =   */
%token _SYMB_1    /*   :   */
%token _SYMB_2    /*   +   */
%token _SYMB_3    /*   *   */
%token _SYMB_4    /*   ->   */
%token _SYMB_5    /*   (   */
%token _SYMB_6    /*   )   */
%token _SYMB_7    /*   |   */
%token _SYMB_8    /*   Bool   */
%token _SYMB_9    /*   Int   */
%token _SYMB_10    /*   data   */
%token _SYMB_11    /*   lambda   */
%token _SYMB_12    /*   match   */
%token<string_> _SYMB_13    /*   Boolean   */
%token<string_> _SYMB_14    /*   UIdent   */

%type <program_> Program
%type <def_> Def
%type <listdef_> ListDef
%type <const_> Const
%type <exp_> Exp
%type <exp_> Exp1
%type <exp_> Exp2
%type <exp_> Exp3
%type <simplepat_> SimplePat
%type <patmatch_> PatMatch
%type <listsimplepat_> ListSimplePat
%type <listpatmatch_> ListPatMatch
%type <type_> Type
%type <type_> Type1
%type <listident_> ListIdent
%type <listtype_> ListType
%type <datacon_> DataCon
%type <listdatacon_> ListDataCon

%token<int_> _INTEGER_
%token<double_> _DOUBLE_
%token<string_> _IDENT_

%start Program
%%
Program : ListDef { $$ = make_Prog(reverseListDef($1)); YY_RESULT_Program_= $$; }
;
Def : _IDENT_ _SYMB_0 Exp { $$ = make_Define($1, $3); YY_RESULT_Def_= $$; }
  | _IDENT_ _SYMB_1 Type { $$ = make_Deftype($1, $3); YY_RESULT_Def_= $$; }
  | _SYMB_10 _SYMB_14 _SYMB_0 ListDataCon { $$ = make_Data($2, $4); YY_RESULT_Def_= $$; }
  | Exp { $$ = make_DExp($1); YY_RESULT_Def_= $$; }
;
ListDef : /* empty */ { $$ = 0; YY_RESULT_ListDef_= $$; }
  | ListDef Def { $$ = make_ListDef($2, $1); YY_RESULT_ListDef_= $$; }
;
Const : _INTEGER_ { $$ = make_CInt($1); YY_RESULT_Const_= $$; }
  | _DOUBLE_ { $$ = make_CFloat($1); YY_RESULT_Const_= $$; }
  | _SYMB_13 { $$ = make_CBool($1); YY_RESULT_Const_= $$; }
;
Exp : Exp _SYMB_2 Exp1 { $$ = make_EAdd($1, $3); YY_RESULT_Exp_= $$; }
  | Exp1 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp1 : Exp1 _SYMB_3 Exp2 { $$ = make_EMul($1, $3); YY_RESULT_Exp_= $$; }
  | Exp2 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp2 : Const { $$ = make_EConst($1); YY_RESULT_Exp_= $$; }
  | _IDENT_ { $$ = make_EVar($1); YY_RESULT_Exp_= $$; }
  | _SYMB_11 ListIdent _SYMB_4 Exp { $$ = make_ELam($2, $4); YY_RESULT_Exp_= $$; }
  | _SYMB_12 ListPatMatch { $$ = make_EMatch($2); YY_RESULT_Exp_= $$; }
  | Exp3 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp3 : _SYMB_5 Exp _SYMB_6 { $$ = $2; YY_RESULT_Exp_= $$; }
  | _SYMB_5 Exp _SYMB_6 { $$ = $2; YY_RESULT_Exp_= $$; }
;
SimplePat : Const { $$ = make_SPConst($1); YY_RESULT_SimplePat_= $$; }
  | _IDENT_ { $$ = make_SPIdent($1); YY_RESULT_SimplePat_= $$; }
;
PatMatch : SimplePat _SYMB_4 Exp { $$ = make_PSimple($1, $3); YY_RESULT_PatMatch_= $$; }
  | _IDENT_ ListSimplePat _SYMB_4 Exp { $$ = make_PData($1, reverseListSimplePat($2), $4); YY_RESULT_PatMatch_= $$; }
;
ListSimplePat : /* empty */ { $$ = 0; YY_RESULT_ListSimplePat_= $$; }
  | ListSimplePat SimplePat { $$ = make_ListSimplePat($2, $1); YY_RESULT_ListSimplePat_= $$; }
;
ListPatMatch : /* empty */ { $$ = 0; YY_RESULT_ListPatMatch_= $$; }
  | PatMatch { $$ = make_ListPatMatch($1, 0); YY_RESULT_ListPatMatch_= $$; }
  | PatMatch _SYMB_7 ListPatMatch { $$ = make_ListPatMatch($1, $3); YY_RESULT_ListPatMatch_= $$; }
;
Type : Type1 _SYMB_4 Type { $$ = make_TLam($1, $3); YY_RESULT_Type_= $$; }
  | Type1 { $$ = $1; YY_RESULT_Type_= $$; }
;
Type1 : _SYMB_9 { $$ = make_TInt(); YY_RESULT_Type_= $$; }
  | _SYMB_8 { $$ = make_TBool(); YY_RESULT_Type_= $$; }
  | _IDENT_ { $$ = make_TVar($1); YY_RESULT_Type_= $$; }
  | _SYMB_5 Type _SYMB_6 { $$ = $2; YY_RESULT_Type_= $$; }
;
ListIdent : /* empty */ { $$ = 0; YY_RESULT_ListIdent_= $$; }
  | _IDENT_ ListIdent { $$ = make_ListIdent($1, $2); YY_RESULT_ListIdent_= $$; }
;
ListType : /* empty */ { $$ = 0; YY_RESULT_ListType_= $$; }
  | ListType Type { $$ = make_ListType($2, $1); YY_RESULT_ListType_= $$; }
;
DataCon : _SYMB_14 ListType { $$ = make_Cnstr($1, reverseListType($2)); YY_RESULT_DataCon_= $$; }
;
ListDataCon : /* empty */ { $$ = 0; YY_RESULT_ListDataCon_= $$; }
  | DataCon { $$ = make_ListDataCon($1, 0); YY_RESULT_ListDataCon_= $$; }
  | DataCon _SYMB_7 ListDataCon { $$ = make_ListDataCon($1, $3); YY_RESULT_ListDataCon_= $$; }
;

%%
void yyerror(const char *str)
{
  extern char *scoriatext;
  fprintf(stderr,"error: %d,%d: %s at %s\n",
  scorialloc.first_line, scorialloc.first_column, str, scoriatext);
}

