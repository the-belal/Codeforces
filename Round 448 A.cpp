#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,len,a[400],cnt,s,ans;
    while (cin>>n)
    {
        ll sum=0;
        s=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cnt=sum;
       ll mini=500;
        for (i=0;i<n;i++)
        {
            for (j=0;j<=n-i;j++)
            {
                sum=0;
                for (int k=i;k<=i+j&& k<n ;k++)
                {
                    sum+=a[k];
                }
                mini=min(mini,abs (cnt-sum-sum));
            }
        }
        printf("%lld\n",mini);
    }
    return 0;
}
