#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mod 1e9+7
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll len=s.size();
    set<char> pre;
    rep(i,0,len){
        pre.insert(s[i]);
    }
    if(len>26){
        cout<<-1<<endl;
    }else{
        cout<<n-pre.size()<<endl;
    }
    //cout<<n-pre.size()<<endl;
}