#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n;
    if(n%2==0)
    {
        k = n/2;
        printf("%d\n", k);

        for(int i = 0;i<k;i++)
        {
            printf("2 ");
        }
        printf("\n");
    }
    else
    {
        k = n/2;
        printf("%d\n", k);
        for(int i = 0;i<k-1;i++)
        {
            printf("2 ");
        }
        printf("3\n");
    }

    return 0;
}
