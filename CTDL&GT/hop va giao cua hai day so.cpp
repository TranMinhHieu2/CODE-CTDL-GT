#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		set<int>s;
		set<int>min;
		for(int i=1;i<=n;i++){
			cin>>a[i]; s.insert(a[i]);
		}
		int k=0;
		for(int j=1;j<=m;j++){
			cin>>b[j]; s.insert(b[j]);
			if(n+j-s.size()!=k){
				min.insert(b[j]);
				k++;
			}
		}
		for(int x:s) cout<<x<<" ";
		cout<<endl;
		for(int y:min) cout<<y<<" ";
		cout<<endl;
	}
} 
