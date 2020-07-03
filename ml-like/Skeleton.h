#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.h"


void visitProgram(Program p);
void visitDef(Def p);
void visitListDef(ListDef p);
void visitConst(Const p);
void visitExp(Exp p);
void visitSimplePat(SimplePat p);
void visitPatMatch(PatMatch p);
void visitListSimplePat(ListSimplePat p);
void visitListPatMatch(ListPatMatch p);
void visitType(Type p);
void visitListIdent(ListIdent p);
void visitListType(ListType p);
void visitDataCon(DataCon p);
void visitListDataCon(ListDataCon p);

void visitBoolean(Boolean p);void visitUIdent(UIdent p);
void visitIdent(Ident i);
void visitInteger(Integer i);
void visitDouble(Double d);
void visitChar(Char c);
void visitString(String s);

#endif

