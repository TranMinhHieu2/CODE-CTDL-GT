#include <bits/stdc++.h>
using namespace std;

int number[6], ok, b[6];
void Try(int i, int s){
	if(ok) return;
	if(i==5 && s==23){
		ok=1;
		return;
	}
	for(int j=0;j<5;j++){
		if(b[j]==0){
			b[j]==1;
			Try(i+1,s+number[j]);
			Try(i+1,s*number[j]);
			Try(i+1,s-number[j]);
			b[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		for(int i=0;i<5;i++){
			cin>>number[i];
		}
		ok=0;
		for(int i=0;i<5;i++){
			b[i]=1;
			Try(1,number[i]);
			b[i]=0;
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}