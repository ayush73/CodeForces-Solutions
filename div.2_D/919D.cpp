#include<bits/stdc++.h>
#define SYNC ios::sync_with_stdio(false); cin.tie(NULL); cerr.tie(NULL);
using namespace std;
const int n=3e5;
int ans=0,dp[n][26];
vector<int> g[n];
bool vis[n],act[n];
string s;

void dfs(int u){
  vis[u]=true;
  act[u]=true;
  for(int v:g[u]){
    if(act[v]){
      cout << -1;
      exit(0);
    }
    if(!vis[v]) dfs(v);
    for(int i=0;i<26;i++){
      dp[u][i]=max(dp[v][i],dp[u][i]);
    }
  }
  dp[u][s[u]-'a']++;
  for(int i=0;i<26;i++){
    ans=max(dp[u][i],ans);
  }
  act[u]=false;
}

int main(){
  SYNC;
  int n,m;
  cin >> n >> m;
  cin >> s;
  for(int i=0;i<m;i++){
    int x,y;
    cin >> x >> y;
    g[x-1].push_back(y-1);
  }
  for(int i=0;i<n;i++){
    if(!vis[i]) dfs(i);
  }
  cout << ans;
  return 0;
}