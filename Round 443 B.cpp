#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,n,m,j,k,p,ans,mini,cnt,maxi,posi;
    ll a[505];
    while (cin>>n>>k)
    {
        maxi=-1;
        for (i=0;i<n;i++)
            {
                cin>>a[i];
            maxi=max(maxi,a[i]);
            }

    if (n<=k)
        cout<<maxi<<endl;
    else
    {
        for (i=0;i<n;i++)
        {
            if (a[i]>a[i-1] && i!=0)
            cnt=1;
            else
                cnt=0;
            for (j=i+1;j<n;j++)
            {
                if (a[j]<a[i])
                    cnt++;
                    else
                        break;
            }
            if (cnt>=k || a[i]==maxi)
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    }
    return 0;
}
