#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1005];
int main ()
{
    ll i,j,n,m;
    cin>>n;
    m=1;
    for (i=0;i<n;i++)
        cin>>a[i];
    sort (a,a+n);
    for (i=0;i<n;i++)
    {
        if (a[i]%a[0]!=0)
        {
            m=0;
            break;
        }
    }
    if (m==0)
        printf("-1\n");
    else
    {
        cout<<n<<endl;
        for (i=0;i<n-1;i++)
        cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    return 0;
}
