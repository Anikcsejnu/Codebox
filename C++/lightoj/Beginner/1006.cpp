#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tcase, fn[10005], n;

    cin>>tcase;

    for(int i = 1;i<=tcase;i++)
    {
        cin>>fn[0]>>fn[1]>>fn[2]>>fn[3]>>fn[4]>>fn[5]>>n;

        for(int j = 6;j<=n;j++)
        {
            fn[j] = (fn[j-1]+fn[j-2]+fn[j-3]+fn[j-4]+fn[j-5]+fn[j-6]) % 10000007;

        }

        printf("Case %lld: %lld\n", i, fn[n] % 10000007);
    }

    return 0;
}
