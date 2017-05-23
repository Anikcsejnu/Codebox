#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define INF 1000007
using namespace std;

int main()
{
    int n, b, h, w;
    while(scanf("%d%d%d%d", &n, &b, &h, &w)!=EOF)
    {
        int hprice, mi = INF, empbed, price = 0;
        for(int i = 0;i<h;i++)
        {
            scanf("%d", &hprice);
            for(int j = 0;j<w;j++)
            {
                scanf("%d", &empbed);
                if(n<=empbed)
                {
                    price = n*hprice;
                    mi = min(price, mi);
                }
            }
        }
        if(mi>b)
        {
            printf("stay home\n");
        }
        else
        {
            printf("%d\n", mi);
        }
    }
}
