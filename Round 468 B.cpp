#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>ad[100005];
int main ()
{
    ll i,j,n,sum;
    ll x,y;
    double t,c;
   cin>>n;

        ll vis[100005];
        memset(vis,0,sizeof(vis));
        ll cost[100005];
        map<ll,ll>mp;
        for (i=2;i<=n;i++)
        {
            cin>>x;
            mp[x]++;
            ad[i].push_back(x);
            ad[x].push_back(i);
        }
        queue<ll>q;
        q.push(1);
        ll maxi=1;
        cost[1]=1;
        while (!q.empty())
    {
      x=q.front();
      vis[x]=1;
      q.pop();
      ll len=ad[x].size();
      for (i=0;i<len;i++)
      {
          y=ad[x][i];
          if (vis[y]==0)
          {
             q.push(y);
             cost[y]=cost[x]+1;
             maxi=max(maxi,cost[y]);
          }
      }
    }
    ll p=0;
    for (i=1;i<=n;i++)
    {
        if (mp[i]!=0 && mp[i]%2==0)
            p++;
    }
    cout<<maxi-p<<endl;

}

