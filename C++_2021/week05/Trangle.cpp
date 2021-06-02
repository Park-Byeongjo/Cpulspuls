#include "Trangle.h"
#include <math.h>

double Trangle::getlineA(){
	La = distance(pA, pB);
	
	return La;
}
double Trangle::getlineB()
{
	Lb = distance(pB, pC);
	return Lb;
}
double Trangle::getlineC()

{	Lc = distance(pC, pA);
	return Lc;
}
double Trangle::distance(point a, point b){
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool Trangle::verification()
{
	if ((La+Lb>Lc) && (Lb+Lc > La) && (Lc+La > Lb)) {
		return true;
	}
	else {
		return false;
	}
}


double Trangle::heron()
{
	double s = (La + Lb + Lc) / 2.0;
	return sqrt(s * (s - La) * (s - Lb) * (s - Lc)) / 2.0;
}
