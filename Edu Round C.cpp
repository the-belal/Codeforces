#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,maxi,a[200005];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string st;
    getchar();
    cin>>st;
    int len =st.size();
    maxi=-1;
    int p=1;
    for (i=0;i<len;i++)
    {
        maxi=max(maxi,a[i]);
        if (st[i]=='0')
        {
            if (maxi>i+1)
            {
                p=0;
                break;
            }
        }
        //cout<<a[i]<<endl;
    }
    if (p)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
