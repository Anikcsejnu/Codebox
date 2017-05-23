#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;


int main()
{
    ll first = 1, second = 1, ans = 0, n, res = 0;

    cin>>n;

    while(first+second<=n)
    {
        ans++;
        res = first + second;
        //cout<<res<<endl;
        first = second;
        second = res;
    }

    cout<<ans<<endl;

    return 0;

}
