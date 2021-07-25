#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[200005],i,j,n,m,p,cnt,len;
    while (scanf("%d",&n)==1)
    {
        set<int>s;
        for (i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                s.insert(a[i]);
            }
            len=s.size();
            ///cout<<len<<endl;
            map<int,int>mp;
            cnt=0;
            for (i=n-1;i>=0;i--)
            {
                if (mp[a[i]]==0)
                {
                    cnt++;
                    mp[a[i]]=1;
                }
                if (cnt==len)
                {
                    printf("%d\n",a[i]);
                    break;
                }
            }
    }
    return 0;
}
