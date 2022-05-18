#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[505];
vector<ll> v;
int ok;

void sinh(string &s){
	int i=s.size()-1;
	while(i>=0 && s[i]=='9'){
		s[i]='0';
		i--;
	}
	if(i==-1){
		ok=0;
	}
	else{
		s[i]=='9';
	}
}
int main(){
	string s(13, '0');
	ok=1;
	sinh(s);
	while(ok){
		v.push_back(stoll(s)); //stroll chuyen string thanh int
		sinh(s);
	}
	for(int i=1;i<=500;i++){
		for(auto x:v){
			if(a[i]==0 && x%i==0){
				a[i]=x;
			}
		}
	}
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<a[n]<<endl;
	}
}

