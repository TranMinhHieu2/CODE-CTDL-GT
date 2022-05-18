#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n], b[m], c[n+m];
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		int i=0, j=0, k=0;
		while(i<n){
			c[k++]=a[i++];
		}
		while(j<m){
			c[k++]=b[j++];
		}
		sort(c,c+k);
		for(int x=0;x<k;x++)
			cout<<c[x]<<" ";
		cout<<endl;
	}
}
