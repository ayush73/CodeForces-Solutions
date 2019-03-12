#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    
    string s;
    cin>>s;
    int len=s.size();
    int frequency[26];
    int Frequency[26];
    int i;
    for(i=0;i<26;i++)
    {
        frequency[i]=0;
        Frequency[i]=0;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
           // cout<<"debug"<<endl;
            frequency[s[i]-'A']++;
        }
        if(s[i]>=97&&s[i]<=122)
        {
          //  cout<<"debuginner"<<endl;
            Frequency[s[i]-'a']++;
        }
        else
        {
            continue;
        }
    }
    int v=0;
    for(i=0;i<26;i++)
    {
        if(frequency[i]+Frequency[i]>0)
        {
            v++;
        }
        else
        {
            break;
        }
    }
   // cout<<v<<endl;
    if(i==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}