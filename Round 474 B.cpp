#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[1003],b[1003],diff[1003];
    int n,i,j,k1,k2;
    while (cin>>n>>k1>>k2)
    {
        for (i=1; i<=n; i++)
            cin>>a[i];
        for (i=1; i<=n; i++)
        {
            cin>>b[i];
            diff[i]=abs(a[i]-b[i]);
            //cout<<diff[i]<<endl;
        }
        sort(diff,diff+(n+1));
        int sum=k1+k2;
        i=n-1;
        while (sum>0 && i>1)
        {
            if (diff[i]<=sum)
            {
                while (diff[i]--)
            }
            else
            {
                diff[i]=diff[i]-sum;
                sum=0;
                break;
            }
            //cout<<diff[i]<<endl;
            i--;
        }
        k1=sum;
        sum=0;
        while (k1>0)
        {
            i=1;
            while (i<=n && k1!=0)
            {
                diff[i]--;
                k1--;
                i++;
            }
        }
        for (i=1; i<=n; i++)
            sum+=diff[i]*diff[i];
        cout<<sum<<endl;
    }
}
