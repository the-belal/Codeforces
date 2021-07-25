#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll m,n,low,p,i,x,y,maxi,a,b;
    while (cin>>n>>a>>b)
    {
        maxi=-1;
       for (i=1;i<n;i++)
       {
           x=a/i;
           y=b/(n-i);
           if (x!=0 && y!=0)
           {
               maxi=max(maxi,min(x,y));
           }
       }
        cout<<maxi<<endl;
    }
    return 0;
}

