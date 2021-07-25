#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1503];
int main ()
{
    ll m,n,low,p,i,x,y,mini[1503],maxi[1503];
    while (scanf("%lld",&n)==1)
    {

       for (i=0;i<n;i++)
       {
           scanf("%lld",&a[i]);

       }
       for (i=0;i<n;i++)
       {
           for (int j=0;j<n;j++)
           {
               if (a[i]>a[j])
               {
                   mini[a[i]]++;

               }
               if (a[i]<a[j])
               {
                   maxi[a[i]]++;

               }
           }
       }
        cout<<maxi<<endl;
    }
    return 0;
}


