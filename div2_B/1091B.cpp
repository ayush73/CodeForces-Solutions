#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define f first
#define s second
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mp make_pair
#define vi vector <ll>
#define cerr A
const ll mod=1000000007;
const ll MAX=1234;
void solve()
{
    ll n;
    cin>>n;
    //ll res=n;
    ll res1=n;ll res=n;
   // ll a[n];
pair<ll,ll> pp;
    map<ll,ll> mymap;
   pp.first=0;pp.second=0;
    vector<ll> v;
   // exit(0);
    rep(i,0,n)
    {
        v.push_back(i);
    }
    vector<pair<ll,ll>> a,b;
    ll counter=1;
   // exit(0);
    while(res--)
    {
        ll x,y;
        cin>>x>>y;
       // a[counter].first=x;
       // a[counter].second=y;
        //counter++;
        a.push_back(make_pair(x,y));
    }
    //exit(0);
    counter=1;
    cout<<"hahahahaha"<<endl;
    while(res1--)
    {
        ll x,y;
        cin>>x>>y;
       // b[counter].first=x;
      //  b[counter].second=y;
        //counter++;
        b.push_back(make_pair(x,y));
    }
   // cout<<"hahahahaha"<<endl;
    //exit(0);
    bool ok=0;
    ll size=b.size();
   // cout<<"*******"<<endl;
    
    
    do{
        ok=0;
       ll x=a[0].first+b[v[0]-1].first;
       ll y=a[0].second+b[v[0]-1].second;
      //  cout<<x<<" "<<y<<endl;
       rep(i,1,size)
       {
           ll pre=a[i].first+b[v[i]-1].first;
           ll oj=a[i].second+b[v[i]-1].second;
           if(pre==x and oj==y){
               continue;
           }else{
               ok=1;break;
           }
       }
        if(!ok)
        {
            pp.first=x;pp.second=y;break;
        }
    }while(next_permutation(v.begin(),v.end()));
    
  //  exit(0);
    if(ok)
           {
               cout<<-1<<endl;
           }
           else
           {
               cout<<pp.first<<" "<<pp.second<<endl;
           }
}
void solve2()
{
    // code is copie here...
    bool ok=0;
     ll n;
    cin>>n;
    //ll res=n;
    ll res1=n;ll res=n;
   // ll a[n];
    pair<ll,ll> pp;
    map<pair<ll,ll>,ll> mymap;
   pp.first=0;pp.second=0;
    vector<pair<ll,ll>> india[n];
    vector<pair<ll,ll>> a,b;
    ll counter=1;
    while(res--)
    {
        ll x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    counter=1;
   // cout<<"hahahahaha"<<endl;
    while(res1--)
    {
        ll x,y;
        cin>>x>>y;
        b.push_back(make_pair(x,y));
    }
    ll size=b.size();
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            ll def=a[i].f+b[j].f;ll pre=a[i].s+b[j].s;
            //cout<<def<<" "<<pre<<endl;
            india[i].push_back(make_pair((def),(pre)));
        }
    }
    //ll size1=v.size();
    rep(i,0,n)
    {
        ll size=india[i].size();
        rep(j,0,size){
            pair<ll,ll> pp;
            pp.f=india[i][j].first;pp.s=india[i][j].second;
            mymap[pp]++;
        }
    }
    for(auto it:mymap)
    {
        if(it.second==n)
        {
            ok=1;
            cout<<it.first.first<<" "<<it.first.second<<endl;
            break;
        }
    }
    if(!ok)
    {
        cout<<-1<<endl;
    }
    
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve2();
    }
    return 0;
}