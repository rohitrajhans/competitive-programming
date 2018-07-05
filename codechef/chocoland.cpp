#include<iostream>
using namespace std;

int main() {
    int t,n,k,s,choc,max_choc,d,q,r;
    cin >> t;
    while( t-- ) {
        int c = 0, m=0;
        cin >> n >> k >> s;
        choc = k*s;
        q = s/7;
        d = s - q;
        max_choc = d*n;
        if( s==0 ) {
            cout<<"0"<<endl;
            continue;
        }
        if( max_choc < choc || choc==0) {
            cout<< "-1" << endl;
            continue;
        }
        else {
            while( m < choc ) {
                c++;
                m += n;
            }
            cout << c << endl;
        }
    }
    return 0;
}
