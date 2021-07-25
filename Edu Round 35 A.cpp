#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll m,n,low,p,i,a[100005],mini;
    while (cin>>n)
    {
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (i==0)
                mini=a[0];
            mini=min(mini,a[i]);
        }
        ll prev=-1;
        low=100000007;
        p=-1;
        for (i=0;i<n;i++)
        {
            if (a[i]==mini)
            {
                p=i;
            }
            if (prev!=-1)
            {
                if (p!=prev)
                low=min(low,p-prev);
            }
            if (p!=-1)
            prev=p;
        }
        cout<<low<<endl;
    }
}
