#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n, res=0;
	cin>>n;
	int f[n+1]={0};
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		f[x]=f[x-1]+1;
	}
	res=*max_element(f+1,f+n+1);
	cout<<n-res<<endl;
}