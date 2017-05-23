#include<bits/stdc++.h>
using namespace std;
int ua[12345];
int la[12345];
int da[12345];
bool prime[12345];
void SieveOfEratosthenes(int n)
{
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
//    for (int p=2; p<=n; p++)
//       if (prime[p])
//          cout << p << " ";
}

int main()
{
    SieveOfEratosthenes(2001);
    string s;
    int t, c, kase = 0;
    cin>>t;
    while(t--)
    {
        c = 0;
        cin>>s;
        memset(ua, 0 , sizeof(ua));
        memset(la, 0 , sizeof(la));
        memset(da, 0 , sizeof(da));
        int l = s.size();
        for(int i = 0;i<l;i++)
        {
            if(isalpha(s[i]) && (s[i]>='A' && s[i]<='Z'))
            {
                ua[s[i]-65]++;
            }
            else if(isalpha(s[i]) && (s[i]>='a' && s[i]<='z'))
            {
                la[s[i]-97]++;
            }
            else
            {
                da[s[i]-48]++;
            }

        }
        printf("Case %d: ", ++kase);
        for(int i = 0;i<10;i++)
        {
            if(prime[da[i]] && da[i]>1)
            {
                printf("%c", i+48);
                c++;
            }
        }
        for(int i = 0;i<26;i++)
        {
            if(prime[ua[i]] && ua[i]>1)
            {
                printf("%c", i+65);
                c++;
            }
        }

        for(int i = 0;i<26;i++)
        {
            if(prime[la[i]] && la[i]>1)
            {
                printf("%c", i+97);
                c++;
            }
        }
        if(c==0)
        {
            printf("empty");
        }
        printf("\n");
        s.clear();
    }
    return 0;
}
