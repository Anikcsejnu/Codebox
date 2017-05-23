#include<bits/stdc++.h>
#define MAX 100007
#define ll long long int
using namespace std;
vector<ll>a[MAX];
int main()
{
    ll n, m, k, val, r, check, i, j;

    cin>>n>>m>>k;


    for(i = 0;i<n;i++)
    {
        for(j = 0;j<m;j++)
        {
            a[i].push_back(0);
        }
    }
    for(i = 0;i<k;i++)
    {
        cin>>check>>r>>val;

        if(check == 1)
        {
            for(int j = 0;j<m;j++)
            {
                a[r-1][j] = val;
            }
        }
        else
        {
            for(j = 0;j<n;j++)
            {
                a[j][r-1] = val;
            }
        }
    }
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        printf("\n");
    }

    return 0;
}
