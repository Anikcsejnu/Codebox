#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int e, o, i, co =0 , ce = 0;
    cin>>e>>o;
    for(int i = 1;i<=e+o;i++)
    {
        if(i%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    if(co==o && ce==e)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
