#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define cerr A
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void pre(){
    
}
void solve()
{
   ll n;
    cin>>n;
    char s[n][n];
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            cin>>s[i][j];
        }
    }
    ll sum=0;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            bool ok1=0,ok2=0,ok3=0,ok4=0,ok5=0;
            if(s[i][j]=='X')
            {
                ok1=1;
            }
            if(i-1>=0 and j-1>=0)
            {
                if(s[i-1][j-1]=='X')
                {
                    ok2=1;
                }
            }
            if(i-1>=0 and j+1<=n-1)
            {
                if(s[i-1][j+1]=='X')
                {
                    ok3=1;
                }
            }
            if(i+1<=n-1 and j-1>=0)
            {
                if(s[i+1][j-1]=='X')
                {
                    ok4=1;
                }
            }
            if(i+1<=n-1 and j+1<=n-1)
            {
                if(s[i+1][j+1]=='X')
                {
                    ok5=1;
                }
            }
            if(ok1==1 and ok2==1 and ok3==1 and ok4==1 and ok5==1)
            {
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}