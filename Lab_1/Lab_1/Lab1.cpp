#include<iostream>
#include<iomanip> //manipulowanie wydrukiem

using namespace std;
const double MAX_VAL = 100;

class Wektor2D
{
	friend Wektor2D operator + (const Wektor2D &w1, const Wektor2D &w2);
public:

	//Konstruktory i destruktory

	Wektor2D() : x(0.), y(0.) // Konstruktor domyœlny z list¹ inicjalizacyjn¹
	{
		cout << "Domyslny ";
		//Drukuj();
		nr = indx++;
		DrukujNumer();
	} 
	Wektor2D(const double &a, const double &b)  // Konstruktor parametryczny
	{
		x = a;
		y = b;
		cout << "Parametryczny ";
		//Drukuj();
		nr = indx++;
		DrukujNumer();
	}
	Wektor2D(const Wektor2D &a) // Konstruktor kopiuj¹cy
	{
		x = a.x;
		y = a.y;
		cout << "Kopiujacy ";
		//Drukuj();
		nr = indx++;
		DrukujNumer();
	}
	~Wektor2D()  // Destruktor
	{
		cout << "Destruktor ";
		//Drukuj();
		DrukujNumer();
	}
	
	//Funkcje drukuj¹ce

	void Drukuj()
	{
		cout << setprecision(6) << "[ " << x << ", " << y << " ]" << endl;  // setprecision odpowiada za d³ugoœæ znaków
	}
	void DrukujNumer() //Metoda do drukowania numeru :D 
	{
		cout << "Obiekt nr " << nr << endl;
	}

	//Operatory jednoargumentowe

	const Wektor2D& operator += (const Wektor2D &w)
	{
		x += w.x;
		y += w.y;
		return *this;  //zwróæ ten sam obiekt
	}
	const Wektor2D& operator += (const int &a)
	{
		x += a;
		y += a;
		return *this;
	}
	const Wektor2D& operator = (const Wektor2D &w){ return *this; }

	//Akcesory

	const double& GetX() const { return x; }
	const double& GetY() const { return y; }

	const double& SetX(const double a)
	{
		if (a > MAX_VAL)
		{
			x = MAX_VAL;
			cout << "Przeroczono wartosc MAX_VAL" << endl;
			return x;
		}
		x = a;
		return x;
	}
	const double& SetY(const double a)
	{
		if (a > MAX_VAL)
		{
			y = MAX_VAL;
			cout << "Przeroczono wartosc MAX_VAL" << endl;
			return y;
		}
		y = a;
		return y;
	}


private:
	double x, y;
	static int indx;  //zmienna statyczna - fajna rzecz
	int nr;
};

//Inicjalizacja zmiennej statycznej
int Wektor2D::indx = 0;

//Operatory dwuargumentowe
Wektor2D operator + (const Wektor2D &w1, const Wektor2D &w2)
{
	Wektor2D w;
	w.x = w1.x + w2.x;
	w.y = w1.y + w2.y;
	return w;
}



void main(void)
{	
	Wektor2D v1(10, 20);
	Wektor2D v2 = v1;
	Wektor2D v3(v1);
	Wektor2D v4;
	v1.Drukuj();
	v2.Drukuj();
	v3.Drukuj();
	v4.Drukuj();
	v4 = v1 + v2;
	v4.Drukuj();
	v3 += v3;
	v3.Drukuj();
	v4.SetX(50);
	v4.Drukuj();
	Wektor2D v5(v4.GetY(), v3.GetX());
	v5.Drukuj();
}
