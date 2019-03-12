#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,ch1;
    cin>>ch>>ch1;
    long long int n,p;
    cin>>p;
    n=p%4;
    if(ch=='^')
    {
        //cout<<"debug"<<endl;
        if(n==1)
        {
            char s='<';
            char t='>';
            if(s==ch1&&t==ch1)
            {
                cout<<"undefined"<<endl;
            }
            if(s==ch1)
            {
                cout<<"ccw"<<endl;
            }
            if(ch1==t)
            {
                cout<<"cw"<<endl;
            }
            
        }
        else if(n==2)
        {
           cout<<"undefined"<<endl;
        }
        else if(n==3)
        {
            char s='<';
            char t='>';
            if(s==ch1&&t==ch1)
            {
                cout<<"undefined"<<endl;
            }
            if(s==ch1)
            {
                cout<<"cw"<<endl;
            }
            if(ch1==t)
            {
                cout<<"ccw"<<endl;
            }
        }
        else if(n==0)
        {
            cout<<"undefined"<<endl;
        }
    }
    else if(ch=='v')
    {
       // cout<<"debug1"<<endl;
        char s='<';
        char t='>';
        if(n==0)
        {
            cout<<"undefined"<<endl;
        }
        else if(n==1)
        {
            if(ch1==s)
            {
              cout<<"cw"<<endl;  
            }
            else if(ch1==t)
            {
                cout<<"ccw"<<endl;
            }
        }
        else if(n==2)
        {
            cout<<"undefined"<<endl;
        }
        else if(n==3)
        {
            if(ch1==t)
            {
                cout<<"cw"<<endl;
            }
            if(ch1==s)
            {
                cout<<"ccw"<<endl;
            }
        }
    }
    else if(ch=='>')
    {
        //cout<<"debug2"<<endl;
        char s='v';
        char t='^';
        if(n==0)
        {
            cout<<"undefined"<<endl;
        }
        else if(n==1)
        {
            if(ch1==s)
            {
                cout<<"cw"<<endl;
            }
            else if(ch1==t)
            {
                cout<<"ccw"<<endl;
            }
        }
        else if(n==2)
        {
            cout<<"undefined"<<endl;
        }
        else if(n==3)
        {
            if(ch1==s)
            {
                cout<<"ccw"<<endl;
            }
            else if(ch1==t)
            {
                cout<<"cw"<<endl;
            }
        }
    }
    else if(ch=='<')
    {
        //cout<<"debug3"<<endl;
        char s='^';
        char t='v';
        if(n==0)
        {
            cout<<"undefined"<<endl;
        }
         if(n==1)
        { 
            if(ch1==s)
            {
                cout<<"cw"<<endl;
            }
            else if(ch1==t)
            {
                cout<<"ccw"<<endl;
            }
        }
        if(n==2)
        {
            cout<<"undefined"<<endl;
            
        }
         if(n==3)
        {
            if(ch1==s)
            {
                cout<<"ccw"<<endl;
            }
            else if(ch1==t)
            {
                cout<<"cw"<<endl;
            }
        }
    }

    return 0;
}