#include<iostream>
#include<math.h>

using namespace std;

int encodeInteger( int x, int n) {
    n =  n << ( 1<< ( 1<< (1 << 1)));
    x = x | n;
    return x;
}

void encodeArray( int *a, int *b, int n) {
    for( int i = 0; i<n; i++) {
        a[i] = encodeInteger( a[i], b[i] );
    }
}

int main() {
    int n;
    cout<<" Enter number of elements in array: ";
    cin>>n;
    int a[n], b[n];
    for( int i = 0; i<n; i++) {
        cout<<"a["<< i <<"]: ";
        cin >> a[i];
    }
    for( int i = 0; i<n; i++) {
        cout<<"b["<< i <<"]: ";
        cin >> b[i];
    }
    encodeArray( a, b, n);
    for( int i = 0; i<n; i++)
        cout<<a[i]<<endl;
    return 0;

}
