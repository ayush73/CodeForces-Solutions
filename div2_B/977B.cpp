#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define INF 1e9+7;
typedef pair<char,char> A;
#define F first
#define S second
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll len=s.size();
    ll res[26][26];
    memset(res,0,sizeof(res));
    rep(i,0,len-1)
    {
        ll kk=s[i]-'A';
        ll pp=s[i+1]-'A';
      // cout<<kk<<endl;
      //  cout<<pp<<endl;
        res[s[i]-'A'][s[i+1]-'A']=res[s[i]-'A'][s[i+1]-'A']+1;
    }
    ll ans=-1;
    ll p,q;
   /* rep(i,0,26)
    {
        rep(j,0,26)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;   */
    rep(i,0,26)
    {
        rep(j,0,26)
        {
            if(res[i][j]>0)
            {
                if(res[i][j]>ans)
                {
                   // cout<<"debug"<<endl;
                 
                    ans=res[i][j];
                    p=i;
                    q=j;
                }
            }
        }
    }
  //  cout<<"value of p and q are"<<" "<<p<<" "<<q<<endl;
    char c='A' +p;
    char d='A'+q;
    cout<<c<<d<<endl;
    return 0;
}