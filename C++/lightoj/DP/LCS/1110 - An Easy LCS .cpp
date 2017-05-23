#include<bits/stdc++.h>
using namespace std;
int i, j, m, n, dp[100][100];
char x[1000], y[1000], lcs[100][100];
void printlcs(int i , int j)
{
    if(i==0 || j == 0)
        return;

    if(lcs[i][j]=='c')
    {
        printlcs(i-1, j-1);
        printf("%c", x[i-1]);
    }
    else if(lcs[i][j]=='u')
    {
        printlcs(i-1, j);
    }
    else
    {
        printlcs(i, j-1);
    }

}
void LCS()
{
    m = strlen(x);
    n = strlen(y);

    for(i = 0;i<=m;i++)
    {
        for(j = 0;j<=n;j++)
        {
            if(i==0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if(x[i-1]==y[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                lcs[i][j] = 'c';
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                dp[i][j] = dp[i-1][j];
                lcs[i][j] = 'u';
            }
            else
            {
                dp[i][j] = dp[i][j-1];
                lcs[i][j] = 'd';
            }
        }
    }
}
int main()
{

    scanf("%s", x);
    scanf("%s", y);

    LCS();
    printlcs(m,n);

    return 0;

}
