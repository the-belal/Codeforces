#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,cnt,a,b,x,yy;
    ll y,bl,g,ny,nb,ng;
    while (cin>>a>>b)
    {
        cin>>y>>g>>bl;
        ny=y*2+g;
        nb=g+3*bl;
        x=ny-a;
        yy=nb-b;
        if (x<0)
            x=0;
        if (yy<0)
            yy=0;
        cnt=x+yy;
        if(cnt<0)
            cnt=0;
        cout<<cnt<<endl;

    }
}
