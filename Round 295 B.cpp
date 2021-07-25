#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 999999999999999
ll m,n,br;
ll dp[20008],vis[20004];
ll fun(ll p)
{

    if (p==-1)
        return mx;
        //cout<<p<<endl;
        vis[p]=1;
    if (dp[p]!=-1)
        return dp[p];
    if (p==m)
    {
        //cout<<'Y'<<endl;
        return dp[p]=1;
    }
//        if (p>m)
//            return p-m;


    ll ret=mx;
    ll ret1=mx;
    if (p>m && vis[p-1]==0 && p<=br)
        ret=fun(p-1)+1;
    else if (p<m)
    {
        ll x=2*p;
        if( vis[p-1]==0)
        ret=fun(p-1)+1;
        if (vis[x]==0)
        ret1=fun(x)+1;
    }
    //cout<<ret<<' '<<ret1<<endl;
    return dp[p]=min(ret,ret1);
}
int main ()
{
    ll i,j,ans;
    cin>>n>>m;
        memset(dp,-1,sizeof(dp));
        br=max(n,2*m);
        ans=fun(n);
        cout<<ans-1<<endl;
        return 0;
}
