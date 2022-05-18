#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	int s1=a[0]*a[1];
	int s2=a[n-3]*a[n-1]*a[n-2];
	int s3=a[n-2]*a[n-1];
	int s4=a[0]*a[1]*a[n-1];
	cout<<max(s1,max(s2,max(s3,s4)));
}