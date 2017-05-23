// by map

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll i, m, n, c, cd, j;
    map<ll, ll>mp;

    while(scanf("%lld%lld", &m, &n) && m!=0 && n!=0)
    {
        c = 0;
        for(i = 0;i<m;i++)
        {
            cin>>cd;
            mp[cd] = 1;
        }
        for(j = 0;j<n;j++)
        {
            cin>>cd;
            if(mp[cd]==1)
            {
                c++;
            }
        }
        mp.clear();
        cout<<c<<endl;


    }

    return 0;
}
