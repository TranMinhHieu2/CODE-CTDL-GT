#include<bits/stdc++.h>
using namespace std;

int n, a[1001], k, ok;
void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}
	else a[i]=1;
}
bool check(){
	int cnt=0, dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0)
			cnt++;
		else cnt=0;
		if(cnt>k) return false;
		if(cnt==k) dem++;
	}
	return dem==1;
}
int main(){
	cin>>n>>k;
	ktao();
	ok=1;
	vector<vector<int> > v;
	while(ok){
		sinh();
		if(check()){
			vector<int> tmp(a+1,a+n+1);//cho het phan tur cua mang a vao vector tmp
			v.push_back(tmp);
		}
	
	}
	cout<<v.size()<<endl;
	for(auto it:v){
		for(auto x:it){
			if(x) cout<<"B";
			else cout<<"A";
		}
		cout<<endl;
	}
}

