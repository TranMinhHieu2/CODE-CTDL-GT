#include <bits/stdc++.h>
using namespace std;

int n, a[100];
bool check[100];

void ktra(){
	for(int i=1;i<n;i++){
		if(abs(a[i]-a[i+1])==1)
			return;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!check[j]){
			check[j]=true;
			a[i]=j;
			if(i==n){
				ktra();
			}
			else Try(i+1);
			check[j]=false;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		memset(check, false, sizeof(check));
		Try(1);
	}
}