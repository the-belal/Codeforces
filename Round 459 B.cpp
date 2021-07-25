#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m;
    cin>>n>>m;
    getchar();
    string st,s;
    map<string,string>mp;
    for (i=0;i<n;i++)
    {
        cin>>st>>s;
        s.push_back(';');
        mp[s]=st;
       // cout<<mp[s]<<endl;
    }
    for (i=0;i<m;i++)
    {
        cin>>st>>s;
        cout<<st<<' '<<s<<" #"<<mp[s]<<endl;
    }
}
