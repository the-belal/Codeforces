#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1003];
 double yo[1003];
void bina(ll r,ll i,ll j)
{
    int tc=500;
    ll x1=a[i],x2=a[j];
     double y1=yo[i];
 double low=0.0,high=1000007.0,md,ans=-1,dis;
    while (tc--)
    {
        md= ( double) (((low+high)*1.0)/2.0);
        dis=sqrt((x1-x2)*(x1-x2)+(y1-md)*(y1-md));

        //cout<<md<<' '<<dis<<endl;
        if (dis>=r)
        {
            ans=md;
            high=md;
        }
        else
        {
            low=md;
            //ans=md;
        }
    }
    yo[j]=ans;
}
int main ()
{
    ll i,j,n,m,x,r,p=0;
    scanf("%lld%lld",&n,&r);
    for (i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for (i=0;i<n;i++)
    {
       x=-1;
       p=0;
       if (i!=0)
            printf(" ");
        for (j=i-1;j>=0;j--)
        {
            if (a[i]>a[j])
            {
                if (a[j]+(2*r)>a[i])
                {
                    x=j;
                    break;
                }
                else if (a[j]+(2*r)==a[i])
                {
                           x=j;             p=1;
                    yo[i]=yo[j];
                    printf("%.10lf",yo[i]);
                    break;
                }

            }
            else if (a[i]<a[j])
            {
                if (a[j]-(2*r)<a[i])
                {
                    x=j;
                    break;
                }
                else if (a[j]-(2*r)==a[i])
                {
                p=1;
                x=j;
                    yo[i]=yo[j];
                    printf("%.10lf",yo[i]);
                    break;
                }

            }
            else
                {
                    x=j;

                    break;
                }

        }

            //printf("%lld\n",x);
        if (x==-1)
            {
                printf("%lld",r);
            yo[i]=r*1.0;
            }
        else
        {
            ll x1=x,x2=a[i];
            if (p==0)
            {
                bina(2*r,x,i);
            printf("%.10lf",yo[i]);
            }

        }
    }
    printf("\n");
    return 0;
}
