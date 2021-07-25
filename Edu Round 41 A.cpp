#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll q[100005],a[100005],bl[100005];
int main ()
{
    ll i,j,n;
    ll k;
    cin>>n>>k;
    q[0]=0;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        q[i]=q[i-1]+a[i];
    }
    for (i=1;i<=n;i++)
        cin>>bl[i];
    ll posi=-1;
    ll maxi=-1;
    for (i=1;i<=n-k+1;i++)
    {
        if (bl[i]==0)
        {
            ll x=q[i+k-1]-q[i-1];
            if (maxi<x)
            {
                maxi=x;
                posi=i;
            }
        }
    }
    if ((n-k+2)<=n)
    if ( bl[n-k+2]==0)
        {
           ll x=q[n]-q[n-k];
           if (x>maxi)
           {

               maxi=x;
               posi=n-k+1;
           }
        }
        //cout<<maxi<<endl;
    if (posi==-1)
    {
        cout<<q[n]<<endl;
    }
    else
    {
        ll sum=0;
        for (i=1;i<=n;i++)
        {
            if (bl[i]==1 || (i>=posi && i<posi+k))
            {
                sum+=a[i];
            }
        }

        //cout<<posi<<' '<<posi+k-1<<endl;
        cout<<sum<<endl;
    }
}
