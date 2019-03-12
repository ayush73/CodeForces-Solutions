#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int n,i,a,b;
queue<int>frst,scnd;
int main()
{
    cin>>n>>n;
  
    for(int i=0;i<n;i++){
        cin>>a;frst.push(a);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;scnd.push(a);
    }
    // let's assume maximum that will games occur is 100000
   // exit(0);
   // cout<<"hihihihihihihi"<<endl;
    /*while(!a.empty())
    {
        ll res=a.front();
        cout<<res<<" ";
        a.pop();
    }
    cout<<endl;
    while(!b.empty())
    {
        ll res=b.front();
        cout<<res<<" ";
        b.pop();
    }*/
    bool ok=false;
    
    /*for(ll i=0;i<5000000;i++)
    {
        if(a.empty())
        {
            ok=true;
            cout<<i<<" "<<2<<endl;
            break;
        }
        if(b.empty())
        {
            ok=true;
            cout<<i<<" "<<1<<endl;
            break;
        }
        ll res=a.front();
        ll res1=b.front();
        a.pop();
        b.pop();
        // that means a won the game
        if(res>res1)
        {
            a.push(res1);
            a.push(res);
        }
        // that means b won the game
        else
        {
            b.push(res1);
            b.push(res);
        }
    }*/
   // cout<<"hello"<<endl;
    
  for(int i=0;i<5000000;i++)
    {
        if(frst.empty()){cout<<i<<" "<<2<<endl;return 0;}
        if(scnd.empty()){cout<<i<<" "<<1<<endl;return 0;}
        a=frst.front();
        b=scnd.front();
        frst.pop();
        scnd.pop();
        if(a>b){
            frst.push(b);frst.push(a);
        }
        else{
            scnd.push(a);scnd.push(b);
        }
    }
    if(!ok)
    {
        cout<<-1<<endl;
    }
    return 0;
}