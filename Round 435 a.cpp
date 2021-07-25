#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,n,m,x,a[1000],cnt,mini;
    while (scanf("%d%d",&n,&m)==2)
    {
        map<int,int>mp;
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            mp[a[i]]=1;
        }
        cnt=0;
        for (i=0;i<m;i++)
        {
            if (mp[i]==0)
                cnt++;
        }
        if (mp[m]==1)
            cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
