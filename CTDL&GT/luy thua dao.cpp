#include <bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long luythua(long long n, long long k){
	if(k==0){
		return 1;
	}
	long long x=luythua(n, k/2);
	if(k%2==0) return x*x%m;
	return n*(x*x%m)%m;
}
long long dao(long long n){
	long long d=0;
	while(n>0){
		d=d*10+n%10;
		n/=10;
	}
	return d;
}
int main(){
	int t;
	long long n; 
	cin>>t;
	while(t--){
		cin>>n;
		cout<<luythua(n, dao(n))<<endl;
	}
}