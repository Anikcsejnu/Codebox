#include <bits/stdc++.h>
#define Max 100000000
#define ll long long int
using namespace std;

ll prime[Max], nPrime;
bool  mark[Max];
void seive()
{
    ll i, j, limit = sqrt(Max*1.) + 2;
    mark[1] = 1;

    for(i = 4;i<=limit;i+=2) mark[i] = true;

    prime[nPrime++] = 2;

    for(i = 3;i<=Max;i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;

            if(i<=limit)
            {
                for(j = i*i;j<=Max;j+=i*2)
                {
                    mark[j] = true;
                }
            }
        }
    }
}
int main()
{
    seive();
    ll q, k;
    scanf("%")
    while(q--)
    {
        cin>>k;
        cout<<prime[k-1]<<endl;
    }


    return 0;
}
