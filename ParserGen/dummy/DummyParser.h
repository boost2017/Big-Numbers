/* DO NOT EDIT THIS FILE - it is machine generated */
#pragma once

#include <LRparser.h>

const extern ParserTables *DummyTables;

#line 5 "C:\\mytools2015\\ParserGen\\dummy\\Dummy.y"
#include "dummysymbol.h"
#include "dummylex.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

class DummyParser : public LRparser {
public:
  DummyParser(Scanner *lex) : LRparser(*DummyTables,lex) {}
private:
  YYSTYPE m_dollardollar,*m_stacktop,m_userstack[256];
  int reduceAction(unsigned int prod);
  void userStackInit()                           { m_stacktop = m_userstack;         }
  void userStackShiftSymbol(unsigned int symbol) { m_stacktop++;                     } // push 1 element (garbage) on userstack
  void userStackPopSymbols(unsigned int count)   { m_stacktop -= count;              } // pop count symbols from userstack
  void userStackShiftDollarDollar()              { *(++m_stacktop) = m_dollardollar; } // push($$) on userstack
  void defaultReduce(unsigned int prod)          { m_dollardollar  = *m_stacktop;    } // $$ = $1
};

#line 18 "C:\\mytools2015\\ParserGen\\lib\\parsergencpp.par"

