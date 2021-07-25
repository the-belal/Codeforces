#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,a[100005],maxi,mini;
    while (cin>>n>>m)
    {
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (i==0)
            {
                maxi=a[i];
                mini=maxi;
            }
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        sort(a,a+n);
        if (m==1)
            cout<<a[0]<<endl;
        else
            cout<<a[n-1]<<endl;
    }
    return 0;
}
