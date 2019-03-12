#include<bits/stdc++.h>
#define long long int;
using namespace std;
int main()
{
    int size,days;
    cin>>size>>days;
    int e[12345];
    int v=0;
    while(days--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int i;
        for(i=0;i<len;i++)
        {
            if(s[i]=='0')
            {
                e[v]=1;
                v++;
                break;
            }
        }
        if(i==len)
        {
            e[v]==0;
            v++;
        }
    } 
    int i;
 /*  for(i=0;i<v;i++)
   {
       cout<<e[i]<<" ";
   }  */
  //  cout<<endl;
    int result=0;int count=0;
    int f[12345]; int g=0;
    for(i=0;i<v;i++)
    {
        if(e[i]==0)
        {
            count=0;
            f[g]=count; g++;
        }
        else
        {
          //  cout<<"debuginner"<<endl;
            count++;
            f[g]=count;
            g++;
           // cout<<"value of count is:-"<<" "<<count<<endl; 
        }
    }   int ans=0;
    for(i=0;i<g;i++)
    {
     ans=max(ans,f[i]);
    }
    cout<<ans<<endl;
    return 0;
}