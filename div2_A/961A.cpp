

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() 
{
    ll n,m;
    cin>>n>>m;
    ll frequency[n+1];
    set<ll> s;
    memset(frequency,0,sizeof(frequency));
    ll v=0;
   // cout<<m<<endl;
    for(ll zz=0;zz<m;zz++)
    {
        ll z;
        cin>>z;
      //  cout<<z<<endl;
        frequency[z]++;
        s.insert(z);
        if(s.size()==n)
        {
            v++;
            for(ll i=1;i<=n;i++)
            {
                frequency[i]--;
                if(frequency[i]==0)
                {
                    s.erase(i);
                }
            }
            //v++;
        }
    }
    cout<<v<<endl;
    return 0;
}