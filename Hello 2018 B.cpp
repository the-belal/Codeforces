#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,sz,len,n,m;
    while (scanf("%d",&n)==1)
    {
        vector <int>v[1006];
        for (i=2;i<=n;i++)
        {
            scanf("%d",&m);
            v[m].push_back(i);
        }
        int p=1;
        for (i=1;i<=n;i++)
        {
            //cout<<v[i].size()<<endl;
            sz=v[i].size();
            if (sz>0 && sz<3)
            {
               p=0;
               break;
            }
            else if (sz!=0)
            {
                //len=v[i].size();
                int cnt=0;
               for (int j=0;j<sz;j++)
               {
                   int y=v[i][j];
                   if (v[y].size()==0)
                    cnt++;
                   if (cnt==3)
                    break;
               }
               if (cnt!=3)
               {
                   p=0;
                   break;
               }
            }
        }
        if (p==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
