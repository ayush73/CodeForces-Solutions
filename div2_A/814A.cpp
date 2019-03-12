#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll i,a[n],b[m],g=0,c[n],j=0;
    //rep(i,0,n) c[i]=a[i];
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];
    rep(i,0,n) c[i]=a[i];
    sort(b,b+m); reverse(b,b+m); //sort(c,c+n);
    rep(i,0,n)
    {
        if(a[i]==0)
        {
            a[i]=b[g]; g++; c[i]=a[i];
        }
    }
    sort(c,c+n);
  //  cout<<endl;
    rep(i,0,n)
    {
        if(a[i]==c[i]) j++;
    }
  // cout<<j<<endl;
    if(j!=n)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}