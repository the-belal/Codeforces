#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,a[5005],cost[5005];
    double mini=99999999.0,ans;
    while (cin>>n>>m)
    {

        for (i=0;i<n;i++)
        {
            cin>>a[i]>>cost[i];
            ans= (double) (a[i]*1.0/cost[i]*1.0);
            mini=min(mini,ans);
        }
        printf("%.8lf\n",m*mini);
        mini=99999999.0;
    }
}
