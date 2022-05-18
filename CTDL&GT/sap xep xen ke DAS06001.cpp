#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=n-1,j=0;i>=n/2,j<n/2;i--,j++){
			cout<<a[i]<<" "<<a[j]<<" ";
		}
		if(n%2!=0) cout<<a[n/2];
		cout<<endl;
	}
}
