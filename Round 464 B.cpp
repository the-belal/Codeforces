#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,n,k,j,ans,sum,x,y,p,num;
    while (cin>>n>>k)
    {
        ll a[100005];
        ans=0;
        ll maxi=-1;
        for (i=0;i<k;i++)
        {
            cin>>a[i];
            x=a[i];
            ll r=n/x;
            if (maxi<(r*x))
            {
                p=i;
                maxi=r*x;
            }
        }
        cout<<p+1<<' '<<n/a[p]<<endl;
    }
}
