#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,cnt,len;
    string st;
    while (cin>>st)
    {
        len=st.size();
        cnt=0;
        for (i=0;i<len;i++)
        {
            if (st[i]=='a' || st[i]=='e' ||st[i]=='i' ||st[i]=='o' ||st[i]=='u' )
            cnt++;
            else if (st[i]>='0' && st[i]<='9')
            {
                if (st[i]!='0' && st[i]!='2' &&st[i]!='4' && st[i]!='6' && st[i]!='8' )
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
