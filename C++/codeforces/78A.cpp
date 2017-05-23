#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cv[3], l1, l2 , l3;
    cv[0] = 0, cv[1] = 0, cv[2] = 0;

    char p1[101];
    char p2[101];
    char p3[101];

    scanf("%[^\n]s", p1);
    char ch = getchar();
    scanf("%[^\n]s", p2);
    ch = getchar();
    scanf("%[^\n]s", &p3);
    ch = getchar();

    l1 = strlen(p1);
    l2 = strlen(p2);
    l3 = strlen(p3);

    for(int i = 0;i<l1;i++)
    {
        if(p1[i]=='a' || p1[i]=='e' || p1[i]=='i' || p1[i]=='o' || p1[i]=='u')
        {
            cv[0]++;
        }
    }
    for(int i = 0;i<l2;i++)
    {
        if(p2[i]=='a' || p2[i]=='e' || p2[i]=='i' || p2[i]=='o' || p2[i]=='u')
        {
            cv[1]++;
        }
    }
    for(int i = 0;i<l3;i++)
    {
        if(p3[i]=='a' || p3[i]=='e' || p3[i]=='i' || p3[i]=='o' || p3[i]=='u')
        {
            cv[2]++;
        }
    }

    if(cv[0]==5 && cv[1]==7 & cv[2]==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    /*puts(p1);
    puts(p2);
    puts(p3);*/

    return 0;

}
