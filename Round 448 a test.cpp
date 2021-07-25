#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[400],dp[400][400],n,cnt;
ll make(ll koto, ll i )
{
    if (i>n)
        return 0;
    if (dp[koto][i]!=-1)
        return dp[koto][i];
        ll ret1=0,ret2=0;
        if (koto+a[i]<=cnt)
     ret1=a[i]+make(koto+a[i],i+1);
     ret2=make(koto,i+1);
     return dp[koto][i]=max(ret1,ret2);
}
int main ()
{
    ll i,j,m,len,s,ans;
    while (cin>>n)
    {
        memset (dp,-1,sizeof(dp));
        ll sum=0;
        s=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        a[n]=0;
        cnt=sum/2;
        ans=make(0,0);
        printf("%lld\n",abs(sum-ans-ans));
    }
    return 0;
}
