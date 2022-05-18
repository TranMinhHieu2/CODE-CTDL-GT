#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n, x;
		priority_queue<int, vector<int>, greater<int> > q;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		long long kq=0;
		while(q.size()>=2){
			int min1=q.top(); q.pop();
			int min2=q.top(); q.pop();
			int sum=min1+min2;
			kq+=sum;
			q.push(sum);
		}
		cout<<kq<<endl;
	}
}