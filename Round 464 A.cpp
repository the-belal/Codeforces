#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a[5003],i,j;
    while (cin>>n)
    {
        map<int,int>mp;
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[i]=a[i];
        }
        j=0;
        for (i=1;i<=n;i++)
        {
            //
            int x=mp[i];
            int y=mp[x];
            if ( i==mp[y] && i!=x && i!=y && x!=y)
            {
               // cout<<i<<endl;
                j=1;
                break;
            }
        }
        if (j)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
