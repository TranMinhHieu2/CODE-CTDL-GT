#include <bits/stdc++.h>
using namespace std;
int const h = 1e6+9;
int a[h];
\
void tong(int n){
	for(int i=2;i<n;i++){
		if(a[i]==0 && a[n-i]==0){
			cout<<i<<" "<<n-i<<endl;
			return;
		}
	}
	cout<<"-1"<<endl;
}
int main(){
	a[0]=0; a[1]=1;	
	for(int i=2;i<=sqrt(h);i++){
		if(a[i]==0){
			for(int j=i*i;j<h;j+=i){
				a[j]=1;
			}
		}
	}
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		tong(n);
	}
} 
