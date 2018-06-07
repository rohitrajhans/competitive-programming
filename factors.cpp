// Number of factors of 10 in n! 

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, p=1, i=0, d=0;

	cout << "Enter the number: "<<endl;
	cin>> n;
	while(pow(5,p)<=n) {
		i = p;
		p++;
	}
	
	p=1;

	for(int j=0; j<i; j++) {
		int c=1;
		while(c*pow(5,p) <= n) {
			c++;
			d++;
		}
		p++;
	}

	cout<< "Number of factors of 10 in "<<n<<"! is: "<<d<<endl;
	return 0;

}
