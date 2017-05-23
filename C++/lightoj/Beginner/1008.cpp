#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll num, kase, d, m, c, r, k=0;

    cin>>kase;
    while(kase--)
    {
        cin>>num;

        m = ceil(sqrt(num));

        d = m*m - num;

        if(d<m)
        {
            r = m;
            c = d+1;
        }
        else
        {
            c = m;
            r = num - (m-1)*(m-1);
        }

        if((int)m%2==0)
        {
            ll t = c;
            c = r;
            r = t;
        }

        cout<<"Case "<<++k<<": "<<c<<" "<<r<<endl;
    }

    return 0;

}
