#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,len,flg;
    string st;
    while (cin>>st)
    {
        len=st.size()-1;
        while (st[len]=='0')
        {
            len--;
        }
        i=0;
        flg=1;
        while (i<len)
        {
           if (st[i]!=st[len])
           {
               flg=0;
               break;
           }
           i++;
           len--;
        }
        if (flg)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
