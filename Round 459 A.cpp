#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans[1003];
queue<ll>q;
ll fibo (ll n)
{
    if (n==1)
       return  ans[n]=1;
    if (n==2)
     return  ans[n]=1;
     if (ans[n]!=0)
        return ans[n];
     ans[n]=fibo(n-1)+fibo(n-2);
     q.push(ans[n]);
     return ans[n];
}
int main ()
{
    ll n;
    q.push(1);
    fibo(1000);
    cin>>n;


    ll x;

    for (int i=1;i<=n;i++)
    {
        x=q.front();
        if (i==x || i==2 || i==1)
        {
            if (i==x)
            q.pop();
            cout<<"O";


        }
        else
          cout<<"o";
    }
    //cout<<ans[n]<<endl;
    cout<<endl;
    return 0;
}
