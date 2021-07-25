#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,sum,cnt,a[100005],dif[100005],n,k,m,maxi,num,y;
    while (scanf("%lld%lld%lld",&n,&k,&m)==3)
    {
        map<ll,ll>mp;
        maxi=0;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            y=a[i]%m;
            mp[y]++;
            if (maxi<mp[y])
            {
                maxi=mp[y];
                num=y;
            }
        }
        if (maxi>=k)
        {
            printf("Yes\n");
            cnt=0;
            for (i=0;i<n;i++)
            {
                if (a[i]%m==num)
                {
                    printf("%lld",a[i]);
                    cnt++;
                    if (cnt==k)
                        break;
                    else
                        printf(" ");
                }
            }
            printf("\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
