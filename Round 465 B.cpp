#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,len;
    while (cin>>n)
    {
        string st;
        getchar();
        cin>>st;
        ll x=0;
        ll y=0;
        ll cnt=0;
        ll p=0,q=0;
        ll a,b;
        ll t;
        if (st[0]=='U')
            t=0;
        else
            t=1;
        for (i=0;i<n;i++)
        {
            if (st[i]=='U')
                y++;
                else
                    x++;
                    //cout<<x<<' '<<y<<endl;
                if (x>y)
            {

                if (p==0 && t==1)
                {
                        cnt++;
                p=1;
        t=0;
                //q=0;
                }

            }
            else if (x<y)
            {
                if (q==0 && t==0)
                 {
                        cnt++;
                        t=1;
                q=1;
                //p=0;
                 }

            }
            else
            {
                p=0;
                q=0;
            }


        }
        cout<<cnt-1<<endl;
    }
}
