#pragma once
namespace Time {

	class Heure
	{
	private:
		int Hour, minute, seconde;
	public:
		Heure(int H=0, int M=0, int S=0);
		void Print()const;
		bool operator>(const Heure&)const;
		int compare(const Heure&)const;
	};
}
