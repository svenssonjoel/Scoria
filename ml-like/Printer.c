/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include "Printer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INDENT_WIDTH 2

int _n_;
char *buf_;
int cur_;
int buf_size;

/* You may wish to change the renderC functions */
void renderC(Char c)
{
  if (c == '{')
  {
     bufAppendC('\n');
     indent();
     bufAppendC(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppendC('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppendC(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppendC(c);
  }
  else if (c == '}')
  {
     int t;
     _n_ = _n_ - INDENT_WIDTH;
     for(t=0; t<INDENT_WIDTH; t++) {
       backup();
     }
     bufAppendC(c);
     bufAppendC('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppendC(c);
     bufAppendC(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppendC(c);
     bufAppendC('\n');
     indent();
  }
  else if (c == 0) return;
  else
  {
     bufAppendC(' ');
     bufAppendC(c);
     bufAppendC(' ');
  }
}
void renderS(String s)
{
  if(strlen(s) > 0)
  {
    bufAppendS(s);
    bufAppendC(' ');
  }
}
void indent(void)
{
  int n = _n_;
  while (n > 0)
  {
    bufAppendC(' ');
    n--;
  }
}
void backup(void)
{
  if (buf_[cur_ - 1] == ' ')
  {
    buf_[cur_ - 1] = 0;
    cur_--;
  }
}
char *printProgram(Program p)
{
  _n_ = 0;
  bufReset();
  ppProgram(p, 0);
  return buf_;
}
char *printDef(Def p)
{
  _n_ = 0;
  bufReset();
  ppDef(p, 0);
  return buf_;
}
char *printListDef(ListDef p)
{
  _n_ = 0;
  bufReset();
  ppListDef(p, 0);
  return buf_;
}
char *printConst(Const p)
{
  _n_ = 0;
  bufReset();
  ppConst(p, 0);
  return buf_;
}
char *printExp(Exp p)
{
  _n_ = 0;
  bufReset();
  ppExp(p, 0);
  return buf_;
}
char *printSimplePat(SimplePat p)
{
  _n_ = 0;
  bufReset();
  ppSimplePat(p, 0);
  return buf_;
}
char *printPatMatch(PatMatch p)
{
  _n_ = 0;
  bufReset();
  ppPatMatch(p, 0);
  return buf_;
}
char *printListSimplePat(ListSimplePat p)
{
  _n_ = 0;
  bufReset();
  ppListSimplePat(p, 0);
  return buf_;
}
char *printListPatMatch(ListPatMatch p)
{
  _n_ = 0;
  bufReset();
  ppListPatMatch(p, 0);
  return buf_;
}
char *printType(Type p)
{
  _n_ = 0;
  bufReset();
  ppType(p, 0);
  return buf_;
}
char *printListIdent(ListIdent p)
{
  _n_ = 0;
  bufReset();
  ppListIdent(p, 0);
  return buf_;
}
char *printListType(ListType p)
{
  _n_ = 0;
  bufReset();
  ppListType(p, 0);
  return buf_;
}
char *printDataCon(DataCon p)
{
  _n_ = 0;
  bufReset();
  ppDataCon(p, 0);
  return buf_;
}
char *printListDataCon(ListDataCon p)
{
  _n_ = 0;
  bufReset();
  ppListDataCon(p, 0);
  return buf_;
}
char *showProgram(Program p)
{
  _n_ = 0;
  bufReset();
  shProgram(p);
  return buf_;
}
char *showDef(Def p)
{
  _n_ = 0;
  bufReset();
  shDef(p);
  return buf_;
}
char *showListDef(ListDef p)
{
  _n_ = 0;
  bufReset();
  shListDef(p);
  return buf_;
}
char *showConst(Const p)
{
  _n_ = 0;
  bufReset();
  shConst(p);
  return buf_;
}
char *showExp(Exp p)
{
  _n_ = 0;
  bufReset();
  shExp(p);
  return buf_;
}
char *showSimplePat(SimplePat p)
{
  _n_ = 0;
  bufReset();
  shSimplePat(p);
  return buf_;
}
char *showPatMatch(PatMatch p)
{
  _n_ = 0;
  bufReset();
  shPatMatch(p);
  return buf_;
}
char *showListSimplePat(ListSimplePat p)
{
  _n_ = 0;
  bufReset();
  shListSimplePat(p);
  return buf_;
}
char *showListPatMatch(ListPatMatch p)
{
  _n_ = 0;
  bufReset();
  shListPatMatch(p);
  return buf_;
}
char *showType(Type p)
{
  _n_ = 0;
  bufReset();
  shType(p);
  return buf_;
}
char *showListIdent(ListIdent p)
{
  _n_ = 0;
  bufReset();
  shListIdent(p);
  return buf_;
}
char *showListType(ListType p)
{
  _n_ = 0;
  bufReset();
  shListType(p);
  return buf_;
}
char *showDataCon(DataCon p)
{
  _n_ = 0;
  bufReset();
  shDataCon(p);
  return buf_;
}
char *showListDataCon(ListDataCon p)
{
  _n_ = 0;
  bufReset();
  shListDataCon(p);
  return buf_;
}
void ppProgram(Program p, int _i_)
{
  switch(p->kind)
  {
  case is_Prog:
    if (_i_ > 0) renderC(_L_PAREN);
    ppListDef(p->u.prog_.listdef_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Program!\n");
    exit(1);
  }
}

void ppDef(Def p, int _i_)
{
  switch(p->kind)
  {
  case is_Define:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.define_.ident_, 0);
    renderC('=');
    ppExp(p->u.define_.exp_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Deftype:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.deftype_.ident_, 0);
    renderC(':');
    ppType(p->u.deftype_.type_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Data:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("data");
    ppIdent(p->u.data_.uident_, 0);
    renderC('=');
    ppListDataCon(p->u.data_.listdatacon_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_DExp:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(p->u.dexp_.exp_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Def!\n");
    exit(1);
  }
}

void ppListDef(ListDef listdef, int i)
{
  while(listdef != 0)
  {
    if (listdef->listdef_ == 0)
    {
      ppDef(listdef->def_, i);
      renderS("");
      listdef = 0;
    }
    else
    {
      ppDef(listdef->def_, i);
      renderS("");
      listdef = listdef->listdef_;
    }
  }
}

void ppConst(Const p, int _i_)
{
  switch(p->kind)
  {
  case is_CInt:
    if (_i_ > 0) renderC(_L_PAREN);
    ppInteger(p->u.cint_.integer_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_CFloat:
    if (_i_ > 0) renderC(_L_PAREN);
    ppDouble(p->u.cfloat_.double_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_CBool:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.cbool_.boolean_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Const!\n");
    exit(1);
  }
}

void ppExp(Exp p, int _i_)
{
  switch(p->kind)
  {
  case is_EAdd:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(p->u.eadd_.exp_1, 0);
    renderC('+');
    ppExp(p->u.eadd_.exp_2, 1);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_EMul:
    if (_i_ > 1) renderC(_L_PAREN);
    ppExp(p->u.emul_.exp_1, 1);
    renderC('*');
    ppExp(p->u.emul_.exp_2, 2);

    if (_i_ > 1) renderC(_R_PAREN);
    break;

  case is_EConst:
    if (_i_ > 2) renderC(_L_PAREN);
    ppConst(p->u.econst_.const_, 0);

    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_EVar:
    if (_i_ > 2) renderC(_L_PAREN);
    ppIdent(p->u.evar_.ident_, 0);

    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_ELam:
    if (_i_ > 2) renderC(_L_PAREN);
    renderS("lambda");
    ppListIdent(p->u.elam_.listident_, 0);
    renderS("->");
    ppExp(p->u.elam_.exp_, 0);

    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_EMatch:
    if (_i_ > 2) renderC(_L_PAREN);
    renderS("match");
    ppListPatMatch(p->u.ematch_.listpatmatch_, 0);

    if (_i_ > 2) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void ppSimplePat(SimplePat p, int _i_)
{
  switch(p->kind)
  {
  case is_SPConst:
    if (_i_ > 0) renderC(_L_PAREN);
    ppConst(p->u.spconst_.const_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_SPIdent:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.spident_.ident_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing SimplePat!\n");
    exit(1);
  }
}

void ppPatMatch(PatMatch p, int _i_)
{
  switch(p->kind)
  {
  case is_PSimple:
    if (_i_ > 0) renderC(_L_PAREN);
    ppSimplePat(p->u.psimple_.simplepat_, 0);
    renderS("->");
    ppExp(p->u.psimple_.exp_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_PData:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.pdata_.ident_, 0);
    ppListSimplePat(p->u.pdata_.listsimplepat_, 0);
    renderS("->");
    ppExp(p->u.pdata_.exp_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing PatMatch!\n");
    exit(1);
  }
}

void ppListSimplePat(ListSimplePat listsimplepat, int i)
{
  while(listsimplepat != 0)
  {
    if (listsimplepat->listsimplepat_ == 0)
    {
      ppSimplePat(listsimplepat->simplepat_, i);
      renderS("");
      listsimplepat = 0;
    }
    else
    {
      ppSimplePat(listsimplepat->simplepat_, i);
      renderS("");
      listsimplepat = listsimplepat->listsimplepat_;
    }
  }
}

void ppListPatMatch(ListPatMatch listpatmatch, int i)
{
  while(listpatmatch != 0)
  {
    if (listpatmatch->listpatmatch_ == 0)
    {
      ppPatMatch(listpatmatch->patmatch_, i);

      listpatmatch = 0;
    }
    else
    {
      ppPatMatch(listpatmatch->patmatch_, i);
      renderC('|');
      listpatmatch = listpatmatch->listpatmatch_;
    }
  }
}

void ppType(Type p, int _i_)
{
  switch(p->kind)
  {
  case is_TLam:
    if (_i_ > 0) renderC(_L_PAREN);
    ppType(p->u.tlam_.type_1, 1);
    renderS("->");
    ppType(p->u.tlam_.type_2, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_TInt:
    if (_i_ > 1) renderC(_L_PAREN);
    renderS("Int");

    if (_i_ > 1) renderC(_R_PAREN);
    break;

  case is_TBool:
    if (_i_ > 1) renderC(_L_PAREN);
    renderS("Bool");

    if (_i_ > 1) renderC(_R_PAREN);
    break;

  case is_TVar:
    if (_i_ > 1) renderC(_L_PAREN);
    ppIdent(p->u.tvar_.ident_, 0);

    if (_i_ > 1) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing Type!\n");
    exit(1);
  }
}

void ppListIdent(ListIdent listident, int i)
{
  while(listident != 0)
  {
    if (listident->listident_ == 0)
    {
      ppIdent(listident->ident_, i);
      renderS("");
      listident = 0;
    }
    else
    {
      ppIdent(listident->ident_, i);
      renderS("");
      listident = listident->listident_;
    }
  }
}

void ppListType(ListType listtype, int i)
{
  while(listtype != 0)
  {
    if (listtype->listtype_ == 0)
    {
      ppType(listtype->type_, i);
      renderS("");
      listtype = 0;
    }
    else
    {
      ppType(listtype->type_, i);
      renderS("");
      listtype = listtype->listtype_;
    }
  }
}

void ppDataCon(DataCon p, int _i_)
{
  switch(p->kind)
  {
  case is_Cnstr:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.cnstr_.uident_, 0);
    ppListType(p->u.cnstr_.listtype_, 0);

    if (_i_ > 0) renderC(_R_PAREN);
    break;


  default:
    fprintf(stderr, "Error: bad kind field when printing DataCon!\n");
    exit(1);
  }
}

void ppListDataCon(ListDataCon listdatacon, int i)
{
  while(listdatacon != 0)
  {
    if (listdatacon->listdatacon_ == 0)
    {
      ppDataCon(listdatacon->datacon_, i);

      listdatacon = 0;
    }
    else
    {
      ppDataCon(listdatacon->datacon_, i);
      renderC('|');
      listdatacon = listdatacon->listdatacon_;
    }
  }
}

void ppInteger(Integer n, int i)
{
  char tmp[16];
  sprintf(tmp, "%d", n);
  bufAppendS(tmp);
}
void ppDouble(Double d, int i)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppendS(tmp);
}
void ppChar(Char c, int i)
{
  bufAppendC('\'');
  bufAppendC(c);
  bufAppendC('\'');
}
void ppString(String s, int i)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}
void ppIdent(String s, int i)
{
  renderS(s);
}

void ppBoolean(String s, int i)
{
  renderS(s);
}


void ppUIdent(String s, int i)
{
  renderS(s);
}


void shProgram(Program p)
{
  switch(p->kind)
  {
  case is_Prog:
    bufAppendC('(');

    bufAppendS("Prog");

    bufAppendC(' ');

    shListDef(p->u.prog_.listdef_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Program!\n");
    exit(1);
  }
}

void shDef(Def p)
{
  switch(p->kind)
  {
  case is_Define:
    bufAppendC('(');

    bufAppendS("Define");

    bufAppendC(' ');

    shIdent(p->u.define_.ident_);
  bufAppendC(' ');
    shExp(p->u.define_.exp_);

    bufAppendC(')');

    break;
  case is_Deftype:
    bufAppendC('(');

    bufAppendS("Deftype");

    bufAppendC(' ');

    shIdent(p->u.deftype_.ident_);
  bufAppendC(' ');
    shType(p->u.deftype_.type_);

    bufAppendC(')');

    break;
  case is_Data:
    bufAppendC('(');

    bufAppendS("Data");

    bufAppendC(' ');

    shIdent(p->u.data_.uident_);
  bufAppendC(' ');
    shListDataCon(p->u.data_.listdatacon_);

    bufAppendC(')');

    break;
  case is_DExp:
    bufAppendC('(');

    bufAppendS("DExp");

    bufAppendC(' ');

    shExp(p->u.dexp_.exp_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Def!\n");
    exit(1);
  }
}

void shListDef(ListDef listdef)
{
  bufAppendC('[');
  while(listdef != 0)
  {
    if (listdef->listdef_)
    {
      shDef(listdef->def_);
      bufAppendS(", ");
      listdef = listdef->listdef_;
    }
    else
    {
      shDef(listdef->def_);
      listdef = 0;
    }
  }
  bufAppendC(']');
}

void shConst(Const p)
{
  switch(p->kind)
  {
  case is_CInt:
    bufAppendC('(');

    bufAppendS("CInt");

    bufAppendC(' ');

    shInteger(p->u.cint_.integer_);

    bufAppendC(')');

    break;
  case is_CFloat:
    bufAppendC('(');

    bufAppendS("CFloat");

    bufAppendC(' ');

    shDouble(p->u.cfloat_.double_);

    bufAppendC(')');

    break;
  case is_CBool:
    bufAppendC('(');

    bufAppendS("CBool");

    bufAppendC(' ');

    shIdent(p->u.cbool_.boolean_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Const!\n");
    exit(1);
  }
}

void shExp(Exp p)
{
  switch(p->kind)
  {
  case is_EAdd:
    bufAppendC('(');

    bufAppendS("EAdd");

    bufAppendC(' ');

    shExp(p->u.eadd_.exp_1);
  bufAppendC(' ');
    shExp(p->u.eadd_.exp_2);

    bufAppendC(')');

    break;
  case is_EMul:
    bufAppendC('(');

    bufAppendS("EMul");

    bufAppendC(' ');

    shExp(p->u.emul_.exp_1);
  bufAppendC(' ');
    shExp(p->u.emul_.exp_2);

    bufAppendC(')');

    break;
  case is_EConst:
    bufAppendC('(');

    bufAppendS("EConst");

    bufAppendC(' ');

    shConst(p->u.econst_.const_);

    bufAppendC(')');

    break;
  case is_EVar:
    bufAppendC('(');

    bufAppendS("EVar");

    bufAppendC(' ');

    shIdent(p->u.evar_.ident_);

    bufAppendC(')');

    break;
  case is_ELam:
    bufAppendC('(');

    bufAppendS("ELam");

    bufAppendC(' ');

    shListIdent(p->u.elam_.listident_);
  bufAppendC(' ');
    shExp(p->u.elam_.exp_);

    bufAppendC(')');

    break;
  case is_EMatch:
    bufAppendC('(');

    bufAppendS("EMatch");

    bufAppendC(' ');

    shListPatMatch(p->u.ematch_.listpatmatch_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Exp!\n");
    exit(1);
  }
}

void shSimplePat(SimplePat p)
{
  switch(p->kind)
  {
  case is_SPConst:
    bufAppendC('(');

    bufAppendS("SPConst");

    bufAppendC(' ');

    shConst(p->u.spconst_.const_);

    bufAppendC(')');

    break;
  case is_SPIdent:
    bufAppendC('(');

    bufAppendS("SPIdent");

    bufAppendC(' ');

    shIdent(p->u.spident_.ident_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing SimplePat!\n");
    exit(1);
  }
}

void shPatMatch(PatMatch p)
{
  switch(p->kind)
  {
  case is_PSimple:
    bufAppendC('(');

    bufAppendS("PSimple");

    bufAppendC(' ');

    shSimplePat(p->u.psimple_.simplepat_);
  bufAppendC(' ');
    shExp(p->u.psimple_.exp_);

    bufAppendC(')');

    break;
  case is_PData:
    bufAppendC('(');

    bufAppendS("PData");

    bufAppendC(' ');

    shIdent(p->u.pdata_.ident_);
  bufAppendC(' ');
    shListSimplePat(p->u.pdata_.listsimplepat_);
  bufAppendC(' ');
    shExp(p->u.pdata_.exp_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing PatMatch!\n");
    exit(1);
  }
}

void shListSimplePat(ListSimplePat listsimplepat)
{
  bufAppendC('[');
  while(listsimplepat != 0)
  {
    if (listsimplepat->listsimplepat_)
    {
      shSimplePat(listsimplepat->simplepat_);
      bufAppendS(", ");
      listsimplepat = listsimplepat->listsimplepat_;
    }
    else
    {
      shSimplePat(listsimplepat->simplepat_);
      listsimplepat = 0;
    }
  }
  bufAppendC(']');
}

void shListPatMatch(ListPatMatch listpatmatch)
{
  bufAppendC('[');
  while(listpatmatch != 0)
  {
    if (listpatmatch->listpatmatch_)
    {
      shPatMatch(listpatmatch->patmatch_);
      bufAppendS(", ");
      listpatmatch = listpatmatch->listpatmatch_;
    }
    else
    {
      shPatMatch(listpatmatch->patmatch_);
      listpatmatch = 0;
    }
  }
  bufAppendC(']');
}

void shType(Type p)
{
  switch(p->kind)
  {
  case is_TLam:
    bufAppendC('(');

    bufAppendS("TLam");

    bufAppendC(' ');

    shType(p->u.tlam_.type_1);
  bufAppendC(' ');
    shType(p->u.tlam_.type_2);

    bufAppendC(')');

    break;
  case is_TInt:

    bufAppendS("TInt");




    break;
  case is_TBool:

    bufAppendS("TBool");




    break;
  case is_TVar:
    bufAppendC('(');

    bufAppendS("TVar");

    bufAppendC(' ');

    shIdent(p->u.tvar_.ident_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Type!\n");
    exit(1);
  }
}

void shListIdent(ListIdent listident)
{
  bufAppendC('[');
  while(listident != 0)
  {
    if (listident->listident_)
    {
      shIdent(listident->ident_);
      bufAppendS(", ");
      listident = listident->listident_;
    }
    else
    {
      shIdent(listident->ident_);
      listident = 0;
    }
  }
  bufAppendC(']');
}

void shListType(ListType listtype)
{
  bufAppendC('[');
  while(listtype != 0)
  {
    if (listtype->listtype_)
    {
      shType(listtype->type_);
      bufAppendS(", ");
      listtype = listtype->listtype_;
    }
    else
    {
      shType(listtype->type_);
      listtype = 0;
    }
  }
  bufAppendC(']');
}

void shDataCon(DataCon p)
{
  switch(p->kind)
  {
  case is_Cnstr:
    bufAppendC('(');

    bufAppendS("Cnstr");

    bufAppendC(' ');

    shIdent(p->u.cnstr_.uident_);
  bufAppendC(' ');
    shListType(p->u.cnstr_.listtype_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing DataCon!\n");
    exit(1);
  }
}

void shListDataCon(ListDataCon listdatacon)
{
  bufAppendC('[');
  while(listdatacon != 0)
  {
    if (listdatacon->listdatacon_)
    {
      shDataCon(listdatacon->datacon_);
      bufAppendS(", ");
      listdatacon = listdatacon->listdatacon_;
    }
    else
    {
      shDataCon(listdatacon->datacon_);
      listdatacon = 0;
    }
  }
  bufAppendC(']');
}

void shInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppendS(tmp);
}
void shDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppendS(tmp);
}
void shChar(Char c)
{
  bufAppendC('\'');
  bufAppendC(c);
  bufAppendC('\'');
}
void shString(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}
void shIdent(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}

void shBoolean(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void shUIdent(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}


void bufAppendS(const char *s)
{
  int len = strlen(s);
  int n;
  while (cur_ + len > buf_size)
  {
    buf_size *= 2; /* Double the buffer size */
    resizeBuffer();
  }
  for(n = 0; n < len; n++)
  {
    buf_[cur_ + n] = s[n];
  }
  cur_ += len;
  buf_[cur_] = 0;
}
void bufAppendC(const char c)
{
  if (cur_ == buf_size)
  {
    buf_size *= 2; /* Double the buffer size */
    resizeBuffer();
  }
  buf_[cur_] = c;
  cur_++;
  buf_[cur_] = 0;
}
void bufReset(void)
{
  cur_ = 0;
  buf_size = BUFFER_INITIAL;
  resizeBuffer();
  memset(buf_, 0, buf_size);
}
void resizeBuffer(void)
{
  char *temp = (char *) malloc(buf_size);
  if (!temp)
  {
    fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
    exit(1);
  }
  if (buf_)
  {
    strncpy(temp, buf_, buf_size); /* peteg: strlcpy is safer, but not POSIX/ISO C. */
    free(buf_);
  }
  buf_ = temp;
}
char *buf_;
int cur_, buf_size;

