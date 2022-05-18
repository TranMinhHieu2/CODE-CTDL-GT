#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; 
		cin>>s;
		stack<int> st;
		stack<string> cs;
		for(int i=0;i<s.size(); i++){
			if(s[i]=='('){
				st.push(i);
			}
			else {
				if(s[i]==')'){
					string tmp="";
					for(int j=st.top()+1;j<i;j++){
						if(s[i]=='*'||s[i]=='/'||s[i]=='-'||s[i]=='+'){
							st.push(i);							
						}
						else cs.push(string(1,s[i]));
					}
					string s1=cs.top(); cs.pop();
					string s2=cs.top(); cs.pop();
					tmp=s2+s1+s[st.top()];
					st.pop();
					st.pop();
					cs.push(tmp);
				}
			}
		}
		cout<<cs.top()<<endl;
	}
}