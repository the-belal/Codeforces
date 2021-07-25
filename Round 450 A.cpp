#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,x,y;
    while (cin>>n)
    {
        int cnt=0;
        for (i=0;i<n;i++)
        {
            cin>>x>>y;
            if (x<0)
                cnt++;
        }
        if (cnt==1 || (n-cnt)<=1 || cnt==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
