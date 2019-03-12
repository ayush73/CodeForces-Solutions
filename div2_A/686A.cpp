#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{   
    ll n,x;
    cin>>n>>x;
    char c;
    ll s; ll v=0;
    while(n--)
    {
        cin>>c;
        cin>>s;
        if(c=='+')
        {
            x+=s;
        }
        if(c=='-')
        {
            if(s<=x)
            {
                x=x-s;
            }
            else
            {
                v++;
            }
        }
    }
    cout<<x<<" "<<v<<endl;
}