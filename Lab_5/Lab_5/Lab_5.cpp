#include<iostream>
#include"Wektor2D.h"

using namespace std;

class Except {
public:
	Except() {}
	virtual void PrintInfo(void) = 0;
};
class Except1 :public Except {
public:
	Except1() {}
	void PrintInfo(void) {
		cout << "To jest wyjatek typu Except1" << endl;
	}
};
class Except2 : public Except {
public:
	Except2() {}
	void PrintInfo(void) {
		cout << "Wyjatek rzucono w linii " << __LINE__ << endl;
	}
};
void f2(int a) {
	throw a;
}
void f(int a) {
	if(a>0) 	throw "To jest wyjatek!";
	else f2(a);
}
void f3() {
	throw Except1();
}
void f4() {
	throw Except2();
}
void f5() {
	throw 1.3;
}

template <class T, class T2>
T mymax(T x, T2 y) {
	if (x > y) return x;
	else return y;
}

template <class T, class T2>
T mymin(T x, T2 y) {
	if (x < y) return x;
	else return y;
}


void main(void)
{
	try {
		//f(1);
		//f(-1);
		//f3();
		//f4();
		//f5();
		cout << mymax(5.3, 12) << endl;
		cout << mymax(Wektor2D<double>(1., 2.), Wektor2D<double>(3., 4.)) << endl;
	}
	catch (char* s) {
		cout << s << endl;
	}
	catch (int a) {
		cout << "Liczba " << a << endl;
	}
	catch (Except& e) {
		e.PrintInfo();
	}
	catch (...) {
		cout << "Ja nie znaju etowo wyjatka"<<endl;
	}
}
