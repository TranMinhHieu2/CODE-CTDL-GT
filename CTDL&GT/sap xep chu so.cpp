#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		string s, s1[n];
		for(int i=0;i<n; i++){
			cin>>s1[i];
			s+=s1[i];
		}
		for(int i=0;i<s.size();i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j])
					s[j]=-1;
			}
		}
		sort(s.begin(),s.end());
		for(int i=0;i<s.size();i++){
			if(s[i]!=-1)
				cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}
