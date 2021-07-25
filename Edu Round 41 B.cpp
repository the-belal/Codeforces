#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
ll q[100005],a[100005],bl[100005];
int main ()
{
    faster;
    ll i,j,n;
    ll k;
    cin>>n>>k;
    q[0]=0;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        q[i]=q[i-1]+a[i];
    }
    for (i=1; i<=n; i++)
        cin>>bl[i];
    ll posi=-1;
    ll maxi=-1;
    j=1;
    ll sum=0;
    for (i=1;i<=n;i++)
    {
        if (bl[i]==0)
        sum+=a[i];
    }
    ll sum=0;
    if (posi==-1)
        cout<<q[n]<<endl;
    else
    for (i=1; i<=n; i++)
    {
        if (bl[i]==1 || (i>=posi && i<posi+k))
            sum+=a[i];
    }
    cout<<sum<<endl;
}
