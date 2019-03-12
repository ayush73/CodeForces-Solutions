#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    bool okay=false;
    rep(i,0,len){
        if(s[i]=='4'||s[i]=='7'){
            okay=true;
        }
    }
    if(!okay)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll count_4=0,count_7=0;
        rep(i,0,len){
            if(s[i]=='4'){
                count_4++;
            }elif(s[i]=='7'){
                count_7++;
            }
        }
        if(count_7>count_4){
            cout<<7<<endl;
        }else{
            cout<<4<<endl;
        }
    }
    return 0;
}