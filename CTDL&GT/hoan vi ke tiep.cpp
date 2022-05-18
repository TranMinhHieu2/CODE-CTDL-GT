#include <bits/stdc++.h>
using namespace std;
int n, a[1001];
void kq(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		for(int j=1;j<=n;j++)
			cout<<a[j]<<" ";
	}
	else{
		int k=n;
		while(a[i]>a[k]) k--;
		swap(a[i],a[k]);
		reverse(a+i+1,a+n+1);
		for(int j=1;j<=n;j++){
			cout<<a[j]<<" ";
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		kq();
		cout<<endl;	
	
	}
}
