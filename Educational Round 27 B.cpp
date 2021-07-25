#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,sum1=0,sum2=0,a,b,c,x,y,z,mx,dif;
    string st;
    char ch;
    while (cin>>st)
        {
            sum1=0;
            sum2=0;
            /*a=st[0]+st[1]-'0'-'0';
            b=st[0]+st[2]-'0'-'0';
            c=st[1]+st[2]-'0'-'0';
            x=st[3]+st[4]-'0'-'0';
            y=st[3]+st[5]-'0'-'0';
            z=st[4]+st[5]-'0'-'0';*/
            for (i=0;i<6;i++)
            {
                for (int j=0;j<5;j++)
                {
                    if (st[j]>st[j+1])
                    {
                        ch=st[j];
                        st[j]=st[j+1];
                        st[j+1]=ch;
                    }
                }
            }
            for (i=0;i<6;i+=2)
                sum1+=st[i]-'0';
            for (i=1;i<6;i+=2)
                sum2+=st[i]-'0';
                dif=abs(sum1-sum2);
            if (sum1==sum2)
                printf("0\n");

        else if ((sum1-sum2)>0)
            {
                if (dif>(9-st[3]+'0'))
                printf("2\n");
                else
                 printf("1\n");
            }

        }

    return 0;
}
