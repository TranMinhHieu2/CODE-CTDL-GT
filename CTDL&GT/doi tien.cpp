#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n, cnt=0, k;
		cin>>n;
		int a[10]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
		for(int i=0;i<10;i++){
			cnt+=n/a[i];
			n=n%a[i];
		}
		cout<<cnt<<endl;
	}
}