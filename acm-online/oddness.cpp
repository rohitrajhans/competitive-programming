#include<iostream>
using namespace std;
int check(int);

int main()
{
				int n, i=0;
				cin >> n;
				char name1[] = "Mahmoud";
				char name2[] = "Ehab";
			  int j = check(n);
				if( j%2 == 0 ) {
								cout<<name1<<endl;
				}

				else {
								cout<<name2<<endl;
				}
				return 0;
}

int check(int n) {
				if( n<1 ) return 0;
				else if( n==1 ) return 1;
				else if( n%2 != 0 ) return 1;
				else return 0;
}
