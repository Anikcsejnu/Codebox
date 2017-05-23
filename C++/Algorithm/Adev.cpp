#include<bits/stdc++.h>
using namespace std;


int main()
{

    int x, t;

    scanf("%d", &t);

    for(int i = 0;i<t;i++)
    {
        char ch[100];
        char ch1[100];
        char ch2[100];
        scanf("%s %s %s %d", &ch, &ch1, &ch2 ,&x);

        if(ch[4]=='o')
        {
            printf("Shuva naya barsha %d\n", x+650);
        }
        else
        {
            printf("Shuvo nobo borsho 1424\n", x-650);
        }
    }

    return 0;
}
