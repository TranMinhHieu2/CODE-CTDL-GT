#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, m, k;
		cin>>n>>m>>k;
		vector<long long > v;
		long long a[n], b[m], c[k];
		for(long long &x:a) cin>>x;
		for(long long &x:b) cin>>x;
		for(long long &x:c) cin>>x;
		int i=0, j=0, f=0;
		while(i<n && j<m && f<k){
			if(a[i]==b[j] && b[j]==c[f]){
				v.push_back(a[i]);
				i++; j++; f++;
			}	
			else if(a[i]<=b[j] && a[i]<=c[f]){
				i++;
			} 
			else if(b[j]<=a[i] && b[j]<=c[f]){
				j++;
			}
			else f++;
		}
		if(v.size()==0) cout<<"-1";
		else{
			for(int x:v)
				cout<<x<<" ";
		} 
		cout<<endl;
	}
}
