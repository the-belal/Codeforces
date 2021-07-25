#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,p,k,ans,two,five,res;
    while (scanf("%lld%lld",&n,&k)==2)
    {
        m=1;
        for (i=1;i<=k;i++)
            m*=10;
            ans=INFINITY;
            res=INFINITY;
            if (n%m==0)
            printf("%lld\n",n);
            else
            {
                if (n%2!=0 && n%5!=0)
                    ans=n*m;
                else
                {
                    while (n%10==0)
                    {
                        n=n/10;
                    }
                    for (i=10;i<m;i+=10)
                {
                    if ((n*i)%m==0)
                    {
                        ans=i*n;
                        break;
                    }
                }
                }
              printf("%lld\n",ans);
            }

    }
    return 0;
}
