#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
typedef long long int ll;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll solve()
{
    string s;
    cin>>s;
    ll p;
    ll len=s.size();
    bool ok=0;
    ll ans=-1;
    rep(i,0,len)
    {
        if(s[i]=='[')
        {
            p=i;
            ok=1;
            break;
        }
    }
    if(ok)
    {
        bool ok1=0;
        ll q;
        for(ll i=p+1;i<len;i++)
        {
            if(s[i]==':')
            {
                ok1=1;
                q=i;
                break;
            }
        }
        if(ok1)
        {
            bool ok2=0;
            int res=0;
            int e,f;
            for(int i=q+1;i<len;i++)
            {
                if(s[i]=='|')
                {
                    res++;
                }
            }
            for(int i=len-1;i>=0;i--)
            {
                if(s[i]==']')
                {
                    e=i;
                    ok2=1;
                    break;
                }
            }
            if(ok2)
            {
                bool ok3=0;
                for(int i=e-1;i>=0;i--)
                {
                    if(s[i]==':')
                    {
                        ok3=1;
                        break;
                    }
                }
                if(ok3)
                {
                   ans=res+4;                    
                }
            }
            else
            {
                ans=-1;
            }
        }
        else
        {
           ans=-1;          
        }
    }
    else
    {
        ans=-1;
    }
    return ans;
}
int solve1()
{
    ll ans,p;
    string s;
    cin>>s;
    ans=-1;
    bool ok=0;
    ll len=s.size();
    rep(i,0,len)
    {
        if(s[i]=='[')
        {
            p=i;
            ok=1;
        }
    }
    if(ok)
    {
        int q;
        bool ok1=0;
        for(int i=p+1;i<len;i++)
        {
            if(s[i]==':')
            {
              q=i;
              ok1=1;
              break;
            }
        }
        if(ok1)
        {
           // [:
            bool ok3=0;
            int r;
            for(int i=len-1;i>=0;i--)
            {
                if(s[i]==']')
                {
                    r=i;
                    ok3=1;
                    break;
                }
            }
            if(ok3)
            {
                int ss;
                bool ok4=0;
                for(int i=r-1;i>=0;i--)
                {
                    if(s[i]==':')
                    {
                        ss=i;
                        ok4=1;
                        break;
                    }
                }
                if(ok4)
                {
                    int res=0;
                    for(int i=q+1;i<=ss-1;i++)
                    {
                        if(s[i]=='|')
                        {
                            res++;
                        }
                    }
                    ans=res+4;
                    return ans;
                }
                else
                {
                    ans=-1;
                }
            }
            else
            {
                ans=-1;
            }
        }
        else
        {
            ans=-1;
        }
    }
    return ans;
}
int solve2()
{
    string s;
    cin>>s;
    int ans=-1;
    ll len=s.size();
    int p=-1,q=-1;
    rep(i,0,len)
    {
        if(s[i]=='[')
        {
            p=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]==']')
        {
            q=i;
            break;
        }
    }
    if(p!=-1 and q!=-1)
    {
        int r=-1,ss=-1;
        bool ok3=0,ok4=0;
        for(int i=p+1;i<q;i++)
        {
            if(s[i]==':')
            {
                r=i;
                break;
            }
        }
        for(int i=q;i>r;i--)
        {
            if(s[i]==':')
            {
                ok3=1;
                ss=i;
                break;
            }
        }
        if(r<ss and r!=-1 and ss!=-1)
        {
        int res=0;
        for(int i=r+1;i<=ss-1;i++)
        {
          //  cout<<s[i]<<" ";
            if(s[i]=='|')
            {
                res++;
            }
        }
         //   cout<<"valo f res is"<<" "<<res<<endl;
        ans=res+4;
        }
        else
        {
            ans=-1;
        }
    }
    else
    {
        ans=-1;
        //
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        cout<<solve2()<<"\n";
    }
    return 0;
}