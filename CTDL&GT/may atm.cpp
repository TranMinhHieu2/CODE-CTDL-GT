#include<bits/stdc++.h>
using namespace std;

int n, a[50], s, kq;

void Try(int i, int t, int x){
	if(t>s || x>kq)
		return;
	if(i==n){
		if(t==s) 
			kq= min (kq,x);
		return;
	}
	Try(i+1,t,x);
	Try(i+1,t+a[i],x+1);
}
int main(){
	int k; cin>>k;
	while(k--){
		cin>>n>>s;
		for(int i=0;i<n;i++)
		cin>>a[i];
		kq=1000;
		Try(0,0,0);	
		if(kq==1000)
			cout<<-1;
		else cout<<kq;
		cout<<endl;
	}
}
