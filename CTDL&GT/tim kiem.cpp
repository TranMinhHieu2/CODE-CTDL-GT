#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		int n; cin>>n;
		string k; cin>>k;
		cin.ignore();
		string s; getline(cin,s);
		if(s.find(k)!=string::npos) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}
