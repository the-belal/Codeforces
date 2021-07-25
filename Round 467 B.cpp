#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
ll a[1047235],prime[100005];
ll sieve ()
{
    ll i,j,r;
    r=sqrt(1047235);
    for (i=4; i<=1047235; i+=2)
        a[i]=1;
    for (i=3; i<=r; i+=2)
    {
        for (j=i; i*j<=1047235; j+=2)
        {
            a[i*j]=1;
        }
    }
    j=0;
    for (i=2; i<=1047235; i++)
    {
        if (a[i]==0)
        {
            prime[j]=i;
            //cout<<prime[j]<<endl;
            j++;
        }
    }
}
int main ()
{
    faster;
    ll i,j,n,m,len,x;
    sieve();
    while (cin>>n>>m)
    {
        ll p;
        ll x=m;
        ll y=10000;
        len=10000-1;
        while (m-x<=10000 && x>n)
        {
            p=1;
            for (i=0; i<=len; i++)
            {
                if (prime[i]>n)
                    break;
                if (x%prime[i]==0)
                {
                    p=0;
                    break ;
                }
            }
            if (p==1)
            {
                break;
            }
            x--;
        }
        if (p==1)
            cout<<x<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}
