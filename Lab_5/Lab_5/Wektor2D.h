#ifndef WEKTOR2D_H
#define WEKTOR2D_H

#include<iostream>
#include<iomanip> //manipulowanie wydrukiem

using namespace std;

template <class T>
class Wektor2D
{
	friend ostream& operator<<(ostream &o, const Wektor2D<T> &w);
	friend bool operator > (const Wektor2D<T> &w1, const Wektor2D<T> &w2);
public:
	Wektor2D<T>();
	Wektor2D<T>(const T& xx, const T& yy);

	
	void operator+=(Wektor2D<T>& v);
	void Drukuj();
	
private:
	T x;
	T y;
};

template <class T>
ostream& operator<<(ostream& o, const Wektor2D<T>& w);

void Wektor2D<int>::Drukuj();

template <class T>
bool operator > (const Wektor2D<T> &w1, const Wektor2D<T> &w2);

#endif