#include "Wektor2D.h"


// konstruktor domyœlny
template <class T>
Wektor2D<T>::Wektor2D<T>() :x(0), y(0) { }

// konstruktor parametrowy
template <class T>
Wektor2D<T>::Wektor2D<T>(const T& xx, const T& yy) : x(xx), y(yy) { }

// operator +=
template <class T>
void Wektor2D<T>::operator+=(Wektor2D<T>& v)
{
	x += v.x;
	y += v.y;
}


// drukowanie wartoœci sk³adowych klasy
template <class T>
void Wektor2D<T>::Drukuj()
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

void Wektor2D<int>::Drukuj()
{
	cout.setf(ios::fixed);
	cout << "wektor: [";
	cout << x << ",";
	cout << y << "]" << endl;
}

template <class T>
ostream& operator<<(ostream& o, const Wektor2D<T>& w)
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

template <class T>
bool operator > (const Wektor2D<T> &w1, const Wektor2D<T> &w2)
{
	return ((w1.x*w1.x + w1.y*w1.y)>(w2.x*w2.x + w2.y*w2.y));
}