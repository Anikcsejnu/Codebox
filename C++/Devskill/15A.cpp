
#include <bits/stdc++.h>
using namespace std;
 vector<int>PP;
void SieveOfEratosthenes(int n)
{
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

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          PP.push_back(p);
}

// Driver Program to test above function
int main()
{
    SieveOfEratosthenes(123457);
    int n, PR;

    cin>>n;
    for(int i = 1;i<=1000;i++)
    {

        PR = (n*i) + 1;
        if(!binary_search(PP.begin(), PP.end(), PR))
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
