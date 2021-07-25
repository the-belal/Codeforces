#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,mini,maxi,ans;
    int ar[100005];
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        int r=sqrt(x);
        if (x==0)
            cout<<"1 1\n";
        else if (r*r==x)
        {
            cout<<"-1\n";
        }
        else
        {
            r+=1;
            ans=r*r-x;
            int r2=sqrt(ans);
        //cout<<x<<endl;
            if (r2*r2==ans)
            {
                cout<<r<<' '<<r/r2<<endl;
            }
            else
              cout<<"-1\n";
        }
    }
}

