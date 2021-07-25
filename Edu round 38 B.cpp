#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,mini,maxi,ans;
    int ar[100005];
    while (cin>>n)
    {
        maxi=-1;
        for (i=0;i<n;i++)
        {
            int p=1000000;
            cin>>ar[i];
            mini=min(ar[i]-1,(p-ar[i]));
            maxi=max(maxi,mini);
        }
        cout<<maxi<<endl;
    }
}
