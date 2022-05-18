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
	int t; cin>>t;
	while(t--){
		in();
		Try(1);
		sort(res.begin(),res.end());
		if(res.size()==0){
			cout<<-1;
		}
		else{
			for(int i=0;i<res.size();i++){
				cout<<"[";
				for(int j=0;j<res[i].size();j++){
					if(j==res[i].size()-1){
						cout<<res[i][j]<<"] ";
					}
					else cout<<res[i][j]<<" ";
				}
			}
		}
		cout<<endl;
	}
}