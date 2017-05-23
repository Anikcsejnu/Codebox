#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    int c = 0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
       if (prime[p]){
            c++;
       }

       cout<<c<<endl;

}

int main()
{
    int n;
    while(cin>>n)
    {
        SieveOfEratosthenes(n);
    }

    return 0;
}
