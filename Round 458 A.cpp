#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,a[1003];
    while (cin>>n)
    {
        for (i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for (i=n-1; i>=0; i--)
        {
            int r=sqrt(a[i]);
            if (r*r!=a[i] || a[i]<0)
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
}
