#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,p=0,sum=0,a[10];
    for (i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if (sum%2==1)
        printf("NO\n");
    else
    {
        p=0;
        sum=sum/2;
        for (i=0;i<6;i++)
        {
            for (j=0;j<6;j++)
            {
                for (int k=0;k<6;k++)
                {
                    if (i!=k && j!=k && i!=j)
                    {
                        n=a[i]+a[j]+a[k];
                    }
                    if (n==sum)
                        {
                            p=1;
                            break;
                        }
                }
                if (p==1)
                    break;
            }
            if (p==1)
                    break;
        }
        if (p==1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
