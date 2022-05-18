#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n],b[n][n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int l=a[0];
	for(int i=1;i<n;i++){
		int x=a[i]; int c=i-1;
		while(c>=0 && x<a[c]){
			a[c+1]=a[c];
			c--;
		}
		a[c+1]=x;
		for(int k=0;k<=i;k++)
			b[i][k]=a[k];
	}
	for(int i=n-1;i>0;i--)
    {
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Buoc"<<" "<<"0"<<":"<<" "<<l<<endl;
}
