#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k, div = 0,  x, rem = 0;

    cin>>n>>k;

    div = n/k;
    div++;

    cout<<div*k<<endl;

    return 0;
}
