#ifndef CEXCEPTION_H
#define CEXCEPTION_H

#include <string>
#include <exception>

#include "CstCodErr.h"

namespace nsUtil
{
    class CException : public std::exception
    {
        std::string myLibelle;
        unsigned    myCodErr;

      public :
        CException (const std::string & libelle = std::string(),
                    const unsigned      codErr  = KNoExc)     noexcept;
        virtual ~CException (void)                            noexcept;

        const std::string & getLibelle (void) const           noexcept;
        unsigned            getCodErr  (void) const           noexcept;

        virtual const char* what       (void) const           noexcept;

        void display (void) const;

    }; // CException

} // namespace nsUtil

#endif // CEXCEPTION_H
