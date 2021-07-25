#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,aa,bb;
    while (scanf("%d",&n)==1)
    {
        if (n%2==0)
        j=n/2-1;
        else
            j=n/2;
        for (i=j;i>=0;i--)
        {
            if (__gcd(i,n-i)==1)
            {
                aa=i;
                bb=n-i;
                break;
            }
        }
        printf("%d %d\n",aa,bb);
    }
return 0;
}
