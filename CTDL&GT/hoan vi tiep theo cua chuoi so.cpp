#include<bits/stdc++.h>
using namespace std;
void sinh(string s){
	int i=s.size()-2;
	while(i>=0 && s[i]>=s[i+1]){
		i--;
	}
	if(i==-1){
		cout<<"BIGGEST"<<endl;
	}
	else{ 
		int j=s.size()-1;
		while(s[i]>=s[j]){
			j--;
		}
		swap(s[i],s[j]);
		reverse(s.begin()+i+1, s.end());
		cout<<s<<endl;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int stt; cin>>stt;
		string s; cin>>s;
		cout<<stt<<" ";
		sinh(s);
	}
}
