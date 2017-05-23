#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ptreat, treated, val, kase = 0;

    while(scanf("%d", &n) && n!=0)
    {
        treated = ptreat = 0;
        while(n--)
        {
            cin>>val;
            if(val==0)
            {
                treated++;
            }
            else
            {
                ptreat++;
            }
        }
        printf("Case %d: %d\n", ++kase, ptreat - treated);
    }

    return 0;
}
