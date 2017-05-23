#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, d = 0, r = 0, m = 0;
    string s;
    cin>>n;
    cin>>s;

    for(int i =0;i<n;i++)
    {
        if(s[i]=='D')
        {
            d++;
        }
        else
        {
            for(int j = i;j<i+d;j++)
            {
                s[j] = '?';
            }
            d = 0;
        }
    }
    d = 0;
    r = 0;
    for(int i =0;i<n;i++)
    {
        if(s[i]=='R')
        {
            r++;
        }
        else
        {
            for(int j = i;j<i+r;j++)
            {
                s[j] = '?';
            }
            d = 0;
        }
    }
    for(int i =0;i<n;i++)
    {
        if(s[i]=='D')
        {
            d++;
        }
        else
        {
            if(s[i]!='?')
            {
                r++;
            }
        }
    }
    if(r>=d)
    {
        cout<<"R\n";
    }
    else
    {
        cout<<"D\n";
    }
    cout<<s<<endl;
    return 0;
}
