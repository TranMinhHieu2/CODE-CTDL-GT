#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; 
		cin>>s;
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
		for(int i=0;i<n;i++){
			if(s[i]!='(' && s[i]!=')')
				cout<<s[i];
		}
		cout<<endl;
	}
}