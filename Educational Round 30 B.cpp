#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,n,maxi,one[100005],zero[100005],i,j,x,y;
    char ch;
    string st;
    while (scanf("%d",&n)==1)
    {
        memset(one,0,sizeof(one));
        memset(zero,0,sizeof(zero));
        x=0;
        y=0;
        maxi=0;
        cin>>st;
        for (i=0;i<n;i++)
        {
            if (a[i]==0)
                x++;
            else
                y++;
                one[i]=y;
            zero[i]=x;
        }
        i=0;
        j=n-1;
        while (i<=j)
        {
            if (abs(one[i]-zero[i])==abs(one[j]-zero[j]))
            i++;
            j--;
        }

    }
}
