#include <bits/stdc++.h>
using namespace std;
void ktra(int n, int a[]){
	for(int i=1;i<=n;i++){
		if(a[i]!=i && a[i]!=n-i+1){
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;	
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		ktra(n,a);
	}
}