#include<bits/stdc++.h>
#define ll long long int
#define M 100000
using namespace std;

int main()
{
    ll n , i, sum = 0, a;
    cin>>n;
    for(i  = 0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}
