#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while (t--){
		int n; cin>>n;
		long long a[n],b[n];
		set<int> s;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(b[i]==b[i+1])
				s.insert(b[i]);
		}
		if(s.size()==0) cout<<"NO"<<endl;
		for(int i=0;i<n;i++){
			if(s.count(a[i])!=0){
				cout<<a[i]<<endl;
				break;
			}
		}
	}
}
