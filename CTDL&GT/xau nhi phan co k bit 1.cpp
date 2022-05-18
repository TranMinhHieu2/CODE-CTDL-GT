#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int cnt=0;
			for(int j=1;j<=n;j++){
				if(a[j]==1)
					cnt++;
			}
			if(cnt==k){
				for(int j=1;j<=n;j++){
					cout<<a[j];
				}
				cout<<endl;
			}
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