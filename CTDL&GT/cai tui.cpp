#include <bits/stdc++.h>
using namespace std;

void kq(){
	int n, v;
	cin>>n>>v;
	vector<int> a(n+1);
	vector<int> c(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	vector<vector<int> >f(n+1,vector<int>(v+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			if(j>=a[i]){
				f[i][j]=max(f[i-1][j],f[i-1][j-a[i]]+c[i]);
			}
			else f[i][j]=f[i-1][j];
		}
	}
	cout<<f[n][v]<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		kq();
	}
}