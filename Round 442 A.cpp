#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,k,cnt,len;
    string st,fr[6];
    fr[0]="Nikita";
    fr[1]="Danil";
    fr[2]="Ann";
    fr[3]="Olya";
    fr[4]="Slava";
    while (cin>>st)
    {
    len=st.size();
    j=0;
    cnt=0;
        for (i=0;i<len;i++)
        {
            if (st[i]==fr[0][j])
                j++;
            else
                {
                    if (j!=0)
                    i--;
                    j=0;

                }
            if (fr[0].size()==j)
                {
                    cnt++;
                    j=0;
                }
        }
        j=0;
        for (i=0;i<len;i++)
        {
            if (st[i]==fr[1][j])
                j++;
            else
                {
                    if (j!=0)
                    i--;
                    j=0;

                }
            if (fr[1].size()==j)
                {
                    cnt++;
                    j=0;
                }
        }
        j=0;
        for (i=0;i<len;i++)
        {
            if (st[i]==fr[2][j])
                j++;
            else
                {
                    if (j!=0)
                    i--;
                    j=0;

                }
            if (fr[2].size()==j)
                {
                    cnt++;
                    j=0;
                }
        }
        j=0;
        for (i=0;i<len;i++)
        {
            if (st[i]==fr[3][j])
                j++;
            else
                {
                    if (j!=0)
                    i--;
                    j=0;

                }
            if (fr[3].size()==j)
                {
                    cnt++;
                    j=0;
                }
        }
        j=0;
        for (i=0;i<len;i++)
        {
            if (st[i]==fr[4][j])
                j++;
            else
                {
                    if (j!=0)
                    i--;
                    j=0;

                }
            if (fr[4].size()==j)
                {
                    cnt++;
                    j=0;
                }
        }
        if (cnt==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
