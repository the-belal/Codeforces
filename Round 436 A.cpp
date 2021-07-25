#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,cnt,x,i,ans[105];
    while (scanf("%d",&n)==1)
    {
        cnt=0;
        int j=0;
        map<int,int>mp;
        for (i=0;i<n;i++)
            {
                cin>>x;

                if (mp[x]==0)
                {
                    mp[x]++;
                    cnt++;
                    ans[j]=x;
                    j++;
                }

            }
            if (cnt==2 && mp[ans[0]]==mp[ans[1]])
                {
                   printf("YES\n%d %d\n",ans[0],ans[1]);
                }
                else
                    printf("NO\n");

    }
    return 0;
}
