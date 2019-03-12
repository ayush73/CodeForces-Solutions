#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
    ll n,sum,cost=0;
    cin>>n>>sum;
    ll i,a[n];
    map<ll,ll> mymap;
    rep(i,0,n){
      cin>>a[i];
      mymap[a[i]]++;
    }
    ll max_limit=sum;
    set<ll> s;
    rep(i,1,max_limit+1)
    {
        if(mymap[i]==0){
            s.insert(i);
            cost+=i;
            if(cost>sum){
               /* cout<<"hahaha"<<endl;
                cout<<"debug"<<endl;
                cout<<cost<<endl;
                cout<<"love"<<endl;*/
                int def=cost-sum;
             /*   cout<<"value of this set is"<<endl;
                for(auto it:s)
                {
                    cout<<it<<" ";
                }
                cout<<"yoyoyoyoyo"<<endl;
                cout<<"value of def is"<<" "<<def<<endl;
                */
                if(s.count(def)){
                    s.erase(def);
                }else{
                   // s.erase(i);
                    ll deg=*s.upper_bound(def);
                    s.erase(deg);
                }
                break;
            }
            elif(cost==sum){
                break;
            }
        }
    }
    cout<<s.size()<<endl;
    for(auto it:s){
        cout<<(it)<<" ";
    }
    return 0;
}