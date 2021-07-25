#include<bits/stdc++.h>
using namespace std;
struct st{
    int l,r,posi;
};
bool cmp(st a,st b)
{
    if(a.l==b.l)
        return a.posi<b.posi;
    else return a.l<b.l;
}
int main ()
{
    int i,j,n,m,cnt;
    st a[1003];
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            scanf("%d%d",&a[i].l,&a[i].r);
            a[i].posi=i+1;
        }
        sort(a,a+n,cmp);
        map<int,int>mp;
        int t=a[0].l;
        queue<st>q;
        st x;
        for (i=0;i<n;i++)
        {
            q.push(a[i]);
        }
        while (!q.empty())
        {
            x=q.front();
            if (t>=x.l && t<=x.r)
            {
                q.pop();
                mp[x.posi]=t;
            }
            else if (t>x.r)
            {
                q.pop();
                t--;
            }
            t++;
        }
        for (i=1;i<=n;i++)
            if (i==n)
            printf("%d\n",mp[i]);
        else
            printf("%d ",mp[i]);

    }
    return 0;
}
