#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,j,cnt=0,n;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            ll x=i^j;
            if ( (x+i)>j && (x+j)>i && (i+j)>x && x<=n)
                {
                    cnt++;
                    //cout<<i<<' '<<j<<' '<<x<<endl;
                }
        }
    }
    cout<<cnt/3<<endl;
    return 0;
}
