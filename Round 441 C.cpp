#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,i,j,sum,dif,x,digit,temp,cnt;
    while (scanf("%lld",&n)==1)
    {
        temp=n;
        cnt=0;
        while (temp!=0)
        {
            temp=temp/10;
            cnt++;
        }
        digit=cnt*9;
        cnt=0;
        vector<ll>v;
        for (i=n-digit;i<=n;i++)
        {
            temp=i;
            sum=i;
            while (temp!=0)
            {
                sum+=temp%10;
                temp=temp/10;
            }
            if (sum==n)
               {
                   cnt++;
                   v.push_back(i);
               }
        }
        printf("%lld\n",cnt);
        if (cnt!=0)
        {
            int len=v.size();
            for (i=0;i<len;i++)
            {
                printf("%lld",v[i]);
                if (i!=len-1)
                    printf(" ");
            }
            cout<<endl;
        }


    }
    return 0;
}
