#include<bits/stdc++.h>
using namespace std;
char Try(string s, long long n){
	long long x=s.size();
	if(n<x){
		return s[n];
	}
	while(2*x<=n) x=x*2;
	if(x==n) return Try(s,n-1);
	return Try(s,n-x-1);
}
int main(){
	int t; string s; long long n;
	cin>>t;
	while(t--){
		cin>>s>>n;
		cout<<Try(s,n-1)<<endl;
	}
}