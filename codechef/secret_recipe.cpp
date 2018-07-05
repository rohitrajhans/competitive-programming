#include<iostream>

using namespace std;

int main() {
    int t, x1, x2, x3, v1, v2, d1, d2;
    float t1, t2;
    cin >> t;
    while( t-- ) {
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        d1 = x3 - x1;
        d2 = x2 - x3;
        t1 = (float)d1/v1;
        t2 = (float)d2/v2;
        if( t1 == t2) {
            cout << "Draw" << endl;
            continue;
        }
        if ( t1 < t2 ) {
            cout << "Chef" << endl;
            continue;
        }
        if ( t1 > t2 ) {
            cout << "Kefa" << endl;
            continue;
        }
    }
    return 0;
}
