#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, k; 
		long long cnt=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			cnt+=lower_bound(a+i+1,a+n,a[i]+k)-(a+i+1);
		}
		cout<<cnt<<endl;
	}
}