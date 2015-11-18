#include "Wektor2D.h"


// konstruktor domyœlny
Wektor2D::Wektor2D() :x(0), y(0) { }
// konstruktor parametrowy
Wektor2D::Wektor2D(const double& xx, const double& yy) : x(xx), y(yy) { }

// operator +=
void Wektor2D::operator+=(Wektor2D& v)
{
	x += v.x;
	y += v.y;
}


// drukowanie wartoœci sk³adowych klasy
void Wektor2D::Drukuj()
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


ostream& operator<<(ostream& o, const Wektor2D& w)
{
	o.setf(ios::fixed);
	o << "wektor: [";
	o.precision(3);
	o.width(6);
	o << w.x << ",";
	o.precision(4);
	o.width(7);
	o << w.y << "]" << endl;
	return o;
}

bool operator > (const Wektor2D &w1, const Wektor2D &w2)
{
	return ((w1.x*w1.x + w1.y*w1.y)>(w2.x*w2.x + w2.y*w2.y));
}