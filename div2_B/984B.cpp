#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define elif else if
#define rep(i,a,b) for(int i=a;i<b;i++)
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
    bool okay=false;
    ll i,j;
    bool okay_prime=false;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.')
            {
                
                 ll sum=0;
                 if(i-1>=0 && j-1>=0)
                 {
                     if(s[i-1][j-1]=='*')
                     {
                      //   cout<<"debug"<<endl;
                        okay=true;
                         break;
                     }
                 }
                 if(i-1>=0 && j+1<=m-1)
                 {
                       if(s[i-1][j+1]=='*')
                     {
                        okay=true;
                           break;
                     }  
                 }
                 if(j-1>=0)
                 {
                      if(s[i][j-1]=='*')
                     {
                        okay=true; break;
                     }
                 }
                if(j+1<=m-1)
                {
                     if(s[i][j+1]=='*')
                     {
                        okay=true;  
                         break;
                     }
                }
                if(i-1>=0)
                {
                     if(s[i-1][j]=='*')
                     {
                        okay=true;
                         break;
                     }
                }
                if(i+1<=n-1)
                {
                     if(s[i+1][j]=='*')
                     {
                        okay=true;
                         break;
                     }
                }
                if(i+1<=n-1 && j-1>=0)
                {
                     if(s[i+1][j-1]=='*')
                     {
                       okay=true;
                         break;
                     }
                }
                if(i+1<=n-1 && j+1<=m-1)
                {
                     if(s[i+1][j+1]=='*')
                     {
                        okay=true;
                         break;
                     }
                }
                //
            }
            // hahahahaha
            elif(s[i][j]>=49 && s[i][j]<=56)
            {
                ll sum=0;
                ll qq=s[i][j]-48;
                // code is copied here
                // ll sum=0;
                 if(i-1>=0 && j-1>=0)
                 {
                     if(s[i-1][j-1]=='*')
                     {
                        sum++;
                     }
                 }
                 if(i-1>=0 && j+1<=m-1)
                 {
                       if(s[i-1][j+1]=='*')
                     {
                        sum++;
                     }  
                 }
                 if(j-1>=0)
                 {
                      if(s[i][j-1]=='*')
                     {
                        sum++;
                     }
                 }
                if(j+1<=m-1)
                {
                     if(s[i][j+1]=='*')
                     {
                         sum++;
                     }
                }
                if(i-1>=0)
                {
                     if(s[i-1][j]=='*')
                     {
                         sum++;
                     }
                }
                if(i+1<=n-1)
                {
                     if(s[i+1][j]=='*')
                     {
                        sum++;
                     }
                }
                if(i+1<=n-1 && j-1>=0)
                {
                     if(s[i+1][j-1]=='*')
                     {
                        sum++;
                     }
                }
                if(i+1<=n-1 && j+1<=m-1)
                {
                     if(s[i+1][j+1]=='*')
                     {
                        sum++;
                     }
                }
                
                if(sum!=qq)
                {
                    okay_prime=true;
                    break;
                }
                else
                {
                    continue;
                }
                
                
                
                
                
                
                
                // code is coakjdfjladj
                
            }
        }
        if(okay==true || okay_prime==true)
        {
           // cout<<"debug"<<endl;
            break;
        }
    }
//    cout<<i<<" "<<j<<endl;
    if(i==n && j==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}