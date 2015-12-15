#ifndef WEKTOR2D_H
#define WEKTOR2D_H

#include<iostream>
#include<iomanip> //manipulowanie wydrukiem

using namespace std;

class Wektor2D
{
	friend ostream& operator<<(ostream &o, const Wektor2D &w);
	friend bool operator > (const Wektor2D &w1, const Wektor2D &w2);
	friend bool operator < (const Wektor2D &w1, const Wektor2D &w2);

public:
	Wektor2D();
	Wektor2D(const double& xx, const double& yy);

	
	void operator+=(Wektor2D& v);
	void Drukuj();
	
private:
	double x;
	double y;
};

ostream& operator<<(ostream& o, const Wektor2D& w);
bool operator > (const Wektor2D &w1, const Wektor2D &w2);
bool operator < (const Wektor2D &w1, const Wektor2D &w2);

#endif