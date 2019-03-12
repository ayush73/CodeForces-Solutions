#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.size();
    if(len==1)
    {
        cout<<s<<endl;
    }
    else
    {
    string t=s;
    int i;
    if(len%2!=0)
    {
       // cout<<"debugodd"<<endl;
     //   string t;
    t[len/2]=s[0];
    t[len-1]=s[len-1];
    t[0]=s[len-2];
    int v=0; int zz=len/2+1; int u=len/2-1;
    //    exit(0);
    for(i=1;i<len-1;i++)
    {
        if(v%2!=0)
        {
            if(zz<=len-2)
            {
            t[zz]=s[i];
            }
            zz++;
        }
        else
        {
            if(u>=0)
            {
            t[u]=s[i];
            }
            u--;
        }
        v++;
    }
       // cout<<"debugnew"<<endl;
      //  exit(0);
 for(i=0;i<len;i++)
 {
     cout<<t[i];
 }
    }
    else
    {
    //    string t;
                t[len/2-1]=s[0];
        t[len-1]=s[len-1];
        t[0]=s[len-2];
        int v=0;
        int zz=len/2; int u=len/2-2;
        for(i=1;i<len-1;i++)
        {
                if(v%2==0)
                {
                    t[zz]=s[i];
                    zz++;
                }
                else
                {
                    t[u]=s[i];
                    u--;
                }
            v++;
        }
        for(i=0;i<len;i++)
        {
           cout<<t[i];
        }
    }
    //bqmmwxqdkawvcoudtwcxjaxvvgwnry
   // bqmmwxqdkawvcoudtwcxjaxvvgwnry
      // vlbcumbrfflsnxugdudvovamfkspeiwkbhaqxqieanbghsgbnrv
  //     vlbcumbrfflsnxugdudvovamfkspeiwkbhaqxqieanbghsgbnrv
    }
}