#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll kadane(ll a[], ll s)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;

    for(ll i = 0;i<s;i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if(max_ending_here<0)
            max_ending_here = 0;
    }

    return max_so_far;
}

int main()
{
    ll n;
    cin>>n;
    ll a[n], b[n], c[n];

    for(ll i = 0;i<n;i++)
    {
        cin>>a[i]; b[i] = 0; c[i] = 0;
    }
    for(ll i = 0;i<n-1;i++)
    {
        b[i] = c[i] = abs(a[i]-a[i+1]);
    }
    for(ll i = 0;i<n;i++)
    {
        if(i%2==0) b[i] *= -1;
        else c[i] *= -1;
    }
    cout<<max(kadane(b, n), kadane(c,n))<<endl;


    return 0;
}
