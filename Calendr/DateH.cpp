#include "DateH.h"
#include<assert.h>
#include<iostream>
using namespace std;
using namespace Time;
bool Time::DateH::checkLeapY(unsigned int year)
{
    if (year % 400 == 0)return true;
    if (year % 100 == 0)return false;
    if(year % 4 == 0)return true;
    return false;
}
int Time::DateH::dayMax(unsigned int m, unsigned int y)
{
    int max;
    if (m == 2) {
        if (DateH::checkLeapY(y))return 29;
        else return 28;
    }
    if ((!(m % 2) && m > 7) || ((m % 2) && m <= 7))return 31;
    return 30;
}
Time::DateH::DateH(int s, int min, int h,unsigned int d,unsigned int mon,unsigned int y):Heure(h,min,s)
{
    d<=DateH::dayMax(mon,y)? this->Day = d:this->Day=1;
    mon<=12 ? this->Month = mon:this->Month=1;
    y > 1900 ? this->Year = y: this->Year=1900;
}

bool Time::DateH::operator>(const DateH&He)const
{
    if (this->compare(He) == 1)return true;
    return false;
}

int Time::DateH::compare(const DateH& He)const
{
    if (this->Year > He.Year)return 1;
    if (this->Year < He.Year)return -1;
    if (this->Month > He.Month)return 1;
    if (this->Month < He.Month)return -1;
    if (this->Day > He.Day)return 1;
    if (this->Day < He.Day)return -1;
    return this->Time::Heure::compare(He);
}

void Time::DateH::Print() const
{
    cout << this->Day << "/" << this->Month << "/" << this->Year << " ", this->Heure::Print();
}

