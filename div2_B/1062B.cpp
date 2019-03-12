#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define dpp dp[100][100][100];
const ll MAX=2000;
ll dist[MAX][MAX];
char g[MAX][MAX+1];
ll dx[]={0,1,0,-1};
ll dy[]={-1,0,1,0};

// code reference taken help from the topcoder site.....
using namespace std;
void clear()
{
    memset(dist,0,sizeof(dist));
}
void solve()
{
    ll n,m,r,c,x,y;
    cin>>n>>m>>r>>c>>x>>y;
 //   cout<<n<<m<<r<<c<<x<<y<<endl;
//    bfs(r,c);
    ll ans=0;
    r--;
    c--;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin>>g[i][j];
        }
    }
    
    /*
    cout<<"the value of the grid is"<<endl;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    
     cout<<endl;*/
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            dist[i][j]=2e9;
        }
    }
    deque<pair<ll,ll>> q;
    dist[r][c]=0;
  //  cout<<"val of r and c is"<<" "<<r<<" "<<c<<endl;
    q.push_front(make_pair(r,c));
    while(!q.empty())
    {
      //  cout<<"hahahahha"<<endl;
        ll i=q.front().f;
        ll j=q.front().s;
      //  cout<<"val of i and j is"<<" "<<i<<" "<<j<<endl;
        q.pop_front();
        rep(k,0,4)
        {
            ll ni=i+dx[k];
            ll nj=j+dy[k];
            if(ni==-1 or ni==n or nj==-1 or nj==m or g[ni][nj]=='*')
            {
                continue;
            }
            else
            {
               // cout<<"debugpragma"<<endl;
                ll nd = dist[i][j] + (k == 0);
                if(dist[ni][nj]<=nd){
                    continue;
                }//else{
                  //  cout<<"debugayush"<<endl;
                    dist[ni][nj]=nd;
                //}
                if(k){
                    q.push_front(make_pair(ni,nj));
                }else{
                    q.push_back(make_pair(ni,nj));
                }
            }
        }
    }
    /*cout<<"distance matrix is"<<endl;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }*/
    ll res=0;
    rep(i,0,n){
        rep(j,0,m){
            ll pre=dist[i][j];
            ll mr=pre+j-c;
            if(pre<=x and mr<=y)
                ans++;
        }
    }
    cout<<ans<<endl;
    // first do dfs and bfs to find the reachable nodes in the matrices..
    // in O(n*m) time.....
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