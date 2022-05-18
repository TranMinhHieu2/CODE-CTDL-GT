#include <bits/stdc++.h>
using namespace std;

int n, dem=0; 
int a[10000], x[10000];
int check[10000]={0};

void Try(int i){
	for(int j=1; j<=n; j++){
		if(check[j]==0){
			x[i]=j;
			check[j]=1;
			if(i==n){
				for(int l=1;l<=n;l++){
					cout<<a[x[l]]<<" ";
				}
				cout<<endl;
			}
			else Try(i+1);
			check[j]=0;		
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	Try(1);
}