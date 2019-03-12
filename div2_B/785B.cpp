#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define INF 1000000009
int main()
{
    vector <pair<ll,ll>> v;
    vector <pair<ll,ll>> w;
    ll n;
    cin>>n;
    ll i,u,s;
    for(i=0;i<n;i++)
    {
        cin>>u>>s;
        v.push_back(make_pair(u,s));
    }
    ll m;
    cin>>m;
    ll c,d;
    for(i=0;i<m;i++)
    {
        cin>>c>>d;
        w.push_back(make_pair(c,d));
    }
    ll ans=INF;
    ll ans1=-1;
    // calculating time for both the sequences;
    // calculating time for the first sequence
    for(i=0;i<n;i++)
    {
        if(v[i].second<ans)
        {
            ans=v[i].second;
        }
    }
    for(i=0;i<m;i++)
    {
        if(w[i].first>ans1)
        {
            ans1=w[i].first;
        }
    }
    ll j;
    if(ans<0||ans>=INF)
    {
        j=0;
    }
    else
    {
       j=ans1-ans;
       if(j<0)
       {
           j=0;
       }
    }
    // now calculating the second thing 
   // cout<<"value of j is:"<<" "<<j<<endl;
    ll ans4=-1;
    ll ans3=INF;
    for(i=0;i<m;i++)
    {
        if(w[i].second<ans3)
        {
            ans3=w[i].second;
        }
    }
    for(i=0;i<n;i++)
    {
        if(v[i].first>ans4)
        {
            ans4=v[i].first;
        }
    }
    ll pp;
    if(ans4<0||ans3>=INF)
    {
        pp=0;
    }
    pp=ans4-ans3;
  //  cout<<"value of ans3 is:"<<" "<<ans3<<endl;
 //   cout<<"value of ans4 is:"<<" "<<ans4<<endl;
    if(pp<0)
    {
        pp=0;
    }
  //  cout<<"value of pp is:"<<pp<<endl;
  //  cout<<"value of j is:"<<" "<<j<<endl;
    if(pp>=j)
    {
        cout<<pp<<endl;
    }
    else
    {
        cout<<j<<endl;
    }
    return 0;
}