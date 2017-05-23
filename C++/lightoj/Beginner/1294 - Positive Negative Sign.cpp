#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t, n, m, k = 0, sum;

    cin>>t;

    while(t--)
    {
        sum = 0;
        cin>>n>>m;
        sum = m*(n/2);

        cout<<"Case "<<++k<<": "<<sum<<endl;
    }
}
