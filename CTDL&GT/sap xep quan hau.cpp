#include<bits/stdc++.h>
using namespace std;

int n, cnt; 
bool h[20], c[20], nguoc[20], xuoi[20];

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!h[j] && !c[j] && !nguoc[i-j+n] && !xuoi[i+j-1]){
			h[j] = c[j] = nguoc[i-j+n] =xuoi[i+j-1] = true;
			if(i==n){
				cnt++;
			}
			else Try(i+1);
			h[j] = c[j] = nguoc[i-j+n] =xuoi[i+j-1] = false;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		cnt=0;
		memset(h, false, sizeof(h));
		memset(c, false, sizeof(c));
		memset(nguoc, false, sizeof(nguoc));
		memset(xuoi, false, sizeof(xuoi));
		Try(1);
		cout<<cnt;
		cout<<endl;
	}
}