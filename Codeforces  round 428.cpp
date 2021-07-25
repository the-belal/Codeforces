#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,n,m,i,j,t,a[1005],sum,carry,s;
    while (scanf("%d%d",&n,&t)==2)
    {
        for (i=0;i<n;i++)
        cin>>a[i];
        sum=0;
        k=-1;
        carry=0;
        if (n*8<t)
            printf("-1\n");
        else
        {
        for (i=0;i<n;i++)
        {

            s=carry+a[i];
            if (s>=8)
            {
                carry=s-8;
                s=8;

            }
            else
                carry=0;
            sum+=s;
            if (sum>=t)
            {
                k=i+1;
                break;
            }
        }
        printf("%d\n",k);
        }
    }
    return 0;
}
