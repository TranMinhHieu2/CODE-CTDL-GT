#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		long long a=0, b=0, nt=1;
		for(int i=s1.size()-1, j=0;i>=0, j<s1.size();i--,j++){
			a+=int(s1[i]-'0')*nt;
			nt*=2;
		}
		nt=1;
		for(int i=s2.size()-1, j=0;i>=0, j<s2.size();i--,j++){
			b+=int(s2[i]-'0')*nt;
			nt*=2;
		}
		cout<<a*b<<endl;
	}
}