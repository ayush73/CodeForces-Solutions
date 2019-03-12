#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define elif else if
typedef long long int ll;
ll n,m,a,b;
ll solve()
{
    if(n==m || n%m==0)
    {
        return 0;
    }
    else
    {
        ll p=n/m;
        p=p+1;
        ll x=m*p;
        ll v=abs(n-x);
        v=v*a;
        ll pp=n%m;
        ll al=pp*b;
        return min(v,al);
    }
    return 0;
}
int main()
{
    cin>>n>>m>>a>>b;
    cout<< solve() <<'\n';
}