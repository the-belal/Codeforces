#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,ans,i;
    while (cin>>a>>b>>c>>d)
    {
        if (d<=c && (2*d)>=c )
            printf("%d\n%d\n%d\n",2*a,2*b,2*d);
        else
        {
            if (d>=c && (2*c)>=d)
            {
                printf("%d\n%d\n%d\n",2*a,2*b,2*c);
            }

            else
                printf("-1\n");

        }
    }
    return 0;
}
