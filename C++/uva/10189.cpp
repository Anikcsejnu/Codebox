#include<bits/stdc++.h>
using namespace std;

char mines[101][101];
int omines[101][101];

int dirx[8] = {-1,-1,-1,0,0,1,1,1};
int diry[8] = {-1,0,1,-1,1,-1,0,1};

void solve(int u, int v, int n, int m)
{
    for(int i = 0;i<8;i++)
    {
        int x = u + dirx[i];
        int y = v + diry[i];
        if(x<0 || y<0 || x>=n || y>=m)
        {
            continue;
        }

        if(mines[x][y]=='.')
        {
            omines[x][y]++;
        }


    }
}
int main()
{
    int m = 0, n = 0, t = 0, flag = 0;
    //freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d%d", &n, &m) &&m!=0 && n!=0)
    {
        t++;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                cin>>mines[i][j];
                omines[i][j] = 0;
            }
        }

        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(mines[i][j]=='*')
                {
                    omines[i][j] = '*';
                    solve(i, j, n, m);
                }
            }
        }
        if(flag==1)
        {
            printf("\n");
        }

        flag  = 1;

        printf("Field #%d:\n", t);
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(omines[i][j]==42)
                {
                    printf("*");
                }
                else
                {
                    printf("%d", omines[i][j]);
                }
            }
            printf("\n");
        }
        memset(omines, 0, 101);
        memset(mines, '\0', 101);

    }

    return 0;
}
