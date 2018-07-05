#include <iostream>
using namespace std;

int compute_red(char *arr , int m) {
    int i, cost=0;
    for( i = 0; i<m; i++) {
        if( i%2==0 ) {
            switch( arr[i] ) {
                case 'R' :
                case 'r' :
                cost+=0;
                break;
                case 'G' : 
                case 'g' :
                cost+=3;
                break;
            }
        }
        if( i%2 != 0 ) {
            switch( arr[i] ) {
                case 'R' : 
                case 'r' :
                cost+=5;
                break;
                case 'G' : 
                case 'g' :
                cost+=0;
                break;
            }
        }
    }
    return cost;
}

int compute_green(char *arr , int m) {
    int i, cost=0;
    for( i = 0; i<m; i++) {
        if( i%2==0 ) {
            switch( arr[i] ) {
                case 'R' :
                case 'r' :
                cost+=5;
                break;
                case 'G' :
                case 'g' :
                cost+=0;
                break;
            }
        }
        if( i%2 != 0 ) {
            switch( arr[i] ) {
                case 'R' :
                case 'r' :
                cost+=0;
                break;
                case 'G' :
                case 'g':
                cost+=3;
                break;
            }
        }
    }
    return cost;
}

int main() {
	// your code goes here
	int t, m , n, i ,j, k;
	cin >> t;
	for ( int j = 0; j<t; j++ ) {
	    cin >> n >> m;
    	char arr[m];
    	int cost1=0, cost2=0, cost = 0, flag=0;
    	for( i = 0; i<n; i++) {
    	    for(k = 0; k<m; k++ ) 
    	        cin >> arr[k];
    	    if( i%2 == 1 ) {
    	        cost1 += compute_green( arr, m);
    	        cost2 += compute_red( arr, m);
    	    }
    	    if( i%2 == 0 ) {
    	        cost2 += compute_green( arr, m);
    	        cost1 += compute_red( arr, m);
    	    }
    	}
    	cost = (cost1 <= cost2) ? cost1 : cost2;
        cout << cost << endl;
	}
	return 0;
}
