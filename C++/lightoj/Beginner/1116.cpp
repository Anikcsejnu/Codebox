//TLE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll num, a, b, s, i, ekka, dukka, flag;

    int t ,  k=0;

    cin>>t;

    while(t--)
    {
        flag = 0;
        cin>>num;
        s = sqrt(num);
        for(i = 2;i<=s;i++)
        {
            if(num%i==0)
            {
                a = i;
                b = num/i;

                //printf("%lld %lld\n", a, b);

                if(a%2==0 && b%2!=0)
                {
                    ekka = b;
                    dukka = a;
                    flag = 1;
                    break;
                }
                if(a%2!=0 && b%2==0)
                {
                    ekka = a;
                    dukka = b;
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1)
        {
            printf("Case %d: %lld %lld\n", ++k, ekka, dukka);
        }
        else
        {
            printf("Case %d: Impossible\n", ++k);
        }
    }

    return 0;
}
