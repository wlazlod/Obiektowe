#include<iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

const double PI = 2*atan(1.);

class Point
{
public:
	Point();
	Point(const Point& p);
	Point(const double& a, const double& b);
	~Point();

	double Length(const Point &p);
	double Length2(const Point p);
	const double GetX();
	const double GetY();


private:
	double x;
	double y;
};

Point::Point() : x(0.), y(0.) {}
Point::Point(const Point& p) : x(p.x), y(p.y) { cout << "Konstruktor kopiuj¹cy" << endl; }
Point::Point(const double& a, const double& b) : x(a), y(b) {}
Point::~Point() {}
double Point::Length(const Point &p) { return sqrt((p.x - x)*(p.x - x) + (p.y - y)*(p.y- y)); }
double Point::Length2(const Point p) { return sqrt((p.x - x)*(p.x - x) + (p.y - y)*(p.y - y)); }
const double Point::GetX() { return x; }
const double Point::GetY() { return y; }

class Shape
{
public:
	Shape();
	~Shape();
	virtual void PrintName();
	virtual double Area() = 0;
private:
};

Shape::Shape() {}
Shape::~Shape() {}
void Shape::PrintName() { cout << "Class Shape" << endl; };

class Circle: public Shape
{
public:
	Circle();
	Circle(Point p1, Point p2);
	~Circle();
	double Area();
	void PrintName();

private:
	Point Center;
	Point Radial;
};
Circle::Circle(): Center(0.,0.), Radial(0., 0.) {}
Circle::Circle(Point p1, Point p2): Center(p1), Radial(p2)  {}
Circle::~Circle() {}
double Circle::Area() { return PI*Center.Length(Radial)*Center.Length(Radial); }
void Circle::PrintName() { cout << "class Circle" << endl; }

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(Point a1, Point a2, Point a3);
	~Rectangle();
	double Area();
	void PrintName();

private:
	Point p1, p2, p3, p4;
};
Rectangle::Rectangle() : p1(0,0), p2(0,0), p3(0,0), p4(0,0) {}
Rectangle::Rectangle(Point a1, Point a2, Point a3) : p1(a1), p2(a2), p3(a3), p4(Point(a2.GetX() + a1.GetX() - a3.GetX(), a2.GetY() + a1.GetY() - a3.GetY())) {}
Rectangle::~Rectangle(){}
double Rectangle::Area(){ return p3.Length(p1)*p2.Length(p1); }
void Rectangle::PrintName() { cout << "class Rectangle" << endl; }

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(Point a1, Point a2, Point a3);
	~Triangle();
	double Area();
	void PrintName();

private:
	Point p1, p2, p3;
};
Triangle::Triangle() : p1(0, 0), p2(0, 0), p3(0, 0) {}
Triangle::Triangle(Point a1, Point a2, Point a3) : p1(a1), p2(a2), p3(a3) {}
Triangle::~Triangle() {}
double Triangle::Area() { return 0.25*sqrt((p1.Length(p2)+p2.Length(p3)+p3.Length(p1))*(p1.Length(p2) - p2.Length(p3) + p3.Length(p1))*(p1.Length(p2) + p2.Length(p3) - p3.Length(p1))*(- p1.Length(p2) + p2.Length(p3) + p3.Length(p1))); }
void Triangle::PrintName() { cout << "class Triangle" << endl; }


void main(void)
{
	Point p1(2, 4), p2(2, 2), p3(5, 21);
	cout << p1.Length(p2) << endl;
	Circle cir1(p1, p2);

	Shape *tabp[3];
	tabp[0] = new Circle(p1, p2);
	tabp[1] = new Triangle(p1, p2, p3);
	tabp[2] = new Rectangle(p1, p2, p3);

	int count = 0;
	for (int i = 0; i < 3; ++i)
	{
		tabp[i]->PrintName();
		cout << tabp[i]->Area() << endl;
		if (dynamic_cast<Circle*>(tabp[i])) ++count;
	}
	cout << "Count = " << count << endl;

	Point pa(10, 20), pb(30, 40);
	cout << "Length()" << endl;
	cout << pa.Length(pb) << endl;
	cout << "Length2()" << endl;
	cout << pa.Length2(pb) << endl;
}