#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 10000005
int main ()
{
    ll i,j,n,m,x,y,a,b,c,p,ans;
    while (scanf("%lld%lld%lld",&a,&b,&c)==3)
    {
        ll tc=mx;
        double fr;
        int mul=10;
        p=0;
        while (tc--)
        {
            a*=10;
            ll res=a/b;
            if (res==c)
            {
                p=1;
                break;
            }
            a=a%b;
        }
        if (p==0)
            ans=-1;
        else
            ans=mx-tc;
        printf("%lld\n",ans);
    }
    return 0;
}

