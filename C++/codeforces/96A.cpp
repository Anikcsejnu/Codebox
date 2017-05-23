#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    string s;
    int c0 = 0, c1 = 0, mx = 0;

    cin>>s;

    int l = s.size();

    for(int i = 0;i<l;i++)
    {
        if(s[i]=='0')
        {
            c0++;
            c1 = 0;
            if(c0>mx)
            {
                mx = c0;
            }

        }
        else
        {
            c1++;
            c0 = 0;
            if(c1>mx)
            {
                mx = c1;
            }
        }
    }

    if(mx>=7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
