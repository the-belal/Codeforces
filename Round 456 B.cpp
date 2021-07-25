#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n,m,ans,sum;
    while (cin>>n>>m)
    {
        int j=log2(n);
        //cout<<j<<endl;
        sum=0;
        if (m!=0)
        for (int i=j;i>=0;i--)
        {
            int p=i;
            sum=sum+(1<<p);
            //cout<<i<<endl;
            m--;
            if (m==0)
                break;
        }
        if (m==1)
            cout<<n<<endl;
        else
        cout<<sum<<endl;
    }
    return 0;
}
