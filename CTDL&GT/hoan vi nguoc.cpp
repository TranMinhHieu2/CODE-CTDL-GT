#include<bits/stdc++.h>
using namespace std;
int n, x[100];
bool check[100]; 
vector< vector<int> > res;
 
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!check[j]){
			x[i]=j;
			check[j]=true;
			if(i==n){
				vector<int> a;
				for(int j=1;j<=n;j++)
					a.push_back(x[j]);
				res.push_back(a);
			}
			else Try(i+1);
			check[j]=false;
		}
	}
}
void Res(){
	for(int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j];
		}
		cout<<" ";
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		res.clear();
		memset(check,false,sizeof(check));
		Try(1);
		Res();
	}
} 
