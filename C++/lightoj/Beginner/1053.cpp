#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll a, b, c, x ,y ,z;

    int t;

    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        cin>>a>>b>>c;
        x = a*a;
        y = b*b;
        z = c*c;

        if((x+y==z)||(y+z==x)||(z+x==y))
        {
            printf("Case %d: yes\n", i);
        }
        else
        {
            printf("Case %d: no\n", i);
        }
    }

    return 0;
}
