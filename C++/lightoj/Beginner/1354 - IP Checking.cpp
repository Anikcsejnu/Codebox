#include<bits/stdc++.h>
using namespace std;
int DecimalToBinary(int n)
{
    int rem, i = 1, binary = 0;

    while(n!=0)
    {
        rem = n%2;
        n = n/2;
        binary += i*rem;
       // printf("%d\n", binary);
        i*=10;
    }

    return binary;
}

int main()
{
    int tcase, k = 0;
    int a, b, c, d, m, n, o, p, s, t, u, v;
    cin>>tcase;
    while(tcase--)
    {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        m = DecimalToBinary(a);
        n = DecimalToBinary(b);
        o = DecimalToBinary(c);
        p = DecimalToBinary(d);

        scanf("%d.%d.%d.%d", &s, &t,&u, &v);

        if(m==s && n==t && o==u && p==v)
        {
            printf("Case %d: Yes\n", ++k);
        }
        else
        {
            printf("Case %d: No\n", ++k);
        }
    }

    return 0;
}
