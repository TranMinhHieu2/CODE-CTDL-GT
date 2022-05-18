#include <bits/stdc++.h>
using namespace std;

int ktra(string s){
	int n=s.size(), kq=0;
	stack<int> st;
	st.push(-1);
	char c=0;
	for(int i=0;i<n;i++){
		c=s[i];
		if(c=='(')
			st.push(i);
		else{
			st.pop();
			if(!st.empty()){
				kq=max(kq, i-st.top());
			}
			else st.push(i);
		}
	}
	return kq;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<ktra(s)<<endl;
	}
}