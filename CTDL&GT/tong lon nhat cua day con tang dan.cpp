#include<bits/stdc++.h>
using namespace std;

int kq(int n, int a[]){
	int c[1001], res=0;
	for(int i=0;i<n;i++){
		c[i]=a[i];
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				c[i]=max(c[i],c[j]+a[i]);
			}
		}
		res=max(res,c[i]);
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<kq(n,a)<<endl;
	}
}