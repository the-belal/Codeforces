#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,x,a[105],i,j,sum;
    while (scanf("%d%d%d",&n,&k,&x)==3)
    {
        for (i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sum=0;
        for (i=0; i<n-k; i++)
        {
            sum+=a[i];
        }
        for (i=n-k; i<n; i++)
        {
            sum+=min(a[i],x);
        }
        cout<<sum<<endl;

    }
    return 0;
}
