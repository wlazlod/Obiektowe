#include "pojemnik.h"

// -------------------------------------------------------------
// deklaracja klasy

	// konstruktor domyœlny
	Pojemnik::Pojemnik() : mdata(NULL), msize(0) { }
	// destruktor
	Pojemnik::~Pojemnik() { }

	void Pojemnik::Dodaj(const Wektor2D& v)
	{
		Wektor2D *temp = new Wektor2D[msize + 1];

		for (int i = 0; i < msize; i++) { temp[i] = mdata[i]; }
		if (mdata != NULL) delete[] mdata;
		temp[msize] = v;
		msize++;
		mdata = temp;
	}
	void Pojemnik::DrukujWszystko()
	{
		for (int i = 0; i < msize; i++) { mdata[i].Drukuj(); }
	}
	Wektor2D Pojemnik::Suma()
	{
		Wektor2D Sum;
		for (int i = 0; i < msize; i++) { Sum += mdata[i]; }
		return Sum;
	}
	Wektor2D Pojemnik::Max()
	{
		Wektor2D MaxW = mdata[0];
		for (int i = 0; i < msize; i++) { if (mdata[i] > MaxW) MaxW = mdata[i]; }
		return MaxW;
	}