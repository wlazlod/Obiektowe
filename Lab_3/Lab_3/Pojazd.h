#ifndef POJAZD
#define POJAZD

#include<iostream>

using namespace std;

class Pojazd
{
public:
	Pojazd();
	Pojazd(const int& n);
	~Pojazd();

	int GetPrzebieg();
private:
	int przebieg;
};

#endif // POJAZD
