#include<bits/stdc++.h>
using namespace std;
struct ch {
    int x,y;
};
bool cmp (ch p, ch q)
{
    return p.x>q.x;
}
int main ()
{
    int i,j,n,m,ans,f,d,k,p,flag,posi,fl;
    ch a[105];
    double flor;
    while (scanf("%d%d",&n,&m)==2)
    {
        for (i=0;i<m;i++)
        {
            scanf("%d%d",&a[i].x,&a[i].y);
        }
        sort (a,a+m,cmp);
        p=1;
        flag=0;
        fl=0;
        for (i=0;i<m-1;i++)
        {
            if (a[i].x-a[i+1].x==1)
            {
                fl=1;
                if (a[i].y-a[i+1].y<0 || (a[i].y-a[i+1].y)>1)
                {
                    p=0;
                    break;
                }
                if (a[i].y-a[i+1].y==1)
                {
                    flag=1;
                    break;
                }

            }
        }
        if (p==0)
            printf("-1\n");
        else if (fl==1 && flag==0)
        {
            printf("-1\n");
        }
        else
        {
            flor= (double ) ceil (a[i].x *1.0/a[i].y * 1.0);
            flor= (double )ceil (n/flor*1.0);
            printf("%.0lf\n",flor);
        }

    }
}
