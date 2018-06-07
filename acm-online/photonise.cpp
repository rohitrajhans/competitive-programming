#include<iostream>
using namespace std;

int main() {
	int n, i, k;
	long long int u;
	float temp, eff=0;
	cin >> n>> u;
	long long int arr[n];
	for ( i = 0; i<n; i++) 
		cin >>arr[i];
	for( i=0; i<n-2; i++) {
		for( k = i+2; k<n; k++) {
			if( (arr[k] - arr[i]) <= u ) {
				temp = (float)(arr[k] - arr[i+1]) / (arr[k] - arr[i]);
				if(temp>eff)
					eff=temp;
			}
		}
	}
	if( eff==0 ) {
		cout<< -1; 
		return 0; 
	}

	else cout<<eff;
	return 0;
}