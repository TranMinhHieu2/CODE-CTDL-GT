#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long a[n], b[m];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int j=0;j<m;j++)
			cin>>b[j];
		sort(b,b+n);
		cout<<a[n-1]*b[0]<<endl;
	}
}
