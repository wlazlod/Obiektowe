#ifndef POJEMNIK
#define POJEMNIK

#include<iostream>
#include<iomanip> //manipulowanie wydrukiem
#include "Wektor2D.h"

using namespace std;

class Pojemnik
{
public:
	// konstruktor domyœlny
	Pojemnik();
	~Pojemnik();

	void Dodaj(const Wektor2D& v);
	void DrukujWszystko();
	Wektor2D Suma();
	Wektor2D Max();

private:
	Wektor2D *mdata;
	int msize;
};


#endif