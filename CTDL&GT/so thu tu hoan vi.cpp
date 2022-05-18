#include <bits/stdc++.h>
using namespace std;

int n, dem=0; 
int a[10000], x[10000];
int check[10000]={0};


void ktra(){
	int cnt=0;
	for(int l=1;l<=n;l++){
		if(a[l]==x[l])
			cnt++;
	}
	if(cnt==n) cout<<dem<<endl;
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(check[j]==0){
			x[i]=j;
			check[j]=1;
			if(i==n){
				dem++;
				ktra();
			
			}
			else Try(i+1);
			check[j]=0;		
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		Try(1);
		dem=0;
	}	
}