#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n]; 
		vector<int> v(k);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<=n-k;i++){
			v.clear();
			for(int j=i;j<i+k;j++){
				v.push_back(a[j]);
			}
			int c=*max_element(v.begin(),v.end());
			cout<<c<<" ";
		}
		cout<<endl;
	}
}