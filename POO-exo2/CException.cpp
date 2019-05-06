#include <string>
#include <iostream>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;
using namespace nsUtil;
#define CEXC nsUtil::CException

//==========================
// Classe nsUtil::CException
//==========================

CEXC::CException (const string & libelle /* = string () */,
                  const unsigned codErr  /* = KNoExc  */) noexcept
    : myLibelle (libelle), myCodErr (codErr) {}

const string & CEXC::getLibelle (void) const noexcept
{
    return myLibelle;

} // GetLibelle()

unsigned CEXC::getCodErr (void) const noexcept { return myCodErr;  }

CEXC::~CException (void) noexcept {}

const char* CEXC::what (void) const noexcept  { return myLibelle.c_str(); }

void CEXC::display (std::ostream & os) const
{
    os << "Exception : " << myLibelle << '\n'
         << "Code      : " << myCodErr  << endl;

} // Afficher()

#undef CEXC
