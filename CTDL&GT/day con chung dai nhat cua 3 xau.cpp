#include <bits/stdc++.h>
using namespace std;
int c[101][101][101];
string s1, s2, s3;
int x, y, z;

int kq(){
	memset(c,0,sizeof(c));
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			for(int k=1;k<=z;k++){
				if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1])
					c[i][j][k]= c[i-1][j-1][k-1] + 1;
				else
					c[i][j][k]=max(c[i-1][j][k],max(c[i][j-1][k],c[i][j][k-1]));
			}
		}
	}
	return c[x][y][z];
}
int main(){
	int t; cin>>t; 
	while(t--){
		cin>>x>>y>>z;
		cin>>s1>>s2>>s3;
		cout<<kq()<<endl;
	}
}