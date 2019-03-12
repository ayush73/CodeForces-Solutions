#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;;
    string s;
    cin>>s;
    ll len=s.size();
    ll i;
    ll p=0,q=0;
    ll ans=-1;
    ll z=0;
    // applying the 2 pointer technique
    for(i=0;i<len;i++)
    {
        if(s[i]=='a')
            p++;
        elif(s[i]=='b')
            q++;
        if(min(p,q)<=m)
        ans=max(ans,(p+q));
        else
            if(s[z]=='a')
            {
                p--; z++;
            }
            else
            {
                q--;z++;
            }
    }
    cout<<ans<<endl;
    
    return 0;
    
}

