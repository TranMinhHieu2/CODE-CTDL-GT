#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while (t--){
		int n;
		cin>>n;
		int res=0;
		int a[n];
		for(long i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				res++;
			}
		}
		cout<<res<<endl;
	}
}