#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll removeZero(ll n)
{
    ll z = 0, i = 1;
    while(n!=0)
    {
        if(n%10==0)
        {
            n = n/10;
        }
        else
        {
           // cout<<z<<endl;
            z += (n % 10) * i;
            n = n/10;
            i *= 10;
        }

    }
    return z;
}
int main()
{
    ll a, b, c;

    cin>>a>>b;
    c = a + b;

    if(removeZero(a) + removeZero(b) == removeZero(c))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
