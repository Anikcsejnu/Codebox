#include<bits/stdc++.h>
#define ll long long int
#define maxn 200010
using namespace std;
ll v[maxn];
bool cmp()
void printDivisors(ll n)
{
    // Vector to store half of the divisors

    ll i, j, s, c;
    for(j = 1;j<=n;j++)
    {
        c = 0;
        s = sqrt(j);
        for (i=1; i<=s; i++)
        {
            if (j%i==0)
            {
                if (j/i == i) // check if divisors are equal
                //cout<<i;
                    c++;
                else
                {
                    c+=2;

                    // push the second divisor in the vector
                }
            }
        }
        v[j] = c;
    }

}

int main()
{
     long long int  n, k;
     cin>>n;
     printDivisors(n);
     sort(v, v+n, cmp);
     for(ll i = 1;i<=n;i++)
     {
         printf("%lld = %lld\n", i, v[i]);
     }

     return 0;

}


