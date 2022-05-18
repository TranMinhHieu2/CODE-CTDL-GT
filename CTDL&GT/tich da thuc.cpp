#include <bits/stdc++.h>
using namespace std;
struct dt{
	int hs, mu;	
};
int main(){
	int t; cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		dt a[n], b[m];
		vector< vector<dt> > res;
		for(int i=0;i<n;i++){
			cin>>a[i].hs;
			a[i].mu=i;
		}
		for(int i=0;i<m;i++){
			cin>>b[i].hs;
			b[i].mu=i;
		}
		for(int i=0;i<n;i++){
			vector<dt> tmp;
			for(int j=0;j<m;j++){
				tmp.push_back({a[i].hs*b[j].hs, a[i].mu+b[j].mu});
			}
			res.push_back(tmp);
		}
		int u=0;
		while(u<n+m-1){
			int s=0;
			for(int i=0;i<res.size();i++){
				for(int j=0;j<res[i].size();j++){
					if(res[i][j].mu==u)
						s+=res[i][j].hs;
				}
			}
			cout<<s<<" ";
			u++;
		}
		cout<<endl;
	}
}