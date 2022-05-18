#include <bits/stdc++.h>
using namespace std;

int tinh(int a, int b, char c){
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	if(c=='/') return a/b;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='*'||s[i]=='/'||s[i]=='-'||s[i]=='+'){
				int s1=st.top(); st.pop();
				int s2=st.top(); st.pop();
				int tmp=tinh(s1,s2,s[i]);
				st.push(tmp);
			}
			else{
				st.push(s[i]-'0');
			}
		}
		cout<<st.top()<<endl;
	}
}