#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,ans,p,cop;
    cin>>n>>m;
    cop=m-1;
    if ((n-cop)%2!=0 || ( n==1&& m==0) || m==0 || ( m==1 && n!=0))
    {
        cout<<"No\n";
    }
    else
    if ((n-cop)%2==0 && (n-cop)>=0)
    {
        cout<<"Yes\n";
    }
    else
        cout<<"No\n";

    return 0;
}
