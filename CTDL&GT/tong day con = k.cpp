#include <bits/stdc++.h>
using namespace std;

int a[100], b[100];
vector< vector<int> > res;
int n, k;
void in(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1, a+n+1);
	res.clear();
}
void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		int s=0;
		if(i==n){
			for(int l=1;l<=n;l++){
				if(b[l]==1)
					s+=a[l];
			}
			if(s==k){
				vector<int> v;
				for(int l=1;l<=n;l++){
					if(b[l]==1){
						v.push_back(a[l]);
					}
				}
				res.push_back(v);
			}
		}
		else Try(i+1);
	}
}
int main(){
	in();
	Try(1);
	sort(res.begin(),res.end());
	for(int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++){
			 cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<res.size();
	cout<<endl;
}