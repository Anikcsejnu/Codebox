#include <iostream>
#include <cstdio>
int main()
{
    int t, n;
    std::ios::sync_with_stdio(false);
    std::scanf("%d", &t);

    for(int i = 1;i<=t;i++)
    {
        std::cin>>n;

        if(n>9)
        {
            std::printf("%d %d\n", n-10, n-(n-10));
        }
        else
        {
            std::printf("%d %d\n", 0, n);
        }
    }

    return 0;
}
