#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000005];
int main ()
{
    ll i,j,n,ans,p;
    while (scanf("%lld",&n)==1)
    {
        ans=1;
        for (i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
        }
        ll mini=n-a[n];
        for (i=n;i>=2;i--)
        {
            mini=min(mini,i-a[i]);
            if (a[i]==0)
            {
                if (mini>=i)
                ans++;

            }

            //cout<<mini<<' '<<ans<<endl;

        }

        cout<<min(n,ans)<<endl;
    }
    return 0;
}
