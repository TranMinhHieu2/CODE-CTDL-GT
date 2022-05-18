#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], x[100];
int check[100]={0};
int dem=0;

void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		if(check[j]==0){
			x[i]=j;
			check[j]=1;
			if(i==k){
				dem++;
				int cnt=0;
				for(int l=1;l<=k;l++){
					if(a[l]==x[l]){
						cnt++;
					}
				}
				if(cnt==k) cout<<dem<<endl;
			}
			else Try(i+1);
			check[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		Try(1);
		dem=0;
	}
}