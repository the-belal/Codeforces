#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st
{
    ll litre,jabe;
    double avg;
};
bool cmp (st i, st j)
{
    if (i.avg<j.avg)
        return true;
    if (i.avg==j.avg)
    {
        return i.litre>j.litre;
    }
    return false;
}
struct ab
{
    ll posi;
    ll cos;

};
bool compar( ab i , ab j)
{
    if (i.cos<j.cos)
        return true;
    if (i.cos==j.cos)
        return i.posi>j.posi;
    return false;
}
int main ()
{
    ll i,j,cnt,x,cost,n,am,c[100];
    ab C[100];
    double av;
    st a[100];

    scanf("%lld%lld",&n,&am);
    for (i=0; i<n; i++)
    {
        scanf("%lld",&x);
        C[i].posi=i;
        C[i].cos=x;
        c[i]=x;
        a[i].litre=1<<i;
        a[i].jabe=am/(1<<i);
        av= (double ) (x*1.0/a[i].litre*1.0);
        a[i].avg=av;
    }
    sort(a,a+n,cmp);
    ll taken=0;
    i=0;
    cost=0;
    ll pick,cost_pick,cost2,nibo;
    sort(C,C+n,compar);
    while (taken<am)
    {
        ll baki=am-taken;
        x=baki/a[i].litre;
        nibo=x*a[i].litre;
        ll ct;
        ct=log2(a[i].litre);
        cost2+=x*c[ct];
        if (taken<am)
    {
        cost_pick=0;
        for (int k=0;k<n;k++)
        {
            x
            if ((taken+pick+(1<<C[k].posi))>=am)
            {
                cost_pick+=c[C[k].posi];
                pick+=(1<<C[k].posi);
            }
        }
    }
        if (cost_pick<cost2)
        {
            cost+=cost_pick;
            taken+=pick;
        }
        else if (cost_pick==cost2)
        {
            cost+=cost_pick;
            taken+=max(pick,nibo);
        }
        else
            {
            cost+=cost2;
            taken+=nibo;
        }



            i++;
        if (i==n)
            break;



    }

    cout<<cost<<endl;
}
