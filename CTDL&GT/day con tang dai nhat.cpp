#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n], b[1000];
	int kq=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=1;
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				b[i]=max(b[i], b[j]+1);
			}
		}
		kq=max(kq, b[i]);
	}
	cout<<kq<<endl;
}