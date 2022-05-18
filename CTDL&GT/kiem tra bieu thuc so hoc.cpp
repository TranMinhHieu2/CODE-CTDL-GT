#include <bits/stdc++.h>
using namespace std;
bool ktra(string s){
	int n=s.size();
	int a=0, b=0;
	for(int i=0;i<n;i++){
		if(s[i]=='(' && s[i+2]==')') 
			return false;
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
			a++;
		if(s[i]=='(')
			b++;
	}
	if(a<b) return false;
	else return true;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(!ktra(s)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}