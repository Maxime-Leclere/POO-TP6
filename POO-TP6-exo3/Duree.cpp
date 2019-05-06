#include <iostream>
#include <iomanip>   // setw()
#include "Duree.h"

using namespace nsUtil;
using namespace std;

#define DUREE nsUtil::Duree

DUREE::Duree  (const ULLong_t duree /* = ULLong_t (0) */)
    : myDuree (duree)
{
    normaliser ();
    cout << "duree construite : ";
    display ();
    cout << endl;

} // Duree()

DUREE::Duree  (const Duree & duree)
    : myDuree (duree.getDuree ())
{
    normaliser ();
    cout << "duree construite par recopie : ";
    display ();
    cout << endl;

} // Duree()

DUREE::~Duree  (void)
{
    cout << "duree détruite : ";
    display ();
    cout << endl;

} // Duree()

void DUREE::normaliser (void)
{
    myDays    =  myDuree / 86400;
    myHours   = (myDuree % 86400) / 3600;
    myMinutes  = (myDuree % 3600) / 60;
    mySeconds =  myDuree % 60;

} // normaliser()

ULLong_t DUREE::getDuree (void)const
{
    return myDuree;
}

void DUREE::display (void) const
{
    cout << '['
         << setw (10) << myDays    << ':'
         << setfill ('0')
         << setw (2)  << myHours   << " heure(s)"
         << setw (2)  << myMinutes << " minute(s)"
         << setw (2)  << mySeconds << " seconde(s)"
         << setfill (' ')
         << ']';

} // display()

//void DUREE::incr (const ULLong_t delta /* = ULLong_t (0) */)
//{
//    myDuree += delta;
//    normaliser ();

//} // incr()

//void DUREE::decr (const ULLong_t delta /* = ULLong_t (0) */)
//{
//    myDuree -= (delta > myDuree) ? myDuree : delta;

//} // decr()

Duree & DUREE::operator ++ (void) noexcept
{
    ++myDuree;
    return myDuree;
}

Duree   DUREE::operator ++ (int arg)  noexcept
{
    myDuree += arg;
    return myDuree;
}

Duree & DUREE::operator -- (void) noexcept
{
    if (myDuree < 0)return 0;
}

Duree   DUREE::operator -- (int)  noexcept
{

}

Duree DUREE::operator + (const Duree & d) const
{
    return myDuree + d.myDuree;

} // operator +()

Duree DUREE::operator - (const Duree & d) const
{
    return myDuree - (myDuree < d.myDuree ? myDuree : d.myDuree);

} // operator -()

bool DUREE::operator > (const Duree & d) const
{
    return myDuree > d.myDuree;

} // operator >()

bool DUREE::operator < (const Duree & d) const
{
    return myDuree < d.myDuree;

} // operator <()

bool DUREE::operator != (const Duree & d) const
{
    return myDuree != d.myDuree;

} // operator !=()

bool DUREE::operator == (const Duree & d) const
{
    return myDuree == d.myDuree;

} // operator ==()
