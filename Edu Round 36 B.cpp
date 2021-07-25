#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int cnt;
    int i,n,l,r,posi;
    while (cin>>n>>posi>>l>>r)
    {
        cnt=0;

        if (l>posi)
        {
            cnt+=l-posi;
            posi=l;
        }
        else if (posi>r)
            {
                cnt+=posi-r;
                posi=r;
            }
        if (r==n)
        {
            if (l!=1)
            cnt+=posi-l+1;
            //cout<<"N";
        }
        else if (l==1)
        {
            cnt+=r-posi+1;
        }
        else if (posi>=l && posi<=r)
        {
            cnt+=r-l;
            cnt+=min(abs(l-posi),abs(r-posi));
            cnt+=2;
        }


         cout<<cnt<<endl;


    }
}
