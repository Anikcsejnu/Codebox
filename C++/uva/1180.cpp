// C++ program to print all primes smaller than or equal to
// n using <a href="#">Sieve of Eratosthenes</a>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        scanf("%d,", &n);
        if(n==2 || n==3 || n==5 || n==7 || n==13 || n==17 || n==19)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
