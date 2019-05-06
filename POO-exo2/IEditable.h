#ifndef IEDITABLE_H
#define IEDITABLE_H
#include <iostream>
using namespace std;
namespace nsUtil {

    class IEditable
    {
    public:
        virtual ~IEditable() {}
        friend std::ostream & operator << (std::ostream & os, const IEditable & editable){
            editable.display(os);
            return os;
        }
        void contenu (const IEditable & ed);
        virtual void display(std::ostream & os)const = 0;

    };

    class CA : public IEditable
    {
    private:
        virtual void display (std::ostream & os)const {
            os << "CA";
        }
    public:
        CA() ;
        virtual ~CA(){}
    };

    class CB : public IEditable
    {
    public:
        virtual void display (std::ostream & os)const {
            os << "CB";
        }
    public:
        CB ();
        virtual ~CB(){}

    };

}

#endif // IEDITABLE_H
