#include<bits/stdc++.h>
using namespace std;
const int N = 100007,K = (int)1e5 + 1;

int row[N], col[N], x[K];

int main()
{
    int n, m, k, c, p;

    cin>>n>>m>>k;

    for(int i = 1;i<=k;i++)
    {
        cin>>c>>p>>x[i];

        if(c==1)
        {
            row[--p] = i;
        }
        else
        {
            col[--p] = i;
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            printf("%d ", x[max(row[i], col[j])]);
        }
        printf("\n");
    }
}
