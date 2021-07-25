#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,p,cnt,a[5005];
    while (scanf("%lld",&n)==1)
    {
        map<ll,ll>mp;
        ll maxi=-1;
        for (i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
                mp[a[i]]++;
                maxi=max(maxi,mp[a[i]]);
            }
        printf("%lld\n",maxi);

    }
    return 0;
}
