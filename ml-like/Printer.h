#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.h"

/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

/* The following are simple heuristics for rendering terminals */
/* You may wish to change them */
void renderCC(Char c);
void renderCS(String s);
void indent(void);
void backup(void);


char *printProgram(Program p);
char *printDef(Def p);
char *printListDef(ListDef p);
char *printConst(Const p);
char *printExp(Exp p);
char *printSimplePat(SimplePat p);
char *printPatMatch(PatMatch p);
char *printListSimplePat(ListSimplePat p);
char *printListPatMatch(ListPatMatch p);
char *printType(Type p);
char *printListIdent(ListIdent p);
char *printListType(ListType p);
char *printDataCon(DataCon p);
char *printListDataCon(ListDataCon p);

void ppProgram(Program p, int i);
void ppDef(Def p, int i);
void ppListDef(ListDef p, int i);
void ppConst(Const p, int i);
void ppExp(Exp p, int i);
void ppSimplePat(SimplePat p, int i);
void ppPatMatch(PatMatch p, int i);
void ppListSimplePat(ListSimplePat p, int i);
void ppListPatMatch(ListPatMatch p, int i);
void ppType(Type p, int i);
void ppListIdent(ListIdent p, int i);
void ppListType(ListType p, int i);
void ppDataCon(DataCon p, int i);
void ppListDataCon(ListDataCon p, int i);

char *showProgram(Program p);
char *showDef(Def p);
char *showListDef(ListDef p);
char *showConst(Const p);
char *showExp(Exp p);
char *showSimplePat(SimplePat p);
char *showPatMatch(PatMatch p);
char *showListSimplePat(ListSimplePat p);
char *showListPatMatch(ListPatMatch p);
char *showType(Type p);
char *showListIdent(ListIdent p);
char *showListType(ListType p);
char *showDataCon(DataCon p);
char *showListDataCon(ListDataCon p);

void shProgram(Program p);
void shDef(Def p);
void shListDef(ListDef p);
void shConst(Const p);
void shExp(Exp p);
void shSimplePat(SimplePat p);
void shPatMatch(PatMatch p);
void shListSimplePat(ListSimplePat p);
void shListPatMatch(ListPatMatch p);
void shType(Type p);
void shListIdent(ListIdent p);
void shListType(ListType p);
void shDataCon(DataCon p);
void shListDataCon(ListDataCon p);

void ppBoolean(String s, int i);
void ppUIdent(String s, int i);
void shBoolean(String s);
void shUIdent(String s);
void ppInteger(Integer n, int i);
void ppDouble(Double d, int i);
void ppChar(Char c, int i);
void ppString(String s, int i);
void ppIdent(String s, int i);
void shInteger(Integer n);
void shDouble(Double d);
void shChar(Char c);
void shString(String s);
void shIdent(String s);
void bufAppendS(const char *s);
void bufAppendC(const char c);
void bufReset(void);
void resizeBuffer(void);

#endif

