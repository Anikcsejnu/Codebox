#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B = 0, u = 0, l = 0, b = 0, a = 0, S = 0, r = 0;
    string s;

    cin >>s;

    int le = s.size();

    for(int i = 0;i<le;i++)
    {
        if(s[i]=='B')
        {
            B++;
        }
        else if(s[i]=='u')
        {
            u++;
        }
        else if(s[i]=='l')
        {
            l++;
        }
        else if(s[i]=='b')
        {
            b++;
        }
        else if(s[i]=='a')
        {
            a++;
        }
        else if(s[i]=='s')
        {
            S++;
        }
        else if(s[i]=='r')
        {
            r++;
        }
        else
        {
            continue;
        }
    }
    int c = 0;
    while(B>=1 && u>=2 && l>=1 && b>=1 && a>=2 && S>=1 && r>=1)
    {
        c++;
        B--;
        u = u - 2;
        l--;
        b--;
        a = a -2;
        S--;
        r--;

    }
    cout<<c<<endl;
}
