#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
ll n,m;
vector<ll> v[1234567];
ll a[1234567];
ll ans=0,s;
bool flag[1234567]={0};
void dfs(int x,int temp){
	flag[x]=1;
	if(a[x]==1)temp++; else temp=0;
	if(temp>m)return;
	if(v[x].size()==1 && x!=1){ans++;}
	for(int j=0;j<v[x].size();j++){
		if(flag[v[x][j]]!=1)dfs(v[x][j],temp);
	}
}
int main(){
	cin>>n>>m;
    ll i;
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<n;i++)
    {
        ll x,y;
     cin>>x>>y;v[x].push_back(y);v[y].push_back(x);
    }
	dfs(1,0);
	cout<<ans;
}