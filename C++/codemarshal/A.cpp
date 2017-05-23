#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int t, kase = 0, n, g;

    cin>>t;

    while(t--)
    {
        cin>>g;

        n = g/2;
        printf("Case %lld: %lld\n", ++kase, n);
    }

    return 0;
}
