#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define el cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(s) s.begin(),s.end()
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
vector<vector<pii>>x;
vector<int>d(1001,1e9);
int trace[1005],n,s;
void dijk(int s)
{
    queue<int>q;
    bool dd[1001]={};
    q.push(s);
    d[s]=0;
    while(!q.empty())
    {
        int tmp=q.front();
        dd[tmp]=1;
        q.pop();
        for(int i=0;i<x[tmp].size();i++)
        {
            if(d[x[tmp][i].fi]>d[tmp]+x[tmp][i].se)
            {
                d[x[tmp][i].fi]=d[tmp]+x[tmp][i].se;
                trace[x[tmp][i].fi]=tmp;
            }
            if(dd[x[tmp][i].fi]==0) q.push(x[tmp][i].fi);
        }
    }
}
void di(int u,int v)
{
    vi l;
    while(u!=v)
    {
        l.pb(u);
        u=trace[u];
    }
    f0(i,l.size()) cout<<l[i]<<" <- ";
    cout<<s;
}
int main()
{
    cin>>n>>s;
    x.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int c;
            cin>>c;
            if(c>0) x[i].push_back({j,c});
        }
    }
    for(int i=1;i<=n;i++)
    {
        dijk(s);
        if(i==s)
        {
            cout<<"K/c "<<s<<" -> "<<i<<" = "<<0;
            if(s>=10) cout<<";       ";
            else cout<<";        ";
            cout<<s<<" <- "<<i;
            el;
            continue;
        }
        if(d[i]!=1e9)
        {
            cout<<"K/c "<<s<<" -> "<<i<<" = "<<d[i];
            if(i<=9&&d[i]<=9) cout<<";        ";
            else if(i>=10&&d[i]<=9) cout<<";       ";
            else if(d[i]>=10&&i<=9) cout<<";       ";
            else cout<<";      ";
            di(i,s);
            el;
        }
        else cout<<"K/c "<<s<<" -> "<<i<<" = INF"<<'\n';
    }
	return 0;
}