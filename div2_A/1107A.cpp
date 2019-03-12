#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define cerr A
#define mod 1e9+7
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll query;
    cin>>query;
    while(query--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll> w;
        ll len=s.size();
        string p="";
        p+=s[0];
        ll count_zero=0;
        string pre="";
        rep(i,1,len)
        {
            pre+=s[i];
            if(s[i]=='0')
            {
                count_zero++;
            }
        }
        if(p==pre)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            
            if(count_zero==len-1)
            {
               
                cout<<"NO"<<endl;
            }
            else
            {
                bool ok=0;
                if(count_zero==len-2)
                {
                   // cout<<"debug"<<endl;
                    int u1=s[0]-'0';
                    int u2=s[len-1]-'0';
                    //cout<<"val of u1 and u2 is"<<" "<<u1<<" "<<u2<<endl;
                    if(u1>=u2)
                    {
                        ok=1;
                        cout<<"NO"<<endl;
                    }
                }
                if(!ok)
                {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            ll size1=p.size();
            ll size2=pre.size();
            rep(i,0,size1)
            {
                cout<<p[i]<<" ";
            }
            rep(i,0,size2)
            {
                cout<<pre[i];
            }
            cout<<endl;
            }
            }
        }
    }
    return 0;
}