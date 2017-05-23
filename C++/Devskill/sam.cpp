#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c)
{
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return true;
    default:
        return false;
    }
}
int main()
{
    int cov, coc, cos, tcase, kase = 0, wTime, totTime;
    char ch[100];
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>tcase;

    while(tcase--)
    {
        cov = coc = totTime = cos = 0;
        cin>>ch>>wTime;

        for(int  i = 0;ch[i]!='\0';i++)
        {
            if(isalpha(ch[i]))
            {
                ch[i] = tolower(ch[i]);
                if(isvowel(ch[i]))
                {
                    cov++;
                }
                else
                {
                coc++;
                }
            }
            else
            {
                cos++;
            }

        }
        totTime = (cos*3) + (cov*2) + coc;

        if(totTime<wTime)
        {
            printf("Case %d: Possible\n", ++kase);
        }
        else
        {
            printf("Case %d: Impossible\n", ++kase);
        }
       // printf("%d\n", totTime);
    }
    return 0;
}
