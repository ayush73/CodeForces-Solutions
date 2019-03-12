#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
map<ll,ll> mymap;
void sieve()
{
    ll pre=1;
    ll res=100;
    ll c=0;
    ll sum=1;
    ll prem=2;
    while(1)
    {
        c++;
        if(c==100)
        {
            break;
        }
        else
        {
            mymap[sum]++;
            sum+=prem;
            prem++;
        }
    }
  /*  cout<<"contents of the array are"<<endl;
    for(auto it:mymap){
        cout<<it.first<<" ";
    }
*/
}
void solve()
{
    ll n;
    cin>>n;
    if(mymap[n]>0){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sieve();
    solve();
}