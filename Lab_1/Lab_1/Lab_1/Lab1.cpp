#include<iostream>
#include<iomanip> //manipulowanie wydrukiem

using namespace std;
const double MAX_VAL = 100;

class Wektor2D
{
	friend Wektor2D operator + (const Wektor2D &w1, const Wektor2D &w2);
public:
	Wektor2D() : x(0.), y(0.) // Konstruktor domyœlny
	{
		//cout << "Domyslny ";
		//Drukuj();
	} 
	Wektor2D(const double &a, const double &b)  // Konstruktor parametryczny
	{
		x = a;
		y = b;
		//cout << "Parametryczny ";
		//Drukuj();
	}
	Wektor2D(const Wektor2D &a) // Konstruktor kopiuj¹cy
	{
		x = a.x;
		y = a.y;
		//cout << "Kopiujacy ";
		//Drukuj();
	}
	~Wektor2D()
	{
		//cout << "Destruktor ";
		//Drukuj();
	}
	void Drukuj()
	{
		cout << setprecision(6) << "[ " << x << ", " << y << " ]" << endl;
	}
	const Wektor2D& operator += (const Wektor2D &w)
	{
		x += w.x;
		y += w.y;
		return *this;
	}
	const Wektor2D& operator += (const int &a)
	{
		x += a;
		y += a;
		return *this;
	}
	const double& GetX() const { return x; }
	const double& GetY() const { return y; }

	const double& SetX(const double a)
	{
		if (a > MAX_VAL)
		{
			x = MAX_VAL;
			cout << "Przeroczono wartosc MAX_VAL" << endl;
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
		}
		y = a;
		return y;
	}

private:
	double x, y;
};

Wektor2D operator + (const Wektor2D &w1, const Wektor2D &w2)
{
	Wektor2D w;
	w.x = w1.x + w2.x;
	w.y = w1.y + w2.y;
	return w;
}


void main(void)
{
	cout << "Hello!" << endl;
	Wektor2D v1(10, 20);
	Wektor2D v2 = v1;
	Wektor2D v3(v1);
	Wektor2D v4;
	Wektor2D v5;
	v5 += 10;
	Wektor2D v6 = v1 + v2;
	v5.Drukuj();
	v6.Drukuj();
	v3.SetX(50);
	v3.Drukuj();
	//v1.Drukuj();
	//v2.Drukuj();
	//v3.Drukuj();
	//v4.Drukuj();
}
