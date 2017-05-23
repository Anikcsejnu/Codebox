#include<bits/stdc++.h>
#define i64 unsigned long long int
using namespace std;

int main()
{
    i64 n, i;

    cin>>n;
    n--;
    for(i = 1;i<=n;i++)
    {
        n -= i;
    }
    cout<<n + 1<<endl;

    return 0;
}
