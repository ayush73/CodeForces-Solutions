#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    priority_queue<ll,vector<ll>,greater<ll> >pq_odd;
    rep(i,0,n)
    {
        pq_odd.push(v[i]);
        if(pq_odd.size()>k)
        {
            pq_odd.pop();
        }
    }
    ll sum=0;
    map<ll,ll> mymap;
    while (!pq_odd.empty())
		{
			sum+=pq_odd.top();
            ll res=pq_odd.top();
            mymap[res]++;
			pq_odd.pop();
		}
    /*
    for(auto it:mymap)
    {
        cout<<it.first<<" ";
    }
    */
    vector<ll> w;
    rep(i,0,n)
    {
        if(mymap[v[i]]>0)
        {
            w.pb(i);
            mymap[v[i]]=mymap[v[i]]-1;
        }
    }
    ll size_1=w.size();
    /*rep(i,0,size_1)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl;*/
    ll pp=0;
    cout<<sum;
    cout<<endl;
    if(k==1)
    {
        cout<<n<<endl;
    }
    else
    {
    cout<<w[0]+1<<" ";
    rep(i,1,size_1)
    {
       if(i!=size_1-1)
       {
       cout<<abs(w[i]-w[i-1])<<" ";
       }
    else
    {
        ll res1=abs(w[i]-w[i-1]);
        res1+=n-(w[i]+1);
        cout<<res1;
    }
    }
    }
  /*  if(pp>0)
    {
        cout<<n-pp+1;
    }*/
    
    return 0;
}