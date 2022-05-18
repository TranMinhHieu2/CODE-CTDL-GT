#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
struct matran{
	long long f[2][2];
};
matran operator*(matran a, matran b){
	matran c;
	int i, j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c.f[i][j]=0;
			for(k=0;k<2;k++){
				c.f[i][j]= (c.f[i][j] + a.f[i][k] * b.f[k][j]%m)%m;
			}
		}
	}
	return c;
}
matran luythua(matran a, int n){
	if(n==1) return a;
	matran x= luythua(a, n/2);
	if(n%2==0) return x*x;
	return a*x*x;
}
int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		matran a;
		a.f[0][0]=1;
		a.f[0][1]=1;
		a.f[1][0]=1;
		a.f[1][1]=0;
		matran kq=luythua(a,n);
		cout<<kq.f[0][1]<<endl;
	}
}