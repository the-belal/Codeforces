#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 200005
ll a[mx],q_sum[mx];
int main ()
{
    ll i,j,n;
    while (scanf("%lld",&n)==1)
    {

        map<ll,ll>mp;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if (i==0)
                q_sum[i]=a[0];
            else
            {
                q_sum[i]=a[i]+q_sum[i-1];
            }
            mp[a[i]]+=a[i];
            mp[a[i]-1]+=a[i];
            mp[a[i]+1]+=a[i];
        }
        ll sum=0,zero,cnt,q_s;
        map<ll,ll>done;
        for (i=0;i<n;i++)
        {

            done[a[i]]+=a[i];
            done[a[i]-1]+=a[i];
            done[a[i]+1]+=a[i];

            ll x=mp[a[i]]-done[a[i]];
            cout<<x<<endl;
            if (a[i]!=0)
            zero=(x/a[i])+(x%a[i]);
            cnt=n-i-1-zero;
            sum+=q_sum[n-1]-q_sum[i]-((cnt+zero)*a[i]);
            printf("done %lld left %lld ",zero,cnt);
            cout<<sum<<endl;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
