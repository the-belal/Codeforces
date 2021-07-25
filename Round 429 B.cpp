#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll len,n,m,cnt,i,j,p;

    while (scanf("%lld",&n)==1)
    {
        p=2;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&m);
            if (m%2!=0)
                p=1;
        }
        if (p==1)
            printf("First\n");
        else
            printf("Second\n");
    }
 return 0;
}
