#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,p,a[105];
    while (cin>>n)
    {
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if (a[0]==3)
        {
            printf("NO\n");
        }
        else
        {
            m=3;
            p=1;
            for (i=0;i<n;i++)
            {
               if (a[i]==m)
               {
                   p=0;
                   break;
               }
               else
               {
                   if (a[i]==1 && m==3)
                    m=2;
                   else if (a[i]==1 && m==2)
                    m=3;
                   else if(a[i]==2 && m==3)
                    m=1;
                   else if (a[i]==2 && m==1)
                    m=3;
                   else if (a[i]==3 && m==2)
                    m=1;
                   else if (a[i]==3 && m==1)
                    m=2;
                   // cout<<m<<' '<<a[i];
               }
            }
            if (p==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
