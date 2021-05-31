#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define DIF(a, b) a-b
#define SUM(a, b) a+b

struct point {
	int x, y;
};

struct radPointP {
	double x, y;
};


class Figure {
private:
protected:
	double res;
public:
	virtual double area() = 0;
	virtual double distance(point a, point b) = 0;
	virtual string getPoint() { return ""; }
	virtual double getRad() { return 0.0; }
	double getRes();
};

class FigurePtr {
private:
	Figure* fptr = nullptr;
public:
	FigurePtr(Figure* _fptr) : fptr(_fptr) {}
	double operator+(FigurePtr& fp);
	double area();
	string getPoint();
	~FigurePtr()
	{
		delete fptr;
	}
};


class Tangle : public Figure {
private:
	point pA, pB, pC;
public:
	Tangle(point _pA, point _pB, point _pC) : pA(_pA), pB(_pB), pC(_pC) {}
	double area() override;
	double distance(point a, point b) override;
	double operator+ (const Tangle& t) const;
};


class Rectangle : public Figure {
private:
	point pA, pB, pC, pD;
public:
	Rectangle(point _pA, point _pB) : pA(_pA), pB(_pB) {
		pC = { _pA.x, _pB.y };
		pD = { _pB.x, _pA.y };
	}
	double area() override;
	double distance(point a, point b) override;

	double operator+ (const Rectangle& t) const;
};

class Circle : public Figure {
private:
	point pA, pB;
	radPointP rP;
	double rad;
public:
	Circle(point _pA, point _pB) : pA(_pA), pB(_pB) {
		rP = { PointC(_pA, _pB) };
		rad = distance(_pA, _pB);
	}
	radPointP PointC(point _pA, point _pB);
	string getPoint() override;
	double getRad() override;
	double area() override;
	double distance(point a, point b) override;
};