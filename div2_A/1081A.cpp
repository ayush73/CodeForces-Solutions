#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define elif else if
#define cerr A
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll res;
    cin>>res;
    if(res>=3 or res==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<res<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t=1;
   // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}