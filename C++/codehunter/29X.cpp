#include <bits/stdc++.h>

#define i64 unsigned long long int

using namespace std;

i64 a[200007];

int main()
{
    int n, m, ans = 0;

    cin>>n>>m;

    for(int i = 1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }

    for(int i = 1;i<=m;i++)
    {
        for(int j = i+1;j<=m;j++)
        {
            ans += a[i]*a[j];
         //   cout<<ans<<endl;
        }
    }

    cout<<ans<<endl;

    return 0;
}
