
#include "Autobus.h"

	Autobus::Autobus() : pasazer(0) { cout << "Autobus Defaultowy" << endl; } // Konstruktor defaultowy
	Autobus::Autobus(const int& n) : pasazer(0) { cout << "Autobus Parametryczny" << endl; } //Konstruktor parametryczny
	Autobus::Autobus(const int& n1, const int& n2) : pasazer(n1), Pojazd(n2) { cout << "Autobus Parametryczny z przebiegiem" << endl; } //Konstruktor parametryczny z inicjalizowaniem parametrów klasy nadrzêdnej
	Autobus::~Autobus() { cout << "Destruktor Autobus" << endl; }

	int Autobus::GetLiPasazerow() { return pasazer; };

	const Autobus& Autobus::operator = (const int &w) { pasazer = w; return *this; };

