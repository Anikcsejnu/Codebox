#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, ma = 0, ka = 0, flag = 0;
    string s;
    cin>>n>>p>>q;

    cin>>s;

    if(p>q) swap(p,q);

    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=n;j++)
        {
            if(p*i + q*j == n)
            {
                flag  = 1;
                ma = i;
                ka = j;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<ma+ka<<endl;
        int in = 0;
        for(int i = 0;i<ma;i++)
        {
            for(int j = 0;j<p;j++)
            {
                cout<<s[in++];
            }
            cout<<endl;
        }
        for(int i = 0;i<ka;i++)
        {
            for(int j = 0;j<q;j++)
            {
                cout<<s[in++];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;

}
