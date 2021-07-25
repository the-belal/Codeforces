#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,sum,n,p,temp,pre;
    while (scanf("%d%d%d%d",&n,&a,&b,&c)==4)
    {
        if (n==1)
        sum=0;
        else
            sum=min(a,b)+(n-2)*min(c,(min(a,b)));

        cout<<sum<<endl;
    }
    return 0;
}
