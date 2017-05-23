#include<bits/stdc++.h>
#define ll long long int
#define maxn 123456
using namespace std;
int a[maxn], s[1000][1000], sum = 0;
int main()
{
    ll n , u, v;
    cin>>n;
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i = 0;i<n-1;i++)
    {
        cin>>u>>v;
    }
    for(ll i = 1;i<=n-1;i++)
    {
        s[i][i] = i;
        for(ll j = i+1;j<=n;j++)
        {
            s[i][j] = s[i][j-1] ^ j;
        }
        //s[k-2] = 0;
    }
    for(ll i = 1;i<=n-1;i++)
    {
        for(ll j = i+1;j<=n;j++)
        {
            sum = sum + s[i][j];
            cout<<s[i][j]<<endl;
        }

    }
    for(ll i = 0;i<n;i++)
    {
        sum += a[i];
    }
    cout<<sum<<endl;
}
