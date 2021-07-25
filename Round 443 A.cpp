#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,sum,ans,mini,jawa,a[1005],b[1005];
    while (cin>>n)
    {
        for (i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if (i==0)
            jawa=a[0];
            sum=a[i];
            if (i!=0)
            for (j=0;;j++)
            {
                if (sum>jawa)
                {
                    jawa=sum;
                    break;
                }
                sum+=b[i];
            }

        }
        cout<<jawa<<endl;
    }
    return 0;
}
