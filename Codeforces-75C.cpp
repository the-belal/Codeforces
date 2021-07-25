#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
vector<ll>v;
ll bin (ll x, ll l)
{
    ll low=0;
    ll high=l;
    ll ans=1,mid;
    while ( high-low>1)
    {
        mid=(low+high)/2;
        if (v[mid]==x)
            return x;
        else if (v[mid]<x)
        {
            ans=v[mid];
            low=mid;
        }
        else
            high=mid;

    }
    return ans;
}
int main()
{
    faster;
	ll i,a,b,n,x,y,root;
	while (cin>>x>>y)
	{

		a=min(x,y);
		b=max(x,y);
		root=sqrt(b);
		for (i=1;i<=root;i++)
        {
            if (a%i==0 && b%i==0)
            {
                v.push_back(i);
                    ll no=a/i;
                    if (b%no==0)
                    v.push_back(a/i);
            }
        }
        sort(v.begin(),v.end());
//        for (i=0;i<v.size();i++)
//            cout<<v[i]<<endl;
        cin>>n;
        for (i=0;i<n;i++)
        {
            ll low,high;
            cin>>low>>high;
            ll value=bin(high,v.size()-1);
            //cout<<v[value]<<'*'<<endl;
            value=upper_bound(v.begin(),v.end(),high)-v.begin()-1;
            if (low==high)
             value=v[value+1];
            else
                value=v[value];
            if (value>=low && value<=high)
                cout<<value<<endl;
            else
                cout<<"-1\n";
        }
        v.clear();
	}
	return 0;
}
