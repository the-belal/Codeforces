#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,j,x,n,m,sum,a[100005];
    while (scanf("%lld",&n)==1)
    {
        sum=0;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&x);
            sum+=x;
        }
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort (a,a+n);
        if (sum<=a[n-1]+a[n-2])
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
