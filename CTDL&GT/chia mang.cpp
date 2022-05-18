#include <bits/stdc++.h>
using namespace std;
int n, k, s, cnt=0;
int a[100];
bool check=false;
bool ok[100];

void Try(int sum, int cnt){
	if(check==true)
		return;
	if(cnt==k){
		check=true;
		return;
	}
	for(int i=1;i<=n;i++){
		if(ok[i]==false){
			ok[i]=true;
			if(sum==s){
				Try(0, cnt+1);
				return;
			}
			if(sum>s) return;
			else Try(sum+a[i], cnt);
		}
		ok[i]=false;
	}
}
int main(){
	int t; cin>>t; 
	while(t--){
		cin>>n>>k;
		s=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			ok[i]=false;
			s+=a[i];
		}
		check=false;
		if(s%k!=0)
			cout<<"0";
		else{
			s=s/k;
			Try(0,0);
			if(check=true){
				cout<<"1";
			}
			else cout<<"0";
		}
		cout<<endl;
	}
}
