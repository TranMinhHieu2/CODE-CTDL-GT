#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok, cnt;
vector< vector<int> > res;

void ktao(){
	cnt = 1;
	a[1] = n;
}
void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int d = cnt - i + 1;
		a[i]--;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q){
			for(int j = 1; j <= q; j++){
				a[++cnt] = a[i];
			}
		}
		if(r){
			//hoac phai viet cnt++; a[cnt]=r 
			a[++cnt] = r;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		res.clear();
		while(ok){
			vector<int>tmp;
			for(int l=1;l<=cnt;l++){
				tmp.push_back(a[l]);
			}
			res.push_back(tmp);
			sinh();
		}
		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++){
			cout<<"(";
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j];
				if(j==res[i].size()-1)
					cout<<")"<<" ";
				else cout<<" ";
			}
		}
		cout<<endl;
	}
}
