#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
ll find(string s)
{
    ll len=s.size();
    ll i,p;
    rep(i,0,len)
    {
        if(s[i]=='0')
        {
            p=i; break;
        }
    }
    if(i<=len-1)
    {
        return p;
    }
    else
    {
        return -1;
    }
}
int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    vector<char> v;
    ll k=find(s);
 //   cout<<"value of k is"<<" "<<k<<endl;
    if(k>0)
    {
        rep(i,0,len)
        {
            if(i==k)   
                continue;
            else
                cout<<s[i];
        }
    }
    else
    {
        rep(i,0,len-1)
            cout<<s[i];
    }
    return 0;
}