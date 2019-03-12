#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
int main()
{
   const ll n=6;
    ll k;
    cin>>k;
    ll p=k;
    ll z=n-k;
    cout<<z<<endl;
    map<string,ll> mymap;
    while(p--)
    {
        string s;
        cin>>s;
        mymap[s]++;
    }
    vector<pair<string,string>> v;
    v.pb(mp("purple","Power"));
    v.pb(mp("green","Time"));
    v.pb(mp("blue","Space"));
    v.pb(mp("orange","Soul"));
    v.pb(mp("red","Reality"));
    v.pb(mp("yellow","Mind"));
    ll size=v.size();
    rep(i,0,size)
    {
        if(mymap[v[i].first]==0)
        {
            cout<<v[i].second<<endl;
        }
    }
    return 0;
}