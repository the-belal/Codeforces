#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,v,n,m,k,cnt,p,po;
    while (cin>>n>>k)
    {
        p=0;
        if (n<k)
        {
            if (n==1)
            for (i=0;i<k;i++)
            {
                if (i=!0)
                    cout<<"-"<<k;
                p=1;
            }
            if (k%n==0)

        }
        else
        {
            po=0;
            m=n;
            vector<int>v;
            cnt=0;
            while (po!=k)
            {
                if (n&cnt!=0)
                {
                    ll ans=1;
                    if (ans%(n/pow(2,cnt))==0)
                     ans=n/pow(2,cnt);
                     for (j=0;j<ans;j++)
                     {
                         v.push_back(cnt);
                     }
                     pow+=ans;
                }
                po++;
            }
        }
    }
}
