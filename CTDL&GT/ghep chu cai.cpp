#include <bits/stdc++.h>
using namespace std;

char c;
string s;
int check[100];

bool ktra(char c){
	if(c!='A' && c!='E')
		return true;
	else return false;
}

void xuat(){
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'||s[i]=='E'){
			if(i>0 && i<s.size()-1 && ktra(s[i+1]) && ktra(s[i-1]))
				return;
		}
	}
	cout<<s<<endl;
}
void Try(char i){
	for(char j='A';j<=c;j++){
		if(check[j]==0){
			check[j]=1;
			s.push_back(j);
			if(s.size()==c-'A'+1){
				xuat();
			}
			else Try(i+1);
			check[j]=0;
			s.pop_back();
		}
	}
}
int main(){
	cin>>c;
	Try('A');
}