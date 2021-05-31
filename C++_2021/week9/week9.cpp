#include <iostream>
#include "Figure.h"

point inPoint() {
	int x, y;
	cout << "X Y : ";
	cin >> x >> y;
	cin.ignore();
	return { x, y };
}

void TANGLE() {
	cout << "Input Point" << endl;
	point p1 = inPoint();
	point p2 = inPoint();
	point p3 = inPoint();
	Figure *t1 = new Tangle(p1, p2, p3);
	FigurePtr tp1(t1);

	cout << "Input Point" << endl;
	p1 = inPoint();
	p2 = inPoint();
	p3 = inPoint();
	Figure* t2 = new Tangle(p1, p2, p3);
	FigurePtr tp2(t2);

	cout << "t1 area : " << tp1.area() << endl;
	cout << "t2 area : " << tp2.area() << endl;
	cout << "SUM : " << tp1 + tp2 << endl;
}

void RETANGLE() {
	cout << "Input Point" << endl;
	point p1 = inPoint();
	point p2 = inPoint();
	Figure* r1 = new Rectangle(p1, p2);
	FigurePtr rp1(r1);
	cout << "Input Point" << endl;
	p1 = inPoint();
	p2 = inPoint();
	Figure* r2 = new Rectangle(p1, p2);
	FigurePtr rp2(r2);
	cout << "t1 area : " << rp1.area() << endl;
	cout << "t2 area : " << rp2.area() << endl;
	cout << "SUM : " << rp1 + rp2 << endl;
}

void CIRCLE() {
	cout << "Input Point" << endl;
	point cp1 = inPoint();
	point cp2 = inPoint();
	Figure* c = new Circle(cp1, cp2);
	FigurePtr cp(c);
	cout << "c1 center Pointer : " << cp.getPoint() << endl;
	cout << "c1 area : " << cp.area() << endl;
}

int main(void) {
	cout << "Tangle" << endl;
	TANGLE();
	cout << endl;

	cout << "ReTangle" << endl;
	RETANGLE();
	cout << endl;

	cout << "Circle" << endl;
	CIRCLE();
	return 0;
}
