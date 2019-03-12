

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define INF 1e9+7;
int main()
{
    ll n;
    cin>>n;
    ll p,q,z=n;
    map<ll,pair<ll,ll>> mymap;
    while(n--)
    {
       cin>>p>>q;
        mymap[p].first++;
        // [p] itself is a first part of the map
        if(p!=q)
        {
            mymap[q].second++;
        }
    }
    ll ans;
    ans=INF;
 /*   cout<<"contents of the map are"<<endl;
    for(auto it:mymap)
    {
       cout<<"value of num"<<" "<<it.first<<" "<<"its front and back value"<<" "<<it.second.first<<" "<<it.second.second;
       cout<<endl;
        ll sum=it.second.first+it.second.second;
    }*/
    ll sigma=(z+1)/2;
  //  cout<<"value of sigma is"<<" "<<sigma<<endl;
    for(auto it:mymap)
    {
       // cout<<"value of it.second.first is"<<" "<<it.second.first<<endl;
        if(it.second.first>=sigma)
        {
          //  cout<<"valuuuue of it.first is"<<" "<<it.first<<endl;
            ans=0;break;
        }
        ll sum=it.second.first+it.second.second;
        //cout<<"value ooooooooof sum is"<<" "<<sum<<endl;
        if(sum>=sigma)
        {
           // cout<<"debug"<<endl;
            ll alpha=it.second.first;
            ll sum_prime=sum;ll sigma_prime=sigma;
            sum_prime=sum_prime-alpha;
            sigma_prime=sigma_prime-alpha;
           // cout<<"value of sum_sigma is now"<<" "<<sigma_prime<<endl;
            ll def=abs(sigma_prime);
            ans=min(ans,def);
        }
    }
    if(ans==(1e9+7))
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
}