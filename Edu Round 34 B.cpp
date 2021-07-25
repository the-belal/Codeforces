#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,a1,h1,a2,h2,c1;
    while (cin>>h1>>a1>>c1)
    {

        cin>>h2>>a2;
        string st;
        for (i=1;;i++)
        {


                h1-=a2;
            if (h1<=0 && (h2-a1)>0)
            {
                h1=h1+c1;
                st.push_back('h');
            }
            else
                {
                    st.push_back('s');
                    h2-=a1;
                }
            if (h2<=0)
                break;
        }
        cout<<i<<endl;
        for (i=0;i<st.size();i++)
        {
            if (st[i]=='h')
                cout<<"HEAL\n";
            else
                cout<<"STRIKE\n";
        }
    }
    return 0;
}
