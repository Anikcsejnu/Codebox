#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, val;

    cin>>n;
    val = (8*n) + 1;
    int s = (int)sqrt(1+8*n);
    if(s*s == val)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
