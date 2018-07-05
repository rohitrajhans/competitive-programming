#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,i;
		double ans=0;
		cin>>n;
		int p[n],q[n],d[n];
		for(i=0;i<n;i++){
			cin>>p[i]>>q[i]>>d[i];
		}
		for(i=0;i<n;i++){
			double hold = double(p[i]*(100+d[i])) / double(100);
			double fi =  double(hold*(100-d[i])) / double(100);
			double diff = p[i] - fi;
			ans+=(diff*q[i]);
		}
		printf("%f\n",ans);
	}
	return 0;
}
