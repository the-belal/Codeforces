#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,cnt,mx,m,a[1000],chk;
    while (scanf("%d",&n)==1)
    {
        for (i=0;i<2*n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+2*n);
        chk=1;
        if (a[n-1]==a[n])
        chk=0;

        if (chk==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
        return 0;

}
