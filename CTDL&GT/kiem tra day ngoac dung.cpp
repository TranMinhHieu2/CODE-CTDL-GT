#include <bits/stdc++.h>
using namespace std;
bool kq(string s){
	int n=s.size();
	stack<char>st;
	char c;
	for(int i=0;i<n;i++){
		c=s[i];
		if(c=='(' || c=='{' || c=='['){
			st.push(c);
		}
		else{
			if(!st.empty() && c==')' && st.top()=='(') 	
				st.pop(); 
			else if(!st.empty() && c=='}' && st.top()=='{') 	
				st.pop(); 
			else if(!st.empty() && c==']' && st.top()=='[') 	
				st.pop(); 
		} 
	}
	if(st.empty())
		return true;
	else return false;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(kq(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}