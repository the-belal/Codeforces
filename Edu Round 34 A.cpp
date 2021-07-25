#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,x,i,j,n,tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        int rem=1;
        int p=0;
        if (n%3==0|| n%7==0)
        {
            p=1;
        }

        int sum=1;
        for (i=1;; i++)
        {
            sum=i*3;
            if (sum>n)
                break;
            if ((n-sum)%7==0)
            {
                p=1;
                break;
            }

        }
        for (i=1;; i++)
        {
            sum=i*7;
            if (sum>n)
                break;
            if ((n-sum)%3==0)
            {
                p=1;
                break;
            }

        }
        if (p==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
