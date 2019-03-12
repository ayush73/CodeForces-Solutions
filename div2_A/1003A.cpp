#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define pb push_back
#define mp make_pair
int main()
{
    ll n;
    cin>>n;
    ll i,a[n];
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        cin>>a[i];
        mymap[a[i]]++;
    }
    ll sum=INT_MIN;
    for(auto it:mymap)
    {
        sum=max(sum,it.second);
       // if(it.first>1)
        //sum+=it.second;
    }
    cout<<sum<<endl;
  //  cout<<n-sum<<endl;
    return 0;
}