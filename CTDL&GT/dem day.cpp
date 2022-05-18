#include <bits/stdc++.h>
using namespace std;
int m=123456789;
long long luythua(int n, long long k){
	if(k==0){
		return 1;
	}
	long long x=luythua(n, k/2);
	if(k%2==0) return x*x%m;
	return n*(x*x%m)%m;
}

int main(){
	int t;
	long long n; 
	cin>>t;
	while(t--){
		cin>>n;
		cout<<luythua(2, n-1)<<endl;
	}
}