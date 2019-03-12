#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll calc(ll n)
{
    ll f=(n*(n-1));
    f/=2;
    return f;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);cout.tie(nullptr);
  ll n,x;
  cin>>n>>x;
  vector<ll> v;
  map<ll,ll> mymap;
  rep(i,0,n)
  { 
     ll y;
     cin>>y;
     v.push_back(y);
      mymap[y]++;
  }
    ll size=v.size();sort(all(v));
    /*
    cout<<"value of array is now"<<endl;
    rep(i,0,n)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    */
 // xor must be same for all the values..
 pair<ll,bool> pos;
 ll sum=0;
 set<pair<ll,ll>> s;
 rep(i,0,n)
 {
     ll lol=v[i];
     ll res=v[i]^x;
   //  cout<<"value of res and lol is"<<" "<<res<<" "<<lol<<endl;
     if(mymap[res]>0)
     {
         // we are applying nc1 * nc1 here........
         ll pragma1=mymap[res];ll pragma2=mymap[lol];
         if(!s.count(make_pair(res,lol)) && !s.count(make_pair(lol,res)))
         {
           //  cout<<"debug that"<<endl;
         //    cout<<"debug"<<" "<<"value of res and lol is"<<" "<<res<<" "<<lol<<endl;
             if(res!=lol)
             {
               sum+=(pragma1*pragma2);
             }
             if(res==lol)
             {
                 // elements are same therefore, nc2 will work here........
                 ll res_pre=calc(pragma1);
                 sum+=res_pre;
             }
         s.insert(make_pair(res,lol));
         s.insert(make_pair(lol,res));
         }
         else
         {
         //    cout<<"hahahaha"<<endl;
             continue;
         }
      //   cout<<"value of sum is now"<<" "<<sum<<endl;
     }
 }
    /*
    cout<<"contents of the set are"<<endl;
    for(auto it:s)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    */
 cout<<sum<<endl;
 return 0; 
}