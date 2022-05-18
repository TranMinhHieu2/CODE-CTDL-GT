#include <bits/stdc++.h>
using namespace std;

long long c[1001][1001];
const int mod=1e9 + 7;

void kq(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<=i;j++){
			if(i==0 || j==0)
				c[i][j]=1;
			else if(j==1 || j==i-1){
				c[i][j]=i;
			}
			else c[i][j]=c[i-1][j-1]+c[i-1][j];
			c[i][j]=c[i][j]%mod;
		}
	}
}

int main(){
	int t; cin>>t; 
	kq();
	while(t--){
		int n, k;
		cin>>n>>k;
		cout<<c[n][k]<<endl;
	}
}