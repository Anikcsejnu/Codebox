#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(int hs=1;hs<=i;hs++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
