#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		long sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		k=min(k, n-k);
		for(int i=0;i<k;i++){
			sum-=2*a[i];
		}
		cout<<sum<<endl;
	}
}