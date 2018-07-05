#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    for( int i = 0; i<t; i++) {
        cin >> n;
        int a[n], b[n], c;
        for( int j = 0; j<n; j++) {
            cin >> c;
            int r = c/pow(2,16);
            a[j] = r;
            b[j] = c - pow(2,16)*r;
        }
        cout<< "Case " << i+1 <<":"<< endl;
        for( int j = 0; j<n; j++)
            cout<<b[j] << " ";
        cout << endl;
        for( int j = 0; j<n; j++)
            cout<<a[j] << " ";
        cout << endl;
    }
    return 0;
}
