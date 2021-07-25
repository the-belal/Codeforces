#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,cnt,n,t,a[105],p,ans,chk,zero;
    while (scanf("%d",&n)==1)
    {
        for (i=0;i<n;i++)
            cin>>a[i];
        cnt=0;
        p=0;
        zero=0;
        chk=0;
        for (i=0;i<n;i++)
        {
            if ( a[i]==1)
                {
                    chk=1;
                    cnt++;
                }
                else
                    p++;
                if (chk==0)
                    zero++;

        }
        /*for (i=1;i<n;i++)
        {
            if (a[i-1]==1)
        }*/
        ans=max(n-p,n-cnt);
        ans=max(ans,cnt+zero);
        cout<<ans<<endl;
    }
    return 0;
}
