#include<bits/stdc++.h>
using namespace std;
int l[100][100], m, n;
char x[1000], y[1000];
int lcs()
{
    int i, j, m, n;
    m = strlen(x);
    n = strlen(y);
    for(i = 0;i<=m;i++)
    {
        for(j = 0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                l[i][j] = 0;
            }
            else if(x[i-1]==y[j-1])
            {
                l[i][j] = l[i-1][j-1] + 1;
                //cout<<x[i-1]<<endl;
            }
            else
            {
                l[i][j] = max(l[i-1][j], l[i][j-1]);
            }
        }
    }
    return l[m][n];
}
int main()
{
    int m, n;

    scanf("%s", x);
    scanf("%s", y);

    cout<<lcs()<<endl;

    /* To showing the dp table
    m = strlen(x);
    n = strlen(y);
    for(int i = 0;i<=m;i++)
    {
        for(int j = 0;j<=n;j++)
        {
            printf("%d ", l[i][j]);
        }
        printf("\n");
    }*/
}
