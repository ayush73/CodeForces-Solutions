#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define second
typedef long long int ll;
#define trace(x) cerr << #x << ": " << x << endl;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> v;
    ll c1=0,c2=0;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        if(x>0)
        {
            c1++;
        }
        if(x<0)
        {
            c2++;
        }
        v.push_back(x);
    }
    ll size=v.size();
    if(c1>c2)
    {
        //cout<<"debug1"<<endl;
        ll pre=size/2;
        if(size%2!=0)
        {
           pre+=1;   
        }
      //  trace(pre);
      //  trace(c1);
        if(c1>=pre)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    else
    {
      //  cout<<"debug2"<<endl;
        ll pre=size/2;
        if(size%2!=0)
        {
            pre+=1;
        }
        if(c2>=pre)
        {
            cout<<-2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}