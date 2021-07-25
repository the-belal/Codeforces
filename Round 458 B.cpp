#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,i,k,j,n,a[100005];
    while (cin>>n)
    {
    int maxi=-1;
    int mini;
    map<int,int>mp;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (i==0)
            mini=a[i];
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
        mp[a[i]]++;
    }
    m=mp[maxi];
    if (m%2==0)
        {
            sort(a,a+n);
            int cnt=0;
            for (i=n-1;i>=0;i--)
            {
                if (mp[a[i]]%2!=0)
                {
                    cnt=1;
                    break;
                }
            }
            if (cnt==0)
            cout<<"Agasa\n";
            else
              cout<<"Conan\n";
        }
    else
        cout<<"Conan\n";

    }

}
