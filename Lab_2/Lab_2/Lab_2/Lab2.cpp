#include<iostream>
#include<iomanip> //manipulowanie wydrukiem

using namespace std;
const double MAX_VAL = 100;

// -------------------------------------------------------------
// deklaracja klasy
class Wektor2D
{
	friend void operator<<(ostream &o, const Wektor2D &w);
public:
	// konstruktor domyœlny
	Wektor2D() :x(0), y(0) { }
	// konstruktor parametrowy
	Wektor2D(const double& xx, const double& yy) : x(xx), y(yy) { }

	// operator +=
	void operator+=(Wektor2D& v)
	{
		x += v.x;
		y += v.y;
	}


	// drukowanie wartoœci sk³adowych klasy
	void Drukuj()
	{
		cout.setf(ios::fixed);
		cout << "wektor: [";
		cout.precision(3);
		cout.width(6);
		cout << x << ",";
		cout.precision(4);
		cout.width(7);
		cout << y << "]" << endl;
	}
private:
	double x;
	double y;
};

void operator<<(ostream& o, const Wektor2D& w)
{
	o.setf(ios::fixed);
	o << "wektor: [";
	o.precision(3);
	o.width(6);
	o << w.x << ",";
	o.precision(4);
	o.width(7);
	o << w.y << "]" << endl;
}

void operator<<(ostream& o, const Wektor2D& w)
{
	o.setf(ios::fixed);
	o << "wektor: [";
	o.precision(3);
	o.width(6);
	o << w.x << ",";
	o.precision(4);
	o.width(7);
	o << w.y << "]" << endl;
}
// -------------------------------------------------------------
// deklaracja klasy
class Pojemnik
{
public:
	// konstruktor domyœlny
	Pojemnik(): mdata(NULL), msize(0) { }
	// destruktor
	~Pojemnik(){ }

	void Dodaj(const Wektor2D& v)
	{
		Wektor2D *temp = new Wektor2D[msize+1];

		for (int i = 0; i < msize; i++) { temp[i] = mdata[i]; }
		if (mdata!=NULL) delete[] mdata;
		temp[msize]= v;
		msize++;
		mdata = temp;
	}
	void DrukujWszystko()
	{
		for (int i = 0; i < msize; i++) { mdata[i].Drukuj(); }
	}
	Wektor2D Suma()
	{
		Wektor2D Sum;
		for (int i = 0; i < msize; i++) { Sum+= mdata[i]; }
		return Sum;
	}

private:
	Wektor2D *mdata;
	int msize;
};

void main(void) {

	Wektor2D v1(10, 20);
	Wektor2D v2 = v1;
	Pojemnik poj;
	poj.Dodaj(v1);
	poj.Dodaj(v2);
	poj.Dodaj(Wektor2D(3, 2));
	poj.Dodaj(Wektor2D(8, 4));
	poj.DrukujWszystko();
	cout << "Suma: " << poj.Suma();
	cout << v1;
	cout << v1 << v2;
}



