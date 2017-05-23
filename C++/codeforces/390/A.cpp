#include<bits/stdc++.h>
#define ll long long int
#define f first
#define s second
using namespace std;

int main()
{
    int a[1000],s1 = 0, s2 = 0, n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        s1 += a[i];
    }
    if(s1!=0)
    {
        printf("YES\n");
        printf("1\n");
        printf("%d %d\n", 1, n);
        return 0;
    }
    else
    {
        for(int i = 0;i<n;i++)
        {
            s2 += a[i];
            s1 -= a[i];

            if(s1 !=0 && s2!=0)
            {
                printf("YES\n");
                printf("2\n");
                printf("1 %d\n", i+1);
                printf("%d %d\n", i+2, n);
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
