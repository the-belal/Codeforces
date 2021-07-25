#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,cnt,len,p,a,b;
    string st;
    while (cin>>st)
    {
        len=st.size();
        cnt=0;
        p=0;
        if (st[0]=='b')
        for (i=0;i<len;i++)
        {
           if (st[i]=='a')
                p=1;
           if (p==1 && st[i]=='b')
           cnt++;
        }
        a=len-cnt;
        p=-1;
        cnt=0;
        int sum=0;
        int posi=-1;
        int aa=0,bb=0;
        b=0;
        int bal=0;
        vector<int>v;
        for (i=0;i<len;i++)
        {
            if (st[i]=='a' && p==-1)
            {
                p=i;

            }
            if (p!=-1 && st[i]=='b' && b==0)
            {
                b=1;
            }
            if (p!=-1 && st[i]=='b')
                bal++;
//            if (b==1)
//            {
//                if (st[i]=='a')
//                    aa++;
//                else
//                    bb++;
//            }
            if (b==1)
            {
                if (st[i]=='a')
                {
                    if (cnt!=0)
                    v.push_back(cnt);
                    cnt=0;
                }
                else
                    cnt++;
            }
        }
        v.push_back(0);
        sort(v.begin(),v.end());
        int ans=len-p-bal+v[v.size()-1];
        cout<<max(a,ans)<<endl;
    }
    return 0;
}
