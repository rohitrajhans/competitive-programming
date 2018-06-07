#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double calc( double, double, double);

int main()
{
	int hh, mm;
	double h, d, c, n, k, r1, r2, t,r;
	cin>> hh>> mm>> h >> d >>c >> n;
	if( hh>=20 ) {
		r = calc(h, 0.8*c, n);
	}
	else {
		t = 1200 - hh*60 - mm;
		k = h + t*d;
		r1 = calc( h, c, n);
		r2 = calc( k, 0.8*c, n);
		if( r1>r2 ) r = r2; 
		else r = r1;
	}
	std::cout<< std::fixed << std::setprecision(3) <<r<<endl;
	return 0;
}

double calc( double h, double c, double n) {
	double p;
	p = h/n;
	if (floor(p) != p) p = floor(p) + 1;
	return c*p; 
}