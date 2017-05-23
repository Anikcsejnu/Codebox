#include<bits/stdc++.h>
#define ll long long int
#define f first
#define s second
using namespace std;

int main()
{
    char ch[4][4];
    int chx = 0, chd = 0, cvh = 0 , cvd = 0 , cdx = 0, cdv = 0;
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            scanf("%c", &ch[i][j]);
        }
        char c = getchar();
    }

    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            if(ch[i][j]=='x')
            {
                chx++;
            }
            else if(ch[i][j]=='.')
            {
                chd++;
            }
        }
        if(chx==2 && chd>=1)
        {
            break;
        }
        printf("\n");
    }
    cout<<chx<<" "<<chd<<endl;
}
