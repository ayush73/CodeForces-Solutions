#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
ll a,b,c;
    ll n,p,q;
    cin>>n;
   // cin>>a>>b>>c;
    ll res=1;
   // n=n-1;
    ll res1=1;
    p=n-2;
 //   cout<<"yoooo"<<" "<<p<<endl;
    if(p%3==0)
    {
      //  cout<<"debug"<<endl;
        res1+=1;
        p=p-1;
    }
    cout<<res<<" "<<res1<<" "<<p<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}