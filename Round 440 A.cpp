#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a[1005],b[1005],i,j,ans;
    while (scanf("%d%d",&n,&m)==2)
    {
        for (i=0;i<n;i++)
        {
            cin>>a[i];

        }
        map<int ,int>mp;
        for (i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        for (i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int p=1;
        for (j=0;j<m;j++)
        {
            if (mp[b[j]]>0)
            {
                p=0;
                cout<<b[j]<<endl;
                break;

            }
        }
        if (p)
        {
            printf("%d%d\n",min(a[0],b[0]),max(a[0],b[0]));
        }


    }
    return 0;
}
