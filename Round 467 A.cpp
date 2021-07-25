#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,len,x;
    ll a[105];
    while (cin>>n)
    {
        set<int>st;
        for (i=0;i<n;i++)
        {
            cin>>len;
            if (len!=0)
                st.insert(len);
        }
        cout<<st.size()<<endl;
    }
}
