#include<bits/stdc++.h>
using namespace std;

int x[100];
int a[2]={0,2};
int n=8;

bool ktra(){
	 if(x[3]==2 || x[5]==0 || x[4]==0) return false;
	 if(x[1]==0 && x[2]==0) return false;
	 return true;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=a[j];
		if(i==n){
			if(ktra()){
				for(int l=1;l<=n;l++){
				cout<<x[l];
				if(l==2)
					cout<<"/";
				if(l==4)
					cout<<"/";
				}
				cout<<endl;
			}		
		}
		else Try(i+1);
	}
}

int main(){
	Try(1);
}