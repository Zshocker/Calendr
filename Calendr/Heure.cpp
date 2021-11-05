#include"Heure.h"
#include"assert.h"
#include<iostream>
using namespace std;
Time::Heure::Heure(int H, int M, int S)
{
	if (H <= 23 && H >= 0)this->Hour = H;
	else this->Hour = 0;
	if (M <= 60 && M >= 0)this->minute = M;
	else this->minute = 0;
	if (S <= 60 && S >= 0)this->seconde = S;
	else this->seconde = 0;
}

void Time::Heure::Print() const
{
	cout << this->Hour << ":" << this->minute << ":" << this->seconde;
}

bool Time::Heure::operator>(const Heure& He) const
{
	if (this->Hour > He.Hour)return true;
	if (this->Hour < He.Hour)return false;
	if (this->minute > He.minute)return true;
	if (this->minute < He.minute)return false;
	if (this->seconde > He.seconde)return true;
	if (this->seconde < He.seconde)return false;
	return false;
}
