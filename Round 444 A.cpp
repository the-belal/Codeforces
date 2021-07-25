#include<bits/stdc++.h>
using namespace std;
#define mx 1000002
typedef long long ll;
int main ()
{
    ll i,j,n,m,ans,cnt,a,len;
    string st;
    while (cin>>st)
    {
        len=st.size();
        int p=0;
        cnt=0;
        for (i=0;i<len;i++)
        {
            if (st[i]=='1')
            {
                p=1;
            }
            if (st[i]=='0' && p==1)
            {
                cnt++;
            }
        }
        if (p==1 && cnt>=6)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
