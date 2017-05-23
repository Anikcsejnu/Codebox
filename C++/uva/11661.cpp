#include<bits/stdc++.h>
#define maxi 100000
using namespace std;


int main()
{
    int l, r, d, ma;
    bool f;
    string s;
    while(cin>>l)
    {

    if(l==0)
    {
        return 0;
    }
    char ch = getchar();
    cin>>s;
    r = maxi, d = maxi, ma = maxi;
    f = false;
    for(int i = 0;i<l;i++)
    {
        if(s[i]=='Z')
        {
            f = true;
            break;
        }
        if(s[i]=='R')
        {
            r = i;
           // cout<<r<<endl;
            ma = min(ma, abs(r-d));
        }
        else if(s[i]=='D')
        {
            d = i;
           // cout<<d<<endl;
            ma = min(ma, abs(r-d));
        }
        else
        {
            continue;
        }

        //cout<<ma<<endl;
    }

    if(f==true)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ma<<endl;
    }
    }
    return 0;
}
