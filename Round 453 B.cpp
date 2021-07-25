#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b[10004],source,i,j,col[10004],n,x,y;
    vector <int>v[10004];
    scanf("%d",&n);

        for (i=2;i<=n;i++)
        {
            cin>>a;
            v[a].push_back(i);
        }
        for (i=1;i<=n;i++)
            scanf("%d",&b[i]);
        int cnt=0;
        queue <int>q;
        q.push(1);
        while(!q.empty())
        {
            x=q.front();
            q.pop();
            int len=v[x].size();
            if (col[x]!=b[x])
            {

            cnt++;}
            for (i=0;i<len;i++)
            {
                y=v[x][i];
                q.push(y);
                col[y]=b[x];
            }

        }
        printf("%d\n",cnt);
}
