#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll i,b[n];
    rep(i,0,n)
    {
        cin>>b[i];
    }
    ll res=abs(b[0]),sum=0;
    sum+=res;
    rep(i,1,n)
    {
        sum+=abs(b[i]-b[i-1]);
    }
    cout<<sum<<endl;
    return 0;
}