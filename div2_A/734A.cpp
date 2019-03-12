

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    string s;
    cin>>s;
    int v=0,g=0;
    int len=s.size(); int i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='A')
        {
            v++;
        }
        else if(s[i]=='D')
        {
            g++;
        }
    }
    if(v>g)
    {
        cout<<"Anton"<<endl;
    }
    else if(v<g)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}