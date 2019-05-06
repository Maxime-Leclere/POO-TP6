#include <iostream>
#include <exception>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;
using namespace nsUtil;

namespace
{
void testCException (void) {

}

} // namespace

int main ()
{
    try
    {
        testCException();
    }
    catch (const CException & e)
    {
        cerr << e << '\n';
        return e.getCodErr ();
    }
    catch (const exception & e)
    {
        cerr << "Exception standard : " << e.what() << '\n';
        return KExcStd;
    }
    catch (...)
    {
        cerr << "Exception inconnue\n";
        return KExcInconnue;
    }
    return KNoExc;


} // main()
