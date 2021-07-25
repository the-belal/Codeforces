#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,k,p,a=1,b,ans;
    while (scanf("%lld%lld",&n,&k)==2)

    if (k==0 || n==1 || k==n)
        printf("0 0\n");
    else
    {
        if (n-k<=k)
            ans=n-k;
        else
        {
            if (k*3<=n)
                ans=2*k;
            else
                {
                   ans=k+(n-2*k);
                }
        }
        printf("1 %lld\n",ans);
    }


    return 0;
}
