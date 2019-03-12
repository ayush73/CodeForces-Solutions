#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
using namespace std;
int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll len=s.size();
    if(s[a-1]!=s[b-1])
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}

