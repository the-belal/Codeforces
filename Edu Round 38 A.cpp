#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,len,l,j;

    while (cin>>len)
    {
        string st;
        getchar();
        cin>>st;
        //len=st.size();
        if (len==1)
            cout<<st<<endl;
        else
        {
//            for (i=1;i<len;i++)
//            {
//                if ((st[i-1]=='a' ||st[i-1]=='e' ||st[i-1]=='i' ||st[i-1]=='o' ||st[i-1]=='u' ) &&((st[i]=='a' ||st[i]=='e' ||st[i]=='i' ||st[i]=='o' ||st[i]=='u' )) )
//                    st[i]='2';
//
//            }
//            for (i=0;i<len;i++)
//            {
//                if (st[i]!='2')
//                    cout<<st[i];
//            }
            i=1;
            while (i<len)
            {
                if ((st[i-1]=='a' ||st[i-1]=='e' ||st[i-1]=='i' ||st[i-1]=='o' ||st[i-1]=='u' || st[i-1]=='y' ) &&((st[i]=='a' ||st[i]=='e' ||st[i]=='i' ||st[i]=='o' ||st[i]=='u' ||  st[i]=='y' )) )
                    st.erase(st.begin()+i);
                    else
                        i++;
                len=st.size();

            }
            cout<<st<<endl;
        }
    }
}
