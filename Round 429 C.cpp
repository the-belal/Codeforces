#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005],c[200005];

struct cp {
    ll x,y;
};
bool S(cp i, cp j)
{
  return i.x<j.x;
}
int main ()
{
    ll len,n,m,cnt,i,j,p;

    while (scanf("%lld",&n)==1)
    {
        cp b[200005];
        for (i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for (i=0;i<n;i++)
        {
            scanf("%lld",&b[i].x);
            c[i]=b[i].x;
            b[i].y=i;
        }
        sort (a,a+n);
        sort(b,b+n,S);
        map<ll,ll>mp;
        j=n-1;
        for (i=0;i<n;i++)
        {
           mp[b[i].y]=a[j];
           j--;
        }
        for (i=0;i<n;i++)
        {
            if (i!=0)
                printf(" ");
            printf("%lld",mp[i]);
        }
        printf("\n");
    }

    return 0;
}
