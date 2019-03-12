#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
void solve()
{
   ll n;
    cin>>n;
    map<string,int> mymap;
    rep(i,0,n)
    {
        string s;
        cin>>s;
        mymap[s]++;
    }
    rep(i,0,n)
    {
        string p;
        cin>>p;
        mymap[p]--;
    }
    ll sum=0;
    for(auto it:mymap)
    {
        if(it.second>0)
        sum+=it.second;
    }
    cout<<sum<<endl;
}
int main()
{
    solve();
    return 0;
}