#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    if(n==1 || n==2) puts("-1");
    else
    {
        for(int i = 1;i<n;i++)
        {
            printf("3 ");
        }
        printf("2\n");
    }

    return 0;
}
