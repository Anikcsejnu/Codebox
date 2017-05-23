#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, a, b, i;

    cin>>t;

    for(i = 1;i<=t;i++)
    {
        cin>>a>>b;

        if(a>b)
        {
            printf("Case %lld: A\n", i);
        }
        else if(a<b)
        {
            printf("Case %lld: B\n", i);
        }
        else
        {
            printf("Case %lld: Same\n", i);
        }
    }


    return 0;
}
