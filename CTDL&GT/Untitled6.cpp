#include<bits/stdc++.h>
using namespace std;
int uoc(int n){
	int sum=1;
	int x=sqrt(n);
	for(int i=2;i<=x;i++){
		if(n%i==0){
			sum+=i;
			sum+=n/i;
		}
	}
	if(x*x==n){
		sum-=x;
	}
	return sum;
}
int main(){
	int a, b;
	cin>>a>>b;
	int dem=0;
	for(int i=a;i<=b;i++){
		if(uoc(i)>i) dem++;
	}
	cout<<dem;
}