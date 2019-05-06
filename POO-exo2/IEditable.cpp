#include <iostream>

#include "IEditable.h"

#define IEDIT nsUtil::IEditable

using namespace std;


void IEDIT::contenu (const IEditable & ed)
{
    cout << ed << endl;
}

