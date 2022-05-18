#include <bits/stdc++.h>
using namespace std;
int ktra(string s){
	int n=s.size();
	stack<char> st;
	for(int i=0;i<n;i++){
		if(s[i]=='(' || (s[i]==')' && st.empty()))
			st.push(s[i]);
		else{
			if(st.size()>0 && st.top()=='(') 
				st.pop();
			else st.push(s[i]);
		}
	}
	int a=0, b=0;
	while(!st.empty()){
		if(st.top()=='(')
			a++;
		else b++;
		st.pop();
	}
	return a/2 + b/2 + a%2 + b%2;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<ktra(s)<<endl;
	}
}