#include<bits/stdc++.h>
#define ll long long int
#define Max 100000
#define ll long long int
using namespace std;
vector<ll>v;
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

ll sumOfDigit(ll n)
{
    ll s = 0;
    while(n>0)
    {
        s = s + n%10;
        n = n / 10;
    }

    return s;
}
ll sumOfPrimeFactor(ll n)
    {
        ll i=2, sum=0;

        while(n>1)
        {
            if(n%i==0)
            {
                sum=sum+sumOfDigit(i); //Here 'i' is the prime factor of 'n' and we are finding its sum
                n=n/i;
            }
            else
                i++;
        }
        return sum;
    }
void genSmithNumber()
{

    for(ll num = 2;num<10000;num++)
    {
        if(sumOfDigit(num)==sumOfPrimeFactor(num) && mark[num]==true)
        {
            //cout<<sumOfDigit(num)<<endl;
            //cout<<sumOfPrimeFactor(num)<<endl;
            //cout<<num<<endl;
            v.push_back(num);
        }
    }
}

int main()
{
    seive();
    genSmithNumber();
    ll n;
    cin>>n;

//    if(sumOfDigit(n)==sumOfPrimeFactor(n))
//    {
//        printf("S of D = %lld\n", sumOfDigit(n));
//        printf("S of F = %lld\n", sumOfPrimeFactor(n));
//        cout<<"Smith"<<endl;
//    }
    cout<<v[n-1]<<endl;

    return 0;
}
