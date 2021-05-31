#include "Figure.h"

double Tangle::area() {
	double lenA = distance(pA, pB);
	double lenB = distance(pB, pC);
	double lenC = distance(pC, pA);
	double s = (lenA + lenB + lenC) / 2.0;
	res = sqrt(s * (s - lenA) * (s - lenB) * (s - lenC)) / 2.0;
	return res;
}

double Tangle::distance(point a, point b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double Tangle::operator+(const Tangle& t) const {
	return  this->res + t.res;
}

double Rectangle::area() {
	double lenX = distance(pA, pC);
	double lenY = distance(pB, pC);
	res = lenX * lenY;
	return res;
}

double Rectangle::distance(point a, point b) {
	int len = 0;
	if (a.x != b.x) {
		if (a.x > b.x) len = DIF(a.x, b.x);
		else len = DIF(b.x, a.x);
	}
	else {
		if (a.y > b.y) len = DIF(a.y, b.y);
		else len = DIF(b.y, a.y);
	}

	return len;
}

double Rectangle::operator+(const Rectangle& t) const {
	return  this->res + t.res;
}

radPointP Circle::PointC(point _pA, point _pB) {
	double sumX = SUM((double)_pA.x, (double)_pB.x);
	double sumY = SUM((double)_pA.y, (double)_pB.y);
	double x = sumX/2.0;
	double y = sumY/2.0;
	cout << x << endl;
	cout << y << endl;
	return { x, y };
}

string Circle::getPoint() {
	int i = 0;
	string x = to_string(rP.x);
	i = x.find(".");
	x = x.substr(0, i + 3);
	string y = to_string(rP.y);
	i = y.find(".");
	y = y.substr(0, i + 3);
	string Pointc = x + ", " + y;

	return Pointc;
}

double Circle::getRad() {
	return rad;
}

double Circle::area() {
	res = 3.14 * rad * rad;
	return res;
}

double Circle::distance(point a, point b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)) / 2;
}


double FigurePtr::operator+(FigurePtr& fp){
	return this->fptr->getRes() + fp.fptr->getRes();
}

double FigurePtr::area(){
	return this->fptr->area();
}

string FigurePtr::getPoint(){
	return this->fptr->getPoint();
}

double Figure::getRes(){
	return res;
}


