#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[107][107];
int main()
{
    ll m, n, mi = 1000000007 , ma = 0, val;

    cin>>n>>m;

    for(int i = 0;i<n;i++)
    {
        mi = 1000000007;
        for(int j = 0;j<m;j++)
        {
            cin>>val;
            mi = min(mi, val);
        }
       // cout<<"mi = "<<mi<<endl;
        ma = max(ma, mi);
    }

    cout<<ma<<endl;

    return 0;
}
