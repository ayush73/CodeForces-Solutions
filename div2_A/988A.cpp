#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define elif else if
int main()
{
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    vector<ll> v;
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        ll z;cin>>z;
        s.insert(z);v.pb(z);
    }
    if(s.size()<k)
    {
        cout<<"NO"<<endl;
    }
    elif(s.size()>=k)
    {
        cout<<"YES"<<endl;
        ll c=0;
        rep(i,0,n)
        {
           if(mymap[v[i]]==0)
           {
               cout<<i+1<<" ";
               mymap[v[i]]++;
               c++;
               if(c==k)
                   break;
           }
        }
    }
    return 0;
}