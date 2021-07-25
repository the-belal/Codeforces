#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n,l,r,a,sum;
    while (cin>>l>>r>>a)
    {
        int x=min(l,r);
        int y=max(l,r);
        if (x+a<=y)
            sum=2*(x+a);
        else
        {
            a=a-(y-x);
            a=a/2;
            sum=2*y+2*a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
