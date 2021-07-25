#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll k,n,a,b;
    while (cin>>n)
    {
        if (n>36)
            cout<<"-1\n";
        else
        {
            ll len=n/2;
            if (n%2!=0)
            cout<<'4';
            for (int i=0;i<len;i++)
                cout<<'8';
                cout<<endl;
        }

    }
}
