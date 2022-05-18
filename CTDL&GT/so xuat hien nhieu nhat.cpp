#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		map<int, int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int max=0, k;
		for(auto it : mp){
			if(it.second > max){
				max=it.second;
				k=it.first;
			}
		}
		if(max>(n/2)) cout<<k<<endl;
		else cout<<"NO"<<endl;
	}
}
