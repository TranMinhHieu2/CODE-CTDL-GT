#include <bits/stdc++.h>
using namespace std;
int n,k,m;
int x[100], a[100];
set<int>s;
vector<int> v;

void init(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int x:s){
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	m=v.size();
}
void Try(int i){
	for(int j=x[i-1]+1;j<=m+i-k;j++){
		x[i]=j;
		if(i==k)
		{
			for(int l=1;l<=k;l++)
				cout<<v[x[l]-1]<<" ";
			cout<<endl;
		}
		else Try(i+1);
	}
}
int main(){
	init();
	Try(1);
}
	