#include<iostream>
using namespace std;

int main(){
    int t,n,i,min;
    cin >> t;
    while(t--){
        int k=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        min=a[0];
        for(i=0;i<n;i++){
            if(a[i] < min){
                min = a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if( a[i] % min!=0 ) {
                cout<<"0"<<endl;
                break;
            }
            else if( a[i] % min==0)
                k++;
        }
        if( k==n && min!=1){
            cout<<"-1"<<endl;
        }
        else if( k==n && min==1){
            cout<<"0"<<endl;
        }
    }
    return 0;
}
