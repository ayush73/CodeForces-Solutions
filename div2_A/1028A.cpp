#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
const ll MAX=123456;
#define endl '\n'
int main()
{
    ll n,m;
    cin>>n>>m;
    char s[n][m];
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin>>s[i][j];
        }
    }
    pair<ll,ll> p;
    pair<ll,ll> q;
    p.first=0,p.second=0;
    q.first=0,q.second=0;
    ll c=0;
    ll w=0;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            // first time black is seen
            if(s[i][j]=='B')
            {
                c++;
                if(c==1)
                {
                   p.first=i;p.second=j;   
                }
                else
                {
                    q.first=i;q.second=j;         
                }
                w++;
            }
        }
    }
    ll cc=0;
    pair<ll,ll> r;
    pair<ll,ll> ss;
    r.first=0,r.second=0;
    ss.first=0,ss.second=0;
    for(ll i=n-1;i>=0;i--)
    {
        // first time black is seen from bottom
        for(ll j=0;j<m;j++)
        {
            if(s[i][j]=='B')
            {
                cc++;
            if(cc==1)
            {
                r.first=i;r.second=j; 
            }
            else
            {
               ss.first=i;ss.second=j;   
            }
            }
        }
    }
    ll res=p.second+1+q.second+1;
    res=res/2;
    // finding verti...
    ll res1=((p.first+1)+(r.first+1))/2;
  //  cout<<"yooooo"<<" "<<p.first+1<<" "<<r.first+1<<endl;
    if(w==1)
    {
        cout<<p.first+1<<" "<<p.second+1<<endl;
    }
    else
    {
        cout<<res1<<" "<<res<<endl;
    }
    return 0;
}