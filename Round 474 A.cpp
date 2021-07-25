#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,len,a=0,b=0,c;
    string st;
    cin>>st;
    len=st.size();
    map<char,int>mp;
    for (i=0;i<len;i++)
    {
        if (st[i]=='a')
            {
                a=1;
                mp['a']++;
            }
        if (st[i]=='b' && a==1)
            b=1;
        if (a==1 && b==1)
        mp[st[i]]++;
    }
    //cout<<mp['c']<<endl;
    if ((mp['c']==mp['a'] || mp['c']==mp['b']) && mp['a']!=0 && mp['b']!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
