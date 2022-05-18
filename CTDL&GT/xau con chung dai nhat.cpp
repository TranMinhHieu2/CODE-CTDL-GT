#include<bits/stdc++.h>
using namespace std;
int c[1001][1001];
string s1, s2;
int kq(){
	memset(c,0,sizeof(c));
	int x=s1.size(), y=s2.size();
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if(s1[i-1]==s2[j-1])
				c[i][j]= c[i-1][j-1] + 1;
			else
				c[i][j]=max(c[i-1][j],c[i][j-1]);
		}
	}
	return c[x][y];
}
int main(){
	int t; cin>>t; 
	while(t--){
		cin>>s1>>s2;
		cout<<kq()<<endl;
	}
}