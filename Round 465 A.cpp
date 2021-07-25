#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,len;
    while (cin>>n)
    {
        ll cnt=0;
        for (i=1;i<n;i++)
        {
            if ((n-i)%i==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}
