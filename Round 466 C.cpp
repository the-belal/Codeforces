#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,len,n,m,t,cnt;
    while (cin>>n>>m)
    {
        getchar();
        string s;
        cin>>s;
        vector<char>v;
        set<char>st;
        set<char> :: iterator it;
        for (i=0; i<n; i++)
        {
            v.push_back(s[i]);
            st.insert(s[i]);
        }
        sort(v.begin(),v.end());

        if (n<m)
        {
            cout<<s;
            for (i=n; i<m; i++)
            {
                cout<<v[0];
            }
            cout<<endl;
        }
        else
        {
            i=m-1;
            while (1)
            {
                if (s[i]==v[n-1])
                {
                    s[i]=v[0];
                    i--;
                }
                else
                {
                    it=st.find(s[i]);
                    it++;
                    s[i]=*it;
                    break;
                }
            }
            for (i=0; i<m; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}
