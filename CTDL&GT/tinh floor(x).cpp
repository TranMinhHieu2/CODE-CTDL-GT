#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while (t--){
		long n, x;
		cin>>n>>x;
		int res=-1;
		vector<long long> a(n+5);
		for(long i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]<=x)
				res=i;
		}
		cout<<res<<endl;
	}
}