#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,k,tc,a[1005];
    scanf("%d",&tc);
    while (tc--)
    {
        map<int,int>mp;
        scanf("%d%d",&n,&k);
        for (i=0; i<k; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+k);
        int t=0;
        int p=0;
        //cout<<a[0];
        while (t<=n)
        {
            //cout<<'5';
            p=0;
            for (i=0; i<k; i++)
            {
                int x=a[i]-t;
                int y=a[i]+t;
                if (x>=0)
                mp[x]=1;
                //cout<<a[i]-t<<endl;
                if (y<=n)
                mp[y]=1;
                else
                    break;
            }

            for (i=1; i<=n; i++)
            {
                //cout<<mp[i]<<endl;
                if (mp[i]==0)
                {
                    p=1;
                    break;
                }

            }
            if (p==0)
            {
                break;
            }
            t++;

        }
        cout<<t+1<<endl;
    }
    return 0;
}
