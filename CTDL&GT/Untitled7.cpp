#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a, a+n);
	int c=a[n];
	int cnt=0, M=0;
	for(int i=n;i>0;i--){
		if(a[i]==c)
			cnt++;
		else{
			M=max(cnt,M);
			cnt=0;
		}
	}
	cout<<M;
}