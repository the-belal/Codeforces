#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,cnt;
    string st,s;
    while (cin>>st>>s)
    {
        cout<<st[0];
        for (i=1;i<st.size();i++)
        {
            if (st[i]<s[0])
            {
                cout<<st[i];
            }
            else
            {

                break;
            }
        }
        cout<<s[0]<<endl;
    }
    return 0;
}
