#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];

void in(string *s){
	for(int i=1;i<=k;i++){
		cout<<s[a[i]]<<" ";
	}
	cout<<endl;
}

int Try(int i, string *s){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in(s);
		}
		else Try(i+1,s);
	}
}
int main(){
	cin>>n>>k;
	string s[n+1];
	set<string> st;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		st.insert(s[i]);
	}
	n=st.size();
	int b=1;
	for(auto x:st){
		s[k++]=x;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(s[i].compare(s[j])>0){
				swap(s[i],s[j]);
			}
		}
	}
	a[0]=0;
	Try(1,s);
	cout<<endl;
}