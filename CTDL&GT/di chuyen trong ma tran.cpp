#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int a[m+1][n+1];
		int d[m+1][n+1];
		for(int i=0;i<=m;i++){
			for(int j=0;j<=n;j++){
				a[i][j]=d[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		d[1][1]=1;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(i==1 && j==1)
					continue;
				d[i][j]=d[i-1][j] + d[i][j-1];	
			}
		}
		cout<<d[m][n]<<endl;
	}
}