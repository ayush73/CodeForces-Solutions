#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
    ll n;
    cin>>n;
    map<string,int> mymap;
    while(n--)
    {
        string s;
        cin>>s;
        ll len=s.size();
      //  cout<<s<<endl;
        vector<char> vv;
        ll frequency[26];memset(frequency,0,sizeof(frequency));
        rep(i,0,len)
        {
           //cout<<s[i];
           frequency[s[i]-'a']++;   
        }
        rep(i,0,26)
        {
            if(frequency[i]>0)
            {
                vv.pb(i+'a');
            }
        }
        ll size=vv.size();
      //  cout<<endl;
      //  cout<<"hahaha"<<endl;        
        sort(vv.begin(),vv.end());
        string res="";
        rep(i,0,size)
        {
            res+=vv[i];
        }
        mymap[res]++;
    }
    cout<<mymap.size();
    cout<<endl;
}