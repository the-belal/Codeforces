#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st {
    ll a,b;
};
st fun (ll a, ll b)
{
    cout<<a<<' '<<b<<endl;
    st val;
    val.a=a;
    val.b=b;
    if (a==0 || b==0)
        return val;
    if (a>=(2*b))
        {
            val.a=a;
    val.b=b;
            a-=(2*b);
            fun(a,b);
        }
    else if (b>=(2*a))
        {
            val.a=a;
    val.b=b;
            b-= (2*a);
        fun(a,b);
        }
    else
    {
            val.a=a;
    val.b=b;
        return val;
    }
}
int main ()
{
    int x,sum=0,i,n,m;
    cin>>n>>m;
    st v = fun(n,m);
    cout<<v.a<<' '<<v.b<<endl;
}

