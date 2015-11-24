/* #include<iostream>
using namespace std;

class A
{
public:
	A() { cout << "konstruktor A" << endl; }
	~A() { cout << "destruktor A" << endl; }

	static int mattr;  //zmienna statyczna - fajna rzecz
};

class Pojazd
{
public:
	Pojazd() : przebieg(0) { cout << "Pojazd Defaultowy" << endl; } // Konstruktor defaultowy
	Pojazd(const int& n) : przebieg(n) { cout << "Pojazd Parametryczny" << endl; } //Konstruktor parametryczny
	~Pojazd() { cout << "Destruktor Pojazd" << endl; } // Destruktor

	int GetPrzebieg() { return przebieg; }
private:
	int przebieg;
};

class Autobus : public Pojazd
{
public:
	Autobus() : pasazer(0) { cout << "Autobus Defaultowy" << endl; } // Konstruktor defaultowy
	Autobus(const int& n) : pasazer(0) { cout << "Autobus Parametryczny" << endl; } //Konstruktor parametryczny
	Autobus(const int& n1, const int& n2) : pasazer(n1), Pojazd(n2) { cout << "Autobus Parametryczny z przebiegiem" << endl; } //Konstruktor parametryczny z inicjalizowaniem parametrów klasy nadrzêdnej
	~Autobus() { cout << "Destruktor Autobus" << endl; }

	const Autobus& operator = (const int &w) { return Autobus(w); }

	int GetLiPasazerow() { return pasazer;  }
private:
	int pasazer;
};



//Inicjalizacja zmiennej statycznej
int A::mattr = 0;

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
*/