#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > res;
int n,x[100];

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			vector<int>tmp;
			for(int l=1;l<=n;l++){
				tmp.push_back(x[l]);
			}
			res.push_back(tmp);
		}
		else Try(i+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		res.clear();
		Try(1);
		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++){
				if(res[i][j]==0){
					cout<<"6";
				}	
				else cout<<"8";
			}
			cout<<" ";
		}
		cout<<endl;
	}
}