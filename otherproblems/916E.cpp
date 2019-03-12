#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define pb push_back
#define pf push_front
#define F first
#define S second
#define ins insert
#define int long long
#define fbo find_by_order
#define ook order_of_key
using namespace std;
using namespace __gnu_pbds;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
const int MAXN=1e5+1,INF=1e18+10,MOD=1e9+7;

int n,q,cnt,root=1,a[MAXN],seg[4*MAXN],laz[4*MAXN],par[20][MAXN],d[MAXN],pos[MAXN],sz[MAXN];
vector <int> G[MAXN];

void dfs(int u=1,int p=1){
    sz[u]=1;
    pos[u]=cnt++;
    par[0][u]=p;
    for(int i=1;i<20;++i)
        par[i][u]=par[i-1][par[i-1][u]];
    for(auto v:G[u]){
        if(v!=p){
            d[v]=d[u]+1;
            dfs(v,u);
            sz[u]+=sz[v];
        }
    }
    // doing this to find the disjoint set and lca 
}

void relax(int id,int x,int y){
    if(laz[id]==0)  return;
    seg[id]+=laz[id]*(y-x+1);
    if(x!=y){
        laz[id*2+1]+=laz[id];
        laz[id*2+2]+=laz[id];
    }
    laz[id]=0;
    // the segtree is laid in 1 direction.. after the traversal of the entire tree
}

void up(int l,int r,int val,int id=0,int x=0,int y=n-1){
    relax(id,x,y);
    if(r<x||y<l)    return;
    if(l<=x&&y<=r){
        laz[id]+=val;
        relax(id,x,y);
        return;
    }
    int mid=(x+y)/2;
    up(l,r,val,id*2+1,x,mid);
    up(l,r,val,id*2+2,mid+1,y);
    seg[id]=seg[id*2+1]+seg[id*2+2];
    // segttree for updating range is used
}

int get(int l,int r,int id=0,int x=0,int y=n-1){
    relax(id,x,y);
    if(r<x||y<l)    return 0;
    if(l<=x&&y<=r){
        return seg[id];
    }
    int mid=(x+y)/2;
    // segtree for querying is used
    return get(l,r,id*2+1,x,mid)+get(l,r,id*2+2,mid+1,y);
}

int lca(int x,int y){
    if(d[x]<d[y])   swap(x,y);
    for(int i=19;i>=0;--i){
        if(d[par[i][x]]>=d[y]){
            x=par[i][x];
        }
    }   // disjoint union in used 
    if(x==y)    return x;
    for(int i=19;i>=0;--i){
        if(par[i][x]!=par[i][y]){
            x=par[i][x];
            y=par[i][y];
        }
    }
    return par[0][x];
}

int lca2(int x,int y){
    if(d[x]<d[y])   swap(x,y);
    for(int i=19;i>=0;--i){
        if(d[par[i][x]]>d[y]){
            x=par[i][x];
        }
    }
    return x;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n-1;++i){
        int a,b;
        cin>>a>>b;
        G[a].pb(b);
        G[b].pb(a);
    }
    dfs();
    for(int i=1;i<=n;++i){
        up(pos[i],pos[i],a[i]);
    }
    for(int i=0;i<q;++i){
        int t;
        cin>>t;
        if(t==1){
            int r;
            cin>>r;
            root=r;
        }else if(t==2){
            int x,y,val;
            cin>>x>>y>>val;
            int z1=lca(x,y);
            int z2=lca(root,x);
            int z3=lca(root,y);
            int z=z1^z2^z3;
            if(lca(z1,root)!=z1){
                up(pos[z1],pos[z1]+sz[z1]-1,val);
            }else if(z==root){
                up(0,n-1,val);
            }else if(lca(z,x)==z||lca(z,y)==z){
                int t=lca2(root,z);
                up(0,n-1,val);
                up(pos[t],pos[t]+sz[t]-1,-val);
            }else{
                int t=lca2(root,z);
                up(0,n-1,val);
                up(pos[t],pos[t]+sz[t]-1,-val);
            }
        }else{
            int v;
            cin>>v;
            int z=lca(v,root);
            if(z==v){
                int t=lca2(v,root);
                if(t!=v){
                    cout<<get(0,n-1)-get(pos[t],pos[t]+sz[t]-1)<<endl;
                }else{
                    cout<<get(0,n-1)<<endl;
                }
            }else{
                cout<<get(pos[v],pos[v]+sz[v]-1)<<endl;
            }
        }
    }
    return 0;
}