#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,d,cnt,i,j,a[105];
    while (cin>>n>>d)
    {
        vector<int>v;
        for (i=0; i<n; i++)
        {
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        int maxi=-1;
        for (i=0; i<n; i++)
        {
            int x=(upper_bound(v.begin(),v.end(),v[i]+d)-lower_bound(v.begin(),v.end(),v[i]));
            maxi=max(maxi,x);
        }
        cout<<n-maxi<<endl;

    }
}
