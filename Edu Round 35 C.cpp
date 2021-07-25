#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[100005];
int main ()
{
    ll m,n,low,p,i,x,y,maxi,a,b;
    while (cin>>n>>a>>b)
    {
        memset(ar,0,sizeof(ar));
      if (n==1 || a==1 || b==1)
        cout<<"YES\n";
      else
        {

            ar[n]++;
            ar[a]++;
            ar[b]++;

            //cout<<ar[2]<<' '<<ar[3]<<endl;
            if (ar[2]>=2 || ar[3]==3)
             cout<<"YES\n";
             else if (ar[2]==1 && ar[4]==2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}


