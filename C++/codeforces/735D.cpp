#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool isprime(ll n)
{
    ll i;
    for(i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ll n;
    cin>>n;

    if(n==2) cout<<1<<endl;
    else if(isprime(n)) cout<<1<<endl;
    else if(n%2==0) cout<<2<<endl;
    else if(isprime(n-2)) cout<<2<<endl;
    else cout<<3<<endl;

    return 0;
}
