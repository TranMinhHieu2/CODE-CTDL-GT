#include <bits/stdc++.h>
using namespace std;

int n,x[100];

bool ktra(){
	if(x[1]==0 || x[n]==1) return false;
	for(int i=1;i<=n-1;i++){
		if(x[i]==1 && x[i+1]==1) 
			return false;
	}
	for(int i=1;i<=n-3;i++){
		if(x[i]==0 && x[i+1]==0 && x[i+2]==0 && x[i+3]==0) 
			return false;
	}
	return true;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			if(ktra()){
				for(int l=1;l<=n;l++){
					if(x[l]==0)
						cout<<6;
					else cout<<8;
				}
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	Try(1);
}