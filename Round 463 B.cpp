#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
ll pro (ll n)
{
    int i,j,sum=1,r;
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        if (r!=0)
            sum*=r;
    }
    return sum;
}
ll g (ll n)
{
    if (n<10)
        return n;
    g(pro(n));
}
vector<ll>v[100];
ll fun ()
{
   for (int i=1;i<=1000002;i++)
   {
       ll ans=g(i);
       v[ans].push_back(i);
   }
}
int main ()
{
    int tc,n,l,r,k;
    faster;
    fun();
    while (cin>>tc)
    {
        while (tc--)
        {
            cin>>l>>r>>k;
            ll ans;
            ll a= upper_bound(v[k].begin(),v[k].end(),r)-lower_bound(v[k].begin(),v[k].end(),l);
            cout<<a<<endl;
        }
    }
}
