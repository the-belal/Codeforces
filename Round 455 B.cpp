#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int main()
{
    int i,j,n,m,cnt,total;
    while (cin>>n)
    {

        total=(n*(n+1))/4;
//        cnt=0;
//        for (i=n;i>0;i--)
//        {
//            for (j=1;j<=n-i;j++)
//            {
//                if (a[j][i]==0)
//                {
//                    cnt++;
//                    a[j][i]=-1;
//                    a[i][n]=1;
//                }
//            }
//        }
            cout<<total+1<<endl;
    }
    return 0;
}
