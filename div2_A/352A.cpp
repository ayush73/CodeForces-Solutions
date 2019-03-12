#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll i,a[n];
    ll v=0,g=0;
    rep(i,0,n)
    {
        cin>>a[i];
        if(a[i]==5)
            v++;
        elif(a[i]==0)
            g++;
    }
    if(g==0)
    {
        cout<<"-1"<<endl;
    }
    elif(v<9)
    {
        cout<<"0"<<endl;
    }
    elif(v==9)
    {
        ll k=n-v;
        rep(i,0,v)
        {
            cout<<"5";
        }
        rep(i,0,k)
        {
            cout<<"0";
        }
    }
    elif(v>9)
    {
        ll x=v%9;
        v=v-x;
        rep(i,0,v)
        {
            cout<<"5";           
        }
        rep(i,0,g)
            cout<<"0";
    }
    return 0;
}