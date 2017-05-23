#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000000];
int main()
{
    ll n;
    cin>>n;
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    ll loc = max_element(a, a+n) - a;
    cout<<a[loc]<<endl;
    return 0;
}
