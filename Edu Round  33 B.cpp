#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,i,j,n,m,len,p;
    vector<int>a;
    vector<int>ans;
    x=0;
    for (i=0;i<100005;i++)
    {
        a.push_back(x);
        x+=2;
        if (x>100005)
            break;
    }
    len=a.size();
    for (i=0;i<len;i++)
    {
        x=a[i];
        p=i+1;
        int sum=0;
        while (p--)
        {
            sum+=1<<x;
            x--;
        }
        ans.push_back(sum);
        if (ans[i]>5*100005)
            break;


    }
    len=ans.size();
    while (cin>>n)
    {
        for (i=len-1;i>=0;i--)
        {
            if (n%ans[i]==0)
            {
                cout<<ans[i]<<endl;
                break;
            }
        }
    }

return 0;
}
