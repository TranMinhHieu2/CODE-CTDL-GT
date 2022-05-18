#include <bits/stdc++.h>
using namespace std;
int ok=0,n,k,a[1001];

void in(){
	for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=k, j;
	while(i>0 && a[i]-a[i-1]==1) i--;
	if(i==0) for(j=1;j<=k;j++) a[j]=n-k+j;
	else{
		a[i]--;
		for(j=i+1;j<=k;j++) a[j]=n-k+j;
	}
	in();
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++)
			cin>>a[i];
		sinh();
	}
}
