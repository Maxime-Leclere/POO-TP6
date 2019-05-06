#ifndef DUREE_H
#define DUREE_H

namespace nsUtil
{
    typedef unsigned long long ULLong_t;

    class Duree
    {
      private :
        ULLong_t       myDuree;
        short unsigned mySeconds;
        short unsigned myMinutes;
        short unsigned myHours;
        ULLong_t       myDays;

        void normaliser (void);

      public :
        explicit Duree  (const ULLong_t duree = ULLong_t (0));
        Duree  (const Duree & duree);
        ~Duree (void);

        ULLong_t getDuree (void) const;

        void display (void) const;

//        void incr (const ULLong_t delta = ULLong_t (0));
//        void decr (const ULLong_t delta = ULLong_t (0));

        Duree & operator ++ (void) noexcept;
        Duree   operator ++ (int)  noexcept;
        Duree & operator -- (void) noexcept;
        Duree   operator -- (int)  noexcept;


        Duree operator +  (const Duree & d) const;
        Duree operator -  (const Duree & d) const;

        bool  operator >  (const Duree & d) const;
        bool  operator <  (const Duree & d) const;
        bool  operator != (const Duree & d) const;
        bool  operator == (const Duree & d) const;

    }; // Duree

} // nsUtil

#endif // DUREE_H
