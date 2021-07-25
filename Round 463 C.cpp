#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
ll dp[1000006];
ll f (ll i, ll j)
{
    if (j==1)
        return i;
    f (i,j-1);
}
int main ()
{
    ll i,j,n,m,a,b;
    faster;
    while (cin>>n>>a>>b)
    {
        for (i=1;i<=n;i++)
        {
            if (i!=1)
                cout<<' ';
            cout<<i;
        }
        cout<<endl;
    }
}
