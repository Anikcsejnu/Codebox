#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, c, d, l, mil, mal;

    cin>>t;

    while(t--)
    {
        mil = mal = 0;
        cin>>c>>d>>l;

        if(c<= 2*d)
        {
            mil = d*4;
        }
        else
        {
            mil = c*4;
        }
        mal = (c + d) * 4;
        //cout<<mil<<" "<<mal<<endl;
        if(l>=mil && mal>=l)
        {
            if(l%4==0)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
