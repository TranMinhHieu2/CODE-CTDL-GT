#include <bits/stdc++.h>
using namespace std;
int k; 
char a[20], c;
void out(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i){
	int j;
	for(j=a[i-1];j<=c;j++){
		a[i]=j;
		if(i==k){
			out();
		}
		else Try(i+1);
	}
}
int main(){
	memset(a,'A',sizeof(a));
	cin>>c>>k;
	Try(1);
}
