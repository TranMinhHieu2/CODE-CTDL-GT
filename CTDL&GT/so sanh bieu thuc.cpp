#include <bits/stdc++.h>
using namespace std;
string exchange(string s){
	int n=s.size();
	stack<int> st;
	for(int i=0;i<n;i++){
		if(s[i]=='('){
			st.push(i);
		}	
		else if(s[i]==')' && !st.empty()){
			if(s[st.top()-1]=='-'){
				for(int j=st.top();j<=i;j++){
					if(s[j]=='+')
						s[j]='-';
					else if(s[j]=='-') s[j]='+';
				}
			}
			st.pop();
		}
	}
	string ss="";
	for(int i=0;i<n;i++){
		if(s[i]!='(' && s[i]!=')')
			ss+=s[i];	
	}
	return ss;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s1;
		string s2; 
		cin>>s1>>s2;
	
		if(exchange(s1)==exchange(s2)){
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}