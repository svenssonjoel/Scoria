#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include "Absyn.h"

typedef union
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
} YYSTYPE;

typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
#define _ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _INTEGER_ 274
#define _DOUBLE_ 275
#define _IDENT_ 276

extern YYLTYPE yylloc;
extern YYSTYPE yylval;
Program  pProgram(FILE *inp);
Program psProgram(const char *str);
Def  pDef(FILE *inp);
Def psDef(const char *str);
ListDef  pListDef(FILE *inp);
ListDef psListDef(const char *str);
Const  pConst(FILE *inp);
Const psConst(const char *str);
Exp  pExp(FILE *inp);
Exp psExp(const char *str);
Exp  pExp1(FILE *inp);
Exp psExp1(const char *str);
Exp  pExp2(FILE *inp);
Exp psExp2(const char *str);
Exp  pExp3(FILE *inp);
Exp psExp3(const char *str);
SimplePat  pSimplePat(FILE *inp);
SimplePat psSimplePat(const char *str);
PatMatch  pPatMatch(FILE *inp);
PatMatch psPatMatch(const char *str);
ListSimplePat  pListSimplePat(FILE *inp);
ListSimplePat psListSimplePat(const char *str);
ListPatMatch  pListPatMatch(FILE *inp);
ListPatMatch psListPatMatch(const char *str);
Type  pType(FILE *inp);
Type psType(const char *str);
Type  pType1(FILE *inp);
Type psType1(const char *str);
ListIdent  pListIdent(FILE *inp);
ListIdent psListIdent(const char *str);
ListType  pListType(FILE *inp);
ListType psListType(const char *str);
DataCon  pDataCon(FILE *inp);
DataCon psDataCon(const char *str);
ListDataCon  pListDataCon(FILE *inp);
ListDataCon psListDataCon(const char *str);


#endif
