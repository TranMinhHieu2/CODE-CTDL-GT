#include <bits/stdc++.h>
using namespace std;
string a, b;
long long s=0;
long long tong(){
	long long sa=stoll(a);
	long long sb=stoll(b);
	return sa+sb;
}
int main(){
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		if(a[i]=='6')
			a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='6')
			b[i]='5';
	}
	cout<<tong()<<" ";
	for(int i=0;i<a.size();i++){
		if(a[i]=='5')
			a[i]='6';
	}
	for(int i=0;i<a.size();i++){
		if(b[i]=='5')
			b[i]='6';
	}
	cout<<tong()<<endl;
}