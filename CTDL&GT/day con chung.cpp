#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n, m, k;
		cin>>n>>m>>k;
		vector<int> a(n), b(m), c(k);
		for(int &i:a) cin>> i;
		for(int &i:b) cin>> i;
		for(int &i:c) cin>> i;
		int i=0, j=0, l=0, in=0;
		while(i<n && j<m && l<k){
			if(a[i]==b[j] && a[i]==c[l]){
				cout<<a[i]<<" ";
				in=1;
				i++; j++; l++;
			}
			else if(a[i]<b[j]){
				i++;
			}
			else if(b[j]<c[l])
				j++;
			else l++;
		}
		if(in==0) cout<<"NO";
		cout<<endl;
	}
}