#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000006],b[1000006];
int main ()
{
    ll i,s,q1,q2,cnt,n,m,ans;

    while (cin>>n>>m)
    {
        q1=0;
        q2=0;
        cnt=0;
        map<ll,ll>mp;
        for (i=0;i<n;i++)
            {
                cin>>a[i];
                q1+=a[i];
                mp[q1]=1;
            }
        for (i=0;i<m;i++)
            {
                cin>>b[i];
                q2+=b[i];
                if (mp[q2]==1)
                    cnt++;
            }
            cout<<cnt<<endl;
    }
    return 0;
}
