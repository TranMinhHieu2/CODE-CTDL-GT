#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Buoc"<<" "<<"0"<<":"<<" "<<a[0]<<endl;
	for(int i=1;i<n;i++){
		int x=a[i]; int c=i-1;
		while(c>=0 && x<a[c]){
			a[c+1]=a[c];
			c--;
		}
		a[c+1]=x;
		cout<<"Buoc"<<" "<<i<<":"<<" ";
		for(int k=0;k<=i;k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}
}
