#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector<string> res;
bool check=false;

void in(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	
}
void Try(int i, int j, string s){
	if(i==1 && j==1 && a[i][j]==0){
		check=false;
		return;
	}
	if(i==n && j==n && a[n][n]==1){
		res.push_back(s);
		check=true;
		return;
	}
	if(i<n && a[i+1][j]==1){
		Try(i+1,j,s+"D");
	}
	if(j<n && a[i][j+1]==1){
		Try(i,j+1,s+"R");
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		in();
		check=false;
		res.clear();
		Try(1,1,"");
		if(!check){
			cout<<"-1";
		}
		else{
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++)
				cout<<res[i]<<" ";
		}
		cout<<endl;
	}
}