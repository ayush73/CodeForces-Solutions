#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
const ll n=123456;
ll a[n];
int main()
{
    ll p,m,query;
    cin>>p>>query;
    rep(i,0,p)
    {
        cin>>a[i];
    }
    // now using the concept of suffix arrays
    ll dp[p],i;
    memset(dp,0,sizeof(dp));
    //dp array will tell how many distinct elements are present after the given position
    set<ll> s;
    vector<ll> e;
    for(i=p-1;i>=0;i--)
    {
       // cout<<"value of a[i] is:"<<" "<<a[i]<<endl;
        s.insert(a[i]);
        e.push_back(s.size());
    }
  //  cout<<"value of e array is:"<<endl;
    ll size_prime=e.size();
    reverse(e.begin(),e.end());
   /*or(i=0;i<e.size();i++)
    {
        cout<<e[i]<<" ";
    }*/
   // ll query;
   // cin>>query;
    while(query--)
    {
        ll index;
        cin>>index;
        index--;
        cout<<e[index]<<endl;
    }
  
    return 0;
}