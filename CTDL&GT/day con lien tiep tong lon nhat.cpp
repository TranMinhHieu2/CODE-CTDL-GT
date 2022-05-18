#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int max=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		bool am=false;
		for(int i=0;i<n;i++){
			if(a[i]>0) am=true;
			if(i==0) max=a[0];
			else {
				if(max<a[i]) max=a[i];
			}
		}
		if(!am) cout<<max<<endl;
		else{
			int sum=0, res=a[0];
			for(int i=0;i<n;i++){
				if(sum+a[i]<0){
					sum=0;
				}
				else{
					sum+=a[i];
				}
				if(sum>res) res=sum;
			}
			cout<<res<<endl;
		}
	}
}