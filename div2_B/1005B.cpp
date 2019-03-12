#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define pb push_back
#define mp make_pair
typedef long long int ll; 
#define rep(i,a,b) for(ll i=a;i<b;i++)
void solve()
{
   string p,q;
    cin>>p>>q;
    ll size=p.size();
    ll kk=size;
    ll f=size-1;
    ll size_1=q.size();
    ll kkk=size_1;
    ll g=size_1-1;
    size=min(size,size_1);
    ll sum=0;
    ll c=0;
    while(1)
    {
        if(c>=size)
        {
        //    cout<<"debug"<<endl;
            break;
        }
        else
        {
            if(q[g]==p[f])
            {
                sum++;
                g--;
                f--;
            }
            else
            {
                //cout<<"debug32"<<endl;
                break;
            }
        }
        c++;
    }
   // cout<<sum<<endl;
    ll ans=kk+kkk-(2*sum);
    cout<<ans<<endl;
}
int main()
{
   // ll t;
   // cin>>t; 
   // while(t--)
   // {
      solve();
   // }
    return 0;
}