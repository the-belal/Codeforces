#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int len,n,m,cnt,i,j,p;
    while (scanf("%d%d",&n,&m)==2)
    {
        getchar();
        string st;
        double r;
        cin>>st;
        map<char,int>mp;
        map<char,int>:: iterator it;
        for (i=0;i<n;i++)
        {
            mp[st[i]]++;
        }
        r=(n/m);
        p=1;
        for (i=0;i<n;i++)
        {
            r= (double ) ceil(mp[st[i]]*1.0/m*1.0);
            if (r>1)
            {
                p=0;
                break;
            }
        }
        if (p==1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
