

#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
using namespace std;
int main()
{
    ll n;
    cin>>n;
    set<ll> s;
    ll a[n];
    rep(i,0,n)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            s.insert(a[i]);
        }
    }
    ll len1=s.size();
    cout<<len1<<endl;
    return 0;
}