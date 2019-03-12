

#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define cerr A
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    char m[len+1];
    m[len-1]=s[len-1];
    // now we are extacting the minimum element.......
    for(int i=len-2;i>=0;i--)
    {
       m[i]=min(m[i+1],s[i]);
    }
    stack<char> lol;
    string ans="";
    // this array is actually tracking of the current minimum element in the array......
    // this array is keeping count of the minimum char...
    for(ll i=0;i<len;i++)
    {
       while(!lol.empty() and lol.top()<=m[i])
       {
         ans+=lol.top();
         lol.pop();
       }
       lol.push(s[i]);
    }
    while(!lol.empty())
    {
          char x=lol.top();
          ans+=x;
          lol.pop();
    }
    cout<<ans<<endl;
    return 0;
}