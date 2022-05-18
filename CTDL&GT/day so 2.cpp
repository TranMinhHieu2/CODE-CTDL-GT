#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1][n+1];
		vector<vector<int> > res;
		for(int i=1;i<=n;i++){
			cin>>a[1][i];
		}
		int cot=n-1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=cot;j++){
				a[i][j]=a[i-1][j]+a[i-1][j+1];
			}
			cot--;
		}
		cot=n;
		for(int i=1;i<=n;i++){
			vector<int> v;
			for(int j=1;j<=cot;j++){
				v.push_back(a[i][j]);
			}
			res.push_back(v);
			cot--;
		}
		for(int i=res.size()-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<res[i].size();j++){
				if(j==res[i].size()-1)
					cout<<res[i][j]<<"] ";
				else cout<<res[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}