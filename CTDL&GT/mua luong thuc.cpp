#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m,s;
		cin>>n>>s>>m;
		if(n>=m && 6*(n-m)>=m){
			cout<<ceil((float)(s*m)/n)<<endl;
		}
		else cout<<-1<<endl;
	}
}