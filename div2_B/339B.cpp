#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll i,a[m];
    rep(i,0,m)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll res=a[0]-1;
    sum+=res;
  //  cout<<"hahahaha value of sdum is"<<" "<<sum<<endl;
    rep(i,0,m-1)
    {
        if(a[i]<=a[i+1])
        {
            sum+=a[i+1]-a[i];
        }
        if(a[i]>a[i+1])
        {
            sum+=(n-(a[i]-a[i+1]));
        }
      //  cout<<"value of sum is"<<" "<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}