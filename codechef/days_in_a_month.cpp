#include<iostream>
#include<string.h>

using namespace std;

int findDay(char * str) {
    if( !strcmp(str, "mon"))
        return 0;
    if( !strcmp(str, "tues"))
        return 1;
    if( !strcmp(str, "wed"))
        return 2;
    if( !strcmp(str, "thurs"))
        return 3;
    if( !strcmp(str, "fri"))
        return 4;
    if( !strcmp(str, "sat"))
        return 5;
    if( !strcmp(str, "sun"))
        return 6;

}

int main() {
    int t,d,n, a[7],temp,b;
    cin >> t;
    char str[6] = {0};
    while(t--) {
        cin >> n >> str;
        d = findDay(str);
        for( int i=0;i<7;i++) {
            int c = 0;
            b = 7 - d + i;
            if( b>=7) b -= 7;
            temp = n - b;
            while( temp > 0) {
                temp -= 7;
                c++;
            }
            a[i] = c;
        }
        for(int i=0; i<7;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

}
