#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> st;
	string s;
	int n=0;
	while(cin>>s){
		if(s=="push"){
			int a; cin>>a;
			st.push_back(a);
			n++;
		}
		if(s=="pop"){
			st.pop_back();\
			n--;
		}
		if(s=="show"){
			if(st.empty()) cout<<"empty"<<endl;
			else{
				for(int x:st){
				cout<<x<<" ";
			}
			cout<<endl;
			}
		}
	}
}