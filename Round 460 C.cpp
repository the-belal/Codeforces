#include<bits/stdc++.h>;
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,cnt,k;
    while (cin>>n>>m>>k)
    {
        string st[2005];
        getchar();
        for (i=0;i<n;i++)
        {
            cin>>st[i];
        }
        ll sum=0;
        ll ans=0;

        for (i=0;i<n;i++)
        {
            cnt=0;
            for (j=0;j<m;j++)
            {
                //cout<<st[i][j];
                if (st[i][j]=='.')
                    cnt++;
                else if (st[i][j]=='*')
                {
                    if (cnt>=k)
                sum+=cnt-k+1;
                cnt=0;
                }
                //cout<<cnt<<endl;


            }
            if (cnt>=k)
                sum+=cnt-k+1;
                cnt=0;
            //cout<<endl;

        }
        if (n!=1 && m!=1 && k!=1)
        for (i=0;i<m;i++)
        {
            cnt=0;
            for (j=0;j<n;j++)
            {
                //cout<<st[j][i];
                if (st[j][i]=='.')
                    cnt++;
                else if (st[j][i]=='*')
                {
                    if (cnt>=k)
                sum+=cnt-k+1;
                cnt=0;
                }
                //cout<<cnt<<endl;
            }
            if (cnt>=k)
                sum+=cnt-k+1;
                cnt=0;
            //cout<<endl;
        }
        cout<<sum<<endl;
    }
}
