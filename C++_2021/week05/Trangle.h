#pragma once

struct point {
	int x, y;
};

class Trangle
{
private:
	point pA, pB, pC;
	double La, Lb, Lc;
public:
	Trangle(point _pA, point _pB, point _pC) : pA(_pA), pB(_pB), pC(_pC) {}
	double getlineA();
	double getlineB();
	double getlineC();
	double distance(point a, point b);
	bool verification();
	double heron();
	~Trangle()
	{

	}
};

