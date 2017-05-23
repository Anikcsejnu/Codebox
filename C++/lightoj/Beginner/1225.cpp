//TLE Waaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i = 0;

    string s, revs;

    cin>>t;
    while(t--)
    {
        cin>>s;
        revs = s;
        reverse(s.begin(), s.end());


        if(s==revs)
        {
            printf("Case %d: Yes\n", ++i);
        }
        else
        {
            printf("Case %d: No\n", ++i);
        }
    }

    return 0;
}
