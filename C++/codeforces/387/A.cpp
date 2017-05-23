#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, a, b, i, d, v, m = 1000007;

    cin>>n;
    if(n==1)
    {
        printf("1 1\n");
    }
    else
    {

    for(int i = 1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            v = i;
            d = n / i;

            if(abs(d-v)<m)
            {
               // cout<<v<<" "<<d<<endl;
                a = v;
                b = d;
                m = abs(d-a);
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    }

    return 0;
}
