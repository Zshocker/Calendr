#pragma once
#include "Heure.h"
namespace Time {
    class DateH :private Heure
    {
        int Day, Month, Year;
    public:
        static int dayMax(unsigned int m,unsigned int y);
        static bool checkLeapY(unsigned int y);
        DateH(int s=0, int min=0, int h=0,unsigned int d=1,unsigned int mon=1,unsigned int y=1900);
        bool operator>(const DateH&)const;
        int compare(const DateH&) const;
        void Print()const ;
    };
}
