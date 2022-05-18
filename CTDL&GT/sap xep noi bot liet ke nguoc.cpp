#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n, k=0; cin>>n;
		int a[n],b[n][n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++){
			int dem=0;
			for(int j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					dem=1;
					swap(a[j],a[j+1]);
				}
			}
			if(dem==1){
				k++;
				for(int j=0;j<n;j++){
					b[i][j]=a[j];
				}
			}
			else break;
		}
		for(int i=k-1;i>=0;i--){
			cout<<"Buoc "<<i+1<<":";
			for(int j=0;j<n;j++){
				cout<<" "<<b[i][j];
			}
			cout<<endl;
		}	
	}
}
