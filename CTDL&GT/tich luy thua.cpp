#include <bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long luythua(long long n, long long k){
	if(k==0){
		return 1;
	}
	long long x=luythua(n, k/2);
	if(k%2==0) return (x*x)%m;
	return (n*((x*x)%m))%m;
}
int main(){
	long long n, k;
	while(cin>>n>>k){
		if(n==0 && k==0)
			break;
		else cout<<luythua(n, k)<<endl;
	}
}