/*** BNFC-Generated Visitor Traversal Skeleton. ***/
/* This traverses the abstract syntax tree.
   To use, copy Skeleton.h and Skeleton.c to
   new files. */

#include <stdlib.h>
#include <stdio.h>

#include "Skeleton.h"

void visitProgram(Program p)
{
  switch(p->kind)
  {
  case is_Prog:
    /* Code for Prog Goes Here */
    visitListDef(p->u.prog_.listdef_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Program!\n");
    exit(1);
  }
}

void visitDef(Def p)
{
  switch(p->kind)
  {
  case is_Define:
    /* Code for Define Goes Here */
    visitIdent(p->u.define_.ident_);
    visitExp(p->u.define_.exp_);
    break;
  case is_Deftype:
    /* Code for Deftype Goes Here */
    visitIdent(p->u.deftype_.ident_);
    visitType(p->u.deftype_.type_);
    break;
  case is_Data:
    /* Code for Data Goes Here */
    visitUIdent(p->u.data_.uident_);
    visitListDataCon(p->u.data_.listdatacon_);
    break;
  case is_DExp:
    /* Code for DExp Goes Here */
    visitExp(p->u.dexp_.exp_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Def!\n");
    exit(1);
  }
}

void visitListDef(ListDef listdef)
{
  while(listdef  != 0)
  {
    /* Code For ListDef Goes Here */
    visitDef(listdef->def_);
    listdef = listdef->listdef_;
  }
}

void visitConst(Const p)
{
  switch(p->kind)
  {
  case is_CInt:
    /* Code for CInt Goes Here */
    visitInteger(p->u.cint_.integer_);
    break;
  case is_CFloat:
    /* Code for CFloat Goes Here */
    visitDouble(p->u.cfloat_.double_);
    break;
  case is_CBool:
    /* Code for CBool Goes Here */
    visitBoolean(p->u.cbool_.boolean_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Const!\n");
    exit(1);
  }
}

void visitExp(Exp p)
{
  switch(p->kind)
  {
  case is_EAdd:
    /* Code for EAdd Goes Here */
    visitExp(p->u.eadd_.exp_1);
    visitExp(p->u.eadd_.exp_2);
    break;
  case is_EMul:
    /* Code for EMul Goes Here */
    visitExp(p->u.emul_.exp_1);
    visitExp(p->u.emul_.exp_2);
    break;
  case is_EConst:
    /* Code for EConst Goes Here */
    visitConst(p->u.econst_.const_);
    break;
  case is_EVar:
    /* Code for EVar Goes Here */
    visitIdent(p->u.evar_.ident_);
    break;
  case is_ELam:
    /* Code for ELam Goes Here */
    visitListIdent(p->u.elam_.listident_);
    visitExp(p->u.elam_.exp_);
    break;
  case is_EMatch:
    /* Code for EMatch Goes Here */
    visitListPatMatch(p->u.ematch_.listpatmatch_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void visitSimplePat(SimplePat p)
{
  switch(p->kind)
  {
  case is_SPConst:
    /* Code for SPConst Goes Here */
    visitConst(p->u.spconst_.const_);
    break;
  case is_SPIdent:
    /* Code for SPIdent Goes Here */
    visitIdent(p->u.spident_.ident_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing SimplePat!\n");
    exit(1);
  }
}

void visitPatMatch(PatMatch p)
{
  switch(p->kind)
  {
  case is_PSimple:
    /* Code for PSimple Goes Here */
    visitSimplePat(p->u.psimple_.simplepat_);
    visitExp(p->u.psimple_.exp_);
    break;
  case is_PData:
    /* Code for PData Goes Here */
    visitIdent(p->u.pdata_.ident_);
    visitListSimplePat(p->u.pdata_.listsimplepat_);
    visitExp(p->u.pdata_.exp_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing PatMatch!\n");
    exit(1);
  }
}

void visitListSimplePat(ListSimplePat listsimplepat)
{
  while(listsimplepat  != 0)
  {
    /* Code For ListSimplePat Goes Here */
    visitSimplePat(listsimplepat->simplepat_);
    listsimplepat = listsimplepat->listsimplepat_;
  }
}

void visitListPatMatch(ListPatMatch listpatmatch)
{
  while(listpatmatch  != 0)
  {
    /* Code For ListPatMatch Goes Here */
    visitPatMatch(listpatmatch->patmatch_);
    listpatmatch = listpatmatch->listpatmatch_;
  }
}

void visitType(Type p)
{
  switch(p->kind)
  {
  case is_TLam:
    /* Code for TLam Goes Here */
    visitType(p->u.tlam_.type_1);
    visitType(p->u.tlam_.type_2);
    break;
  case is_TInt:
    /* Code for TInt Goes Here */
    break;
  case is_TBool:
    /* Code for TBool Goes Here */
    break;
  case is_TVar:
    /* Code for TVar Goes Here */
    visitIdent(p->u.tvar_.ident_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Type!\n");
    exit(1);
  }
}

void visitListIdent(ListIdent listident)
{
  while(listident  != 0)
  {
    /* Code For ListIdent Goes Here */
    visitIdent(listident->ident_);
    listident = listident->listident_;
  }
}

void visitListType(ListType listtype)
{
  while(listtype  != 0)
  {
    /* Code For ListType Goes Here */
    visitType(listtype->type_);
    listtype = listtype->listtype_;
  }
}

void visitDataCon(DataCon p)
{
  switch(p->kind)
  {
  case is_Cnstr:
    /* Code for Cnstr Goes Here */
    visitUIdent(p->u.cnstr_.uident_);
    visitListType(p->u.cnstr_.listtype_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing DataCon!\n");
    exit(1);
  }
}

void visitListDataCon(ListDataCon listdatacon)
{
  while(listdatacon  != 0)
  {
    /* Code For ListDataCon Goes Here */
    visitDataCon(listdatacon->datacon_);
    listdatacon = listdatacon->listdatacon_;
  }
}

void visitBoolean(Boolean p)
{
  /* Code for Boolean Goes Here */
}
void visitUIdent(UIdent p)
{
  /* Code for UIdent Goes Here */
}
void visitIdent(Ident i)
{
  /* Code for Ident Goes Here */
}
void visitInteger(Integer i)
{
  /* Code for Integer Goes Here */
}
void visitDouble(Double d)
{
  /* Code for Double Goes Here */
}
void visitChar(Char c)
{
  /* Code for Char Goes Here */
}
void visitString(String s)
{
  /* Code for String Goes Here */
}

