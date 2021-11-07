#include "DateH.h"
#include "Heure.h"
using namespace Time;
int main() 
{
	DateH* as = new DateH(0, 37,15,11,6,2022);
	DateH* aW = new DateH(0, 38,15,11,6,2021);
	bool s = *as > *aW;
	as->Print();
}