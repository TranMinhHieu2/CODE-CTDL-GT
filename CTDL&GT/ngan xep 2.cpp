#include <bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	string s;
	int t; cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			int a; cin>>a;
			st.push(a);
		}
		if(s=="POP"){
			if(!st.empty()) st.pop();
		}
		if(s=="PRINT"){
			if(st.empty()) cout<<"NONE"<<endl;
			else	cout<<st.top()<<endl;	
		}
	}
}