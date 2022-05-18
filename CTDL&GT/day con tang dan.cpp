#include<bits/stdc++.h>
using namespace std;

int n, a[100];
int x[100];
vector< vector<int> > v;
string k="";
vector<string> str;

bool ktra(){
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			if(a[i]>tmp)
				tmp=a[i];
			else return false;
		}
	}
	return true;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			if(ktra()){
				vector<int> o;
				for(int l=1;l<=n;l++){
					if(x[l]==1){
						o.push_back(a[l]);
					}
				}
				if(o.size()>1){
					v.push_back(o);
				}
			}  
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(1);
	for(int i=0;i<v.size();i++){
		k="";
		for(int j=0;j<v[i].size();j++){
			k+=to_string(v[i][j]);
			k+=" ";
		}
		str.push_back(k);
	}
	sort(str.begin(), str.end());
	for (int i = 0; i < str.size(); i++)
        cout << str[i] << endl;
}