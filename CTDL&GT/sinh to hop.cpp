#include <bits/stdc++.h>
using namespace std;
int n,k;
int x[100];

void ketqua(){
	for(int i=1;i<=k;i++)
		cout<<x[i];
	cout<<" ";
}
void init(){
	cin>>n>>k;
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
	int t; cin>>t;
	x[0]=0;
	while(t--){
		init();
		Try(1);
		cout<<endl;
	}
}

