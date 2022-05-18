#include <bits/stdc++.h>
using namespace std;

int kq(int n, int a[]){
	int c[10000], res=0;
	for(int i=0;i<n;i++){
		c[i]=1;
		for(int j=0;j<i;j++){
			if(a[j]<=a[i]){
				c[i]=max(c[i], c[j]+1);
			}
		}
		res=max(res, c[i]);
	}
	return n-res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<kq(n, a)<<endl;
	}
}