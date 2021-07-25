#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll a[10000008];
ll j;
int main ()
{
    ll n,m,i,p=1;
    cin>>n>>m;

    if (m>=n && n!=1)
        cout<<"No\n";
        else
        {
            ll y=100000008;
            ll x=min(m,y);
            map<ll,ll>mp;
            for (i=1;i<=x;i++)
            {
                ll r=n%i;
                mp[r]++;
                if (mp[r]>=2)
                {
                    p=0;
                    break;
                }
            }
            if (p==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        return 0;
}
