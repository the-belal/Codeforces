#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,cnt,k,a[1000];
    while (cin>>n>>k)
    {
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for (i=n-1;i>=0;i--)
        {
            if (k%a[i]==0)
            {
                cout<<k/a[i]<<endl;
                break;
            }
        }
    }
}
