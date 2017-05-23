// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
vector<int>primenum;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
       {
           primenum.push_back(p);
       }

}

// Driver Program to test above function
int main()
{
    int num;
    int n = 10000;
    SieveOfEratosthenes(n);
    int t;
    cin>>t;
    while(t--){
    cin>>num;
    if(binary_search(primenum.begin(), primenum.end(), num))
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
