#include "Pojazd.h"

	Pojazd::Pojazd() : przebieg(0) { cout << "Pojazd Defaultowy" << endl; } // Konstruktor defaultowy
	Pojazd::Pojazd(const int& n) : przebieg(n) { cout << "Pojazd Parametryczny" << endl; } //Konstruktor parametryczny
	Pojazd::~Pojazd() { cout << "Destruktor Pojazd" << endl; } // Destruktor

	int Pojazd::GetPrzebieg() { return przebieg; }
