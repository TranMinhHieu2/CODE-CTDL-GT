#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok, cnt;
vector<vector<int> > v;

void ktao(){
	cnt=1;
	a[1]=n;
	v.clear();
}
void sinh(){
	int i=cnt;
	while(i>=1 && a[i]==1){
		i--;
	}
	if(i==0)
		ok=0;
	else{
		int x=cnt-i+1;
		a[i]--;
		cnt = i;
		int p=x/a[i];
		int q=x%a[i];
		if(p!=0){
			for(int j=1;j<=p;j++){
				cnt++;
				a[cnt]=a[i];
			}
		}
		if(q!=0){
			cnt++;
			a[cnt]=q;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		while(ok){
			vector<int> tmp;
			for(int i = 1; i <= cnt; i++){
				tmp.push_back(a[i]);
			}
			v.push_back(tmp);
			sinh();
		}
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
			cout<<"(";
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j];
				if(j==v[i].size()-1){
					cout<<")"<<" ";
				}
				else cout<<" ";
			}
		}
		cout<<endl;
	}
}