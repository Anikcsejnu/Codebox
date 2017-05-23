#include<bits/stdc++.h>
#define anik main
using namespace std;


int anik()
{
    long long int n, s;

    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }

        s = sqrt(n);

        if(n!=s*s)
        {
            printf("Ordinary\n");
        }
        else
        {
            printf("Special\n");
        }
    }
    return 0;
}
