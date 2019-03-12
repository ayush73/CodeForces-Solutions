#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
int main()
{
    ll n;
    cin>>n;
    ll ans=-1;
    ll i,a[n];
    rep(i,0,n)
    {
        cin>>a[i];
    }
    ll v=0;
    for(i=0;i<n-1;i++)
    {
       // cout<<"debug"<<endl;
        if(a[i]<=a[i+1])
        {
            v++;
            ans=max(ans,v);
           // cout<<"value of a[i] and a[i+1] is"<<" "<<a[i]<<" "<<a[i+1]<<endl;
        }
        else
        {
            v=0;
        }
    }
    if(ans==-1){cout<<"1"<<endl;}
    else
    {
        cout<<ans+1<<endl;
    }
    return 0;
}