#ifndef AUTOBUS
#define AUTOBUS

#include<iostream>
#include"Pojazd.h"
using namespace std;

class Autobus : public Pojazd
{
public:
	Autobus();
	Autobus(const int& n);
	Autobus(const int& n1, const int& n2);
	~Autobus();

	const Autobus& operator = (const int &w);

	int GetLiPasazerow();

private:
	int pasazer;
};

#endif // AUTOBUS