#include<bits/stdc++.h>
using namespace std;
void sinh(string s){
	int i=s.size()-1;
	while(i>=0 && s[i]=='0'){
		s[i]='1';
		i--;
	}
	if(i==-1){
		for(int j=0;j<s.size();j++)
			cout<<'1';
		cout<<endl;
	}
	else{
		s[i]='0';
		for(int j=0;j<s.size();j++){
			cout<<s[j];
		}
		cout<<endl;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		sinh(s);
	}
}
