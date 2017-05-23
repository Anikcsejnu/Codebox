#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m, c = 0;

    cin>>n>>m;

    if(n>m)
    {
        swap(m,n);
    }
    for(ll i = 1;i<=n;i++)
    {
        c+= (m+i)/5 - i/5;
        //cout<<c<<endl;
    }
    cout<<c<<endl;
    return 0;
}
