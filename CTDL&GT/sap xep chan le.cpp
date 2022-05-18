#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	long long a[n];
	vector<int> chan, le;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i%2==0) chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(le.begin(),le.end());
	sort(chan.begin(),chan.end(), greater<int>());
	int i=0, j=0;
	for(int k=0;k<n;k++){
		if(k%2==0){
			cout<<le[i]<<" ";
			i++;
		}
		else{
			cout<<chan[j]<<" ";
			j++;
		}
	}
}
