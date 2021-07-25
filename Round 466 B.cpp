#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k,a,b;
ll fun(ll x)
{
    ll sum=0,i;
    ll mul,p;
//    while (x%k!=0)
//    {
//        cout<<sum<<endl;
//        sum+=a;
//        x--;
//    }
    while (x!=1)
    {
       // cout<<x<<endl;
        p=x/k;
        if (x%k==0)
        {
            sum+=min((x-p)*a,b);
            //cout<<x<<' '<<sum<<endl;
            x=x/k;
        }
        else
        {
            if (k>x)
            {
                sum+=(x-1)*a;
                break;
            }
            else
            {

            sum+=(x-(p*k))*a;
            //cout<<x<<' '<<sum<<endl;
            x=p*k;
            }
        }

    }
    return sum;
}
int main ()
{
    ll i,j,n;
    while (cin>>n>>k>>a>>b)
    {
        ll x=n;

        if (k==1)
        {
            cout<<a*(n-1)<<endl;

        }
        else
        {
            ll ans=fun (x);
        cout<<ans<<endl;
        }
    }
}
