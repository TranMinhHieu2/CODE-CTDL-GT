#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long n, k, cnt=0;
		cin>>n>>k;
		long long a[5001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long res=k-a[i]-a[j];
				cnt+=lower_bound(a+j+1,a+n,res)-(a+j+1);
			}
		}
		cout<<cnt<<endl;
	}
}