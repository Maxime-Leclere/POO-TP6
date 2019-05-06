#ifndef CEXCEPTION_H
#define CEXCEPTION_H

#include <string>
#include <exception>

#include "CstCodErr.h"
#include "IEditable.h"

namespace nsUtil
{
    class CException : public std::exception , public IEditable
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

        virtual void display (std::ostream & os) const;

    }; // CException

    class CExcFille : public CException
    {
    private:
        virtual void display ();
    public:
        CExcFille (const std::string & libelle ,
                   const unsigned      codErr  ) : CException(libelle, codErr){}
        void display (ostream & os){
            CException::display(os);
            os << "de la classefille";
        }
        virtual ~CExcFille() {}
    };

} // namespace nsUtil

#endif // CEXCEPTION_H
