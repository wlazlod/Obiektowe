#include<iostream>
#include<iomanip> //manipulowanie wydrukiem

#include"Wektor2D.h"
#include"Pojemnik.h"

using namespace std;

void main(void) {

	Wektor2D v1(10, 20);
	Wektor2D v2 = v1;
	Pojemnik poj;
	poj.Dodaj(v1);
	poj.Dodaj(v2);
	poj.Dodaj(Wektor2D(3, 2));
	poj.Dodaj(Wektor2D(8, 4));
	poj.Dodaj(Wektor2D(120, 5));
	poj.DrukujWszystko();
	cout << "Suma: " << poj.Suma();
	cout << v1;
	cout << v1 << v2;
	cout << "Max: " << poj.Max();
}


