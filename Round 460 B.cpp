#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
ll digit_sum(ll n)
{
    ll sum=0;
    ll ans;
    while (n!=0)
    {
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}
ll fun ()
{
    ll i,j,n,sum;
    j=0;
    for (i=1;;i++)
    {
        sum=digit_sum(i);
        if (sum<=10)
        {
            n=i*10+(10-sum);
            v.push_back(n);
            j++;
        }
        if (j>10002)
            break;
    }
}
int main ()
{
    ll i,j,n,m;
    fun();
    while (cin>>n)
    {
        cout<<v[n-1]<<endl;
    }
}
