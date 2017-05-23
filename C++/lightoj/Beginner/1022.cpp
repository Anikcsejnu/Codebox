#include<bits/stdc++.h>
#define pi 2*acos (0.0)
using namespace std;

int main()
{
    int  t;
    double r, area, a;

    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        area = 0;
        cin>>r;
        a = 2*r;
        area = a*a - pi*(r*r);


        printf("Case %d: %0.2lf\n", i, area);
    }

    return 0;
}
