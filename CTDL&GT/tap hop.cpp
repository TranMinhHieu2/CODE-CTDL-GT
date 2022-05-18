#include <bits/stdc++.h>
using namespace std;
int n,k,s,t,dem;
int x[100];

void ketqua(){
	t=0;
	for(int i=1;i<=k;i++)
		t+=x[i];
	if(t==s) dem++;
}
void Try(int i){
	for(int j=x[i-1]+1;j<=n+i-k;j++){
		x[i]=j;
		if(i==k)
		 	ketqua();
		else Try(i+1);
	}
}
int main(){
	while(1){
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0) break;
		x[0]=0;
		dem=0;
		Try(1);
		cout<<dem<<endl;
	}
}

