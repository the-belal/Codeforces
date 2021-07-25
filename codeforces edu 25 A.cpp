#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,cnt,len,b,k,vlen,ck;
    ll a[1000];
    vector<ll>v;
    string st;
    while (scanf("%lld",&len)==1)
    {
        getchar();
        getline(cin,st);
        cnt=0;
        j=0;
        for (i=0;i<len;i++)
        {
            if (st[i]=='1')
                cnt++;
                else
                {
                    if (cnt!=0)
                  v.push_back(cnt);
                  cnt=0;
                  j++;

                }

        }
        if (st[len-1]=='1')
            v.push_back(cnt);
       vlen=v.size();
       j=0;
       ck=1;
        for (i=0;i<len-1;i++)
        {

            if (st[i]=='0' && st[i+1]=='0')
                {
                    printf("0");
                    ck=1;
                }
                else
                {
                    if  (ck==1)
                    {

                    printf("%lld",v[j]);
                    j++;
                    }
                    ck=0;

                }
        }
        if (st[len-1]=='1' && v[j]!=0)
            printf("%lld",v[j]);
        printf("\n");
        v.clear();
    }
}
