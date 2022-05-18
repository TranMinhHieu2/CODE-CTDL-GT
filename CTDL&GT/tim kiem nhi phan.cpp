#include <bits/stdc++.h>
using namespace std;
int bs(int a[], int n, int k){
	int l=0, r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==k)
			return m+1;
		else if(a[m]<k){
			l=m+1;
		}
		else r=m-1;
	}
	if(l>r) return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int res=bs(a,n,k);
		if(res>0) cout<<res<<endl;
		else cout<<"NO"<<endl;
	}
}