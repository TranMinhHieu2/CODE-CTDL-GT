#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		long long n; cin>>n;
		long long a[n];
		for(long long i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long count=0;
		for(long long i=0;i<n-1;i++){
			if(a[i]+1!=a[i+1]){
				for(int j=a[i]+1;j<a[i+1];j++)
					count++;		
			}
		}
		cout<<count<<endl;
	}
}
