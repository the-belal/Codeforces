#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,m,ans,sum,x,len,di[10005],mini,posi;
    while (scanf("%d",&n)==1)
    {
        vector<int>v;
        vector<int>d;
        vector<int>temp;
        for (i=0;i<n*2;i++)
        {
            scanf("%d",&x);
            v.push_back(x);
        }
        sort (v.begin(),v.end());
        di[0]=INFINITY;
        sum=0;
        for (i=0;i<n-1;i++)
        {
            d.push_back(INFINITY);
            len=v.size();
        for (j=1;j<len;j++)
        {
           x=v[j]-v[j-1];
            d.push_back(x);
            temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        len=d.size();
        for (j=0;j<len;j++)
        {
            if (d[j]==temp[0])
            {
                posi=j;
            }
        }
        sum+=temp[0];
        v.erase(v.begin()+posi);
        v.erase(v.begin()+posi-1);
        len=v.size();
        for (j=0;j<len;j++)
        {
            cout<<v[j]<<' ';
        }
        cout<<endl;
        temp.clear();
        d.clear();
        }
        cout<<sum<<endl;

    }
    return 0;
}
