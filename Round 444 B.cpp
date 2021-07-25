#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int cnt,i,j,n,m,ans,p,x,maxi,a[10][10],sum,k;
    while (cin>>n)
    {
        maxi=0;
        map<int,int>mp;
        for (i=0; i<n; i++)
            for (j=0; j<6; j++)
            {
                cin>>x;
                a[i][j]=x;
                mp[x]++;
                maxi=max(maxi,x);
            }
//        p=-1;
//        for (i=1; i<=9; i++)
//        {
//            if (mp[i]==0)
//            {
//                p=i-1;
//                break;
//            }
//
//        }
//        if (p==-1)
//            maxi=9;
//            if (p!=-1)
//                cout<<p<<endl;
//        else if (mp[0]==0)
//            cout<<maxi<<endl;
//            else
            {
                if (n>=2)
                    {
                        for (j=0;j<6;j++)
                    {
                        for ( k=0;k<6;k++)
                        {
                             sum=a[0][j]*10+a[1][k];
                            mp[sum]=1;
                            //cout<<sum<<endl;
                            sum=a[0][j]+a[1][k]*10;
                            mp[sum]=1;
                           // cout<<sum<<endl;
                        }
                    }


                    }
                if (n==3)
                {
                    for (j=0;j<6;j++)
                    {
                        for ( k=0;k<6;k++)
                        {
                             sum=a[1][j]*10+a[2][k];
                            mp[sum]=1;
                            sum=a[1][j]+a[2][k]*10;
                            mp[sum]=1;
                        }
                    }
                    for (i=0;i<6;i++)
                    {
                        for (j=0;j<6;j++)
                        {
                             sum=a[0][i]*10+a[2][j];
                            mp[sum]=1;
                            sum=a[0][i]+a[2][j]*10;
                            mp[sum]=1;
                        }
                    }
                }
                for (i=1;i<=100;i++)
                {
                    if (mp[i]==0)
                    {
                        cout<<i-1<<endl;
                        break;
                    }
                }
            }

    }
    return 0;
}
