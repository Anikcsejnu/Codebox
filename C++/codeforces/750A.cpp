#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k, s = 0, h = 0, c =0;

    cin>>n>>k;
    h = 240 - k;

    for(ll i = 1;;i++)
    {
        s += i * 5;

        if(s > h)
            break;
        if(c > n)
        {
           c--;
           break;
        }

        c++;


    }
    cout<<c<<endl;

    return 0;
}
