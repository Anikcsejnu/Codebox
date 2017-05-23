#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d, mp = 0, vp = 0;

    cin>>a>>b>>c>>d;

    mp = max((3*a)/10, (a - (a/250)*c));
    vp = max((3*b)/10, (b - (b/250)*d));


    if(mp==vp)
    {
        printf("Tie\n");
    }
    else if(mp>vp)
    {
        printf("Misha\n");
    }
    else
    {
        printf("Vasya\n");
    }

    return 0;
}
