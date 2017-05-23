#include<bits/stdc++.h>
using namespace std;

/*To check whether a number i is prime or not,we need to check a[i/2] or a[i>>1] whether it is true or false*/
#define isprime(i) (a[i>>1])

/*number is non prime if correpsonding entry is false*/
#define nonprime(i) (a[i>>1]=false)

/*boolean vector used for marking*/
std::vector<bool>a(100000002,true);

/*array used for storing prime numbers*/
static long long int arr[8000000];

int n=100000000;
int i,j,l;

void sieve()
{
    for(i=3;i<=10000;i+=2)
    {
        /*we do not need to mark multiples of already marked numbers*/
        while(!isprime(i))
        {
            i+=2;
        }
    j=i*(i-2);
    /*l=(2*i)-implemented using left shift*/
    l=i<<1;
    while((j=j+l)<=n)
      nonprime(j); /*used to set corresponding entry(arr[j>>1]) to false*/
    }
    j=0;
    arr[j]=2;
    for(i=3;i<=n;i+=2)
    {
        /*if entry corresponding to i is true,i is prime and hence stored in arr[]*/
        if(isprime(i))
        {
            arr[++j]=i;
        }
    }
}
int main()
{
  /*call the function to store prime numbers in arr[]*/
    sieve();
    long int t;

    /*scan the number of test cases*/
    scanf("%ld",&t);

    /*for each test case,access the kth entry from arr[] and print it*/
    while(t--)
    {
        long long int k;
        scanf("%lld",&k);
        printf("%lld\n",arr[k-1]);
    }
    return 0;

}

