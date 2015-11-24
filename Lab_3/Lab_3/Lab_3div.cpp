#include<iostream>

#include"A.h"
#include"Pojazd.h"
#include"Autobus.h"

using namespace std;



int main(void)
{
	A *ptr;
	ptr = new A[5];
	for (int i = 0; i < 5; ++i)
		ptr[i].mattr = i + 1;
	for (int i = 0; i < 5; i++)
		cout << "element " << i << " attr = " << ptr[i].mattr << endl;
	delete[] ptr;
	cout << endl;

	Pojazd P1;
	Pojazd P2(20);
	cout << "Przebieg: " << P1.GetPrzebieg() << endl;
	cout << "Przebieg: " << P2.GetPrzebieg() << endl;
	cout << endl;

	Autobus A1;
	Autobus A2(20);
	Autobus A3(20, 30);
	cout << "Przebieg: " << A1.GetPrzebieg() << " Liczba pasazerow: " << A1.GetLiPasazerow() << endl;
	cout << "Przebieg: " << A2.GetPrzebieg() << " Liczba pasazerow: " << A2.GetLiPasazerow() << endl;
	cout << "Przebieg: " << A3.GetPrzebieg() << " Liczba pasazerow: " << A3.GetLiPasazerow() << endl;
	cout << endl;

	Autobus bus;
	bus = 3;
	cout << "Przebieg: " << bus.GetPrzebieg() << " Liczba pasazerow: " << bus.GetLiPasazerow() << endl;
	cout << endl;

	return 0;
}