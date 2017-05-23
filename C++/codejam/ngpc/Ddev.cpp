#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll rec(ll, ll);

ll solve(ll n){
   ll ret  = rec(n,n);
   return ret;
}

ll rec(ll n,ll m){
    if(n==0 || m==0) return 0;
    ll res = (n | m) & (n ^ m);
   // cout<<res<<endl;
    res += rec( n , m -1 );
    res += rec( n-1, m   );
    res -= rec( n-1, m-1 );
    return res;
}


int main()
{
    ll n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }

    return 0;
}
