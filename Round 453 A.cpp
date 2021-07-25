#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,x,y;
    int a[105],b[105];
    while (cin>>n>>m)
    {
        int p=1;
        int mp[105];
        memset(mp,0,sizeof(mp));
        for (i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];

            if (a[0]==0)
                mp[0]=1;
                if (mp[a[i]]==1)
            for (j=a[i];j<=b[i];j++)
            {
                mp[j]=1;


            }
        }
        for (i=0;i<=m;i++)
            if (mp[i]==0)
        {
            p=0;
            break;
        }
        if (p)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
