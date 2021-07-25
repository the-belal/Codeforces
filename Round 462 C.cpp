#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st {
    ll x,y;
};
int main ()
{
    ll k,n,a[2504],b;
    while (cin>>n)
    {
        for (int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        ll maxi=0;
        for (int i=0;i<n;i++)
        {
            ll len=1;
            ll x=-1;
            ll cnt=0;
            for (int j=i;j<n;j++)
            {
                if (a[j]!=x)
                {
                    x=a[j];
                    cnt++;
                    //cout<<cnt;
                    if (cnt==5)
                        break;
                }
                len=j-i+1;
            }
            maxi=max(maxi,len);
        }
        cout<<maxi<<endl;
    }
}

