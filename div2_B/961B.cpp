

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
int main()
{
    ll n,k,sum=0;
    cin>>n>>k;
    ll i,a[n],b[n];
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];
    rep(i,0,n)
    {
        if(b[i]==1)
        {
            sum+=a[i];
        }
    }
    // 2 pointer
    ll sum_pre=0,ans=0,c=0;
    rep(i,0,k)
    {
        if(b[i]==0)
            sum_pre+=a[i];
    }
    ans=max(ans,sum+sum_pre);
    ll z=k;
    while(z<=n-1)
    {
         if(b[z]==0)
         {
             sum_pre+=a[z];
             if(b[c]==0)
             {
                 sum_pre=sum_pre-a[c];
             }
             c++;
         }
         if(b[z]==1)
         {
             if(b[c]==0)
             {
                 sum_pre=sum_pre-a[c];
             }
             c++;
         }
         ans=max(ans,sum+sum_pre);
        z++;
    }
    cout<<ans<<endl;
}