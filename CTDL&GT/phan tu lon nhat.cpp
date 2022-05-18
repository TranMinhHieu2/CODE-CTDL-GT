#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int count=0;
		for(int i=n-1;i>=0;i--){
			if(count<k){
				cout<<a[i]<<" ";
				count++;
			}
			else break;
		}
		cout<<endl;
	}
}
