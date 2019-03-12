#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int k;
    cin>>k;
    long long int len=s.size();
    long long int count=0;
    long long int v=0;
    long long int i;
    for(i=len-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            count++;
        }
        if(s[i]!='0')
        {
            if(count>=k)
            {
                break;
            }
            else
            {
               // cout<<"debug2"<<endl;
                v++;
            }
        }
    }
    if(i==-1)
    {
        long long int j;
        long long int ff=0;
       // cout<<"debug"<<endl;
        for(j=0;j<len;j++)
        {
            if(s[j]=='0')
            {
                ff++;
            }
        }
        if(ff>0)
        {
            cout<<len-1<<endl;
        }
    }
    else
    {
        cout<<v<<endl;
    }
    return 0;
}