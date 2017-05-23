#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n, v, sum = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>v;
        sum += v;
    }
    if(sum % n == 0) printf("%d\n", n);
    else printf("%d\n", n-1);
    return 0;
}
