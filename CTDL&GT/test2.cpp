#include <bits/stdc++.h>
using namespace std;
int n, k, x[100];

void Try(int i){
	for(int j=n-k+i; j>=x[i-1]+1;j--){
		x[i]=j;
		if(i==k){
			for(int l=1;l<=k;l++){
				cout<<x[l]<<" ";
			}
			cout<<endl;
		}
		else Try(i+1);
		
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}
}