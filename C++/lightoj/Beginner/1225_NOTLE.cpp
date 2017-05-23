#include<bits/stdc++.h>
using namespace std;
bool palindrome(int x)
{
    int ans, temp;

    temp = x;
    ans = 0;
    while(x)
    {
        ans = ans*10 + x%10;
        x /= 10;
    }

    return ans==temp;
}
int main()
{
    int num, t;

    scanf("%d", &t);

    for(int i = 1;i<=t;i++)
    {
        scanf("%d", &num);

        palindrome(num)?printf("Case %d: Yes\n", i) :printf("Case %d: No\n", i);
    }


    return 0;
}
