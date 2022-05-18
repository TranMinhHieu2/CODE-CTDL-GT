#include <bits/stdc++.h>
using namespace std;
int n, c[100001];
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		c[1]=a[1];
		c[2]=max(a[1],a[2]);
		for(int i=3; i<=n;i++){
			c[i]=max(c[i-2]+a[i],c[i-1]);
		}
		cout<<c[n]<<endl;
	}
}