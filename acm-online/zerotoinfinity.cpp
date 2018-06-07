#include<iostream>
using namespace std;

int main() {
	int t,x,y,cn,ce,cs,cw,p,i,cost,temp,count;
	cin >> t;
	for( i=0; i<t; i++) {
		cost = 0;
		count = x + y;
		cin >> x >> y >> cn >> cs >> ce >> cw >> p;
		if( x>0 && y>0 )
			cost += x*ce + y*cn;
		else if ( x<0 && y>0 )
			cost += x*cw + y*cn;
		else if ( x<0 && y<0 )
			cost += x*cw + y*cs;
		else if ( x>0 && y<0 )
			cost += x*ce + y*cs;
		temp = p - cost;
		if ( temp < 0 ) {
			cout << -1;
			return 0;
		}
		else if ( temp == 0 ) {
			cout << count;
			return 0;
		}
		
	}
	return 0;
}