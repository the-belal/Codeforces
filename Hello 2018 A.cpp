#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll i,j,rem,n,m,cnt,x;
    while (cin>>n>>m)
    {
        cnt=log2(m);
        if (cnt<n)
        cout<<m<<endl;
        else
        {
                if (n<=40)
               {
                    x=1<<n;
            cout<<m%x<<endl;
               }
               else
                cout<<m<<endl;

        }
    }
}
