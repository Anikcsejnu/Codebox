#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool isprime(ll n)
{
    ll i;

    for(i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll x, y;

    cin>>x>>y;

    while(!isprime(++x))
    {

    }

    if(x==y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
