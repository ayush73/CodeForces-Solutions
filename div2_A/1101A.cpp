

#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define vi vector<ll>
typedef long long int ll;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll max=b/c;
    ll max1=a/c;
    ll haha=max*(c);
    if(haha<=b)
    {
        haha+=c;
    }
    //ll haha1=max1*(c);
    ll haha1=c;
    //cout<<"val of haha is"<<" "<<haha<<endl;
    if(haha1>0&&!(haha1>=a&&haha1<=b))
    {
        //cout<<"debug"<<endl;
        cout<<min(haha,haha1)<<endl;
    }
    else
    {
        cout<<haha<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}