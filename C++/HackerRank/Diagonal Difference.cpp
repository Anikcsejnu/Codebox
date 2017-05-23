#include<bits/stdc++.h>
#define ll long long int
#define M 100000
using namespace std;

int main()
{
    int n, suma  = 0, sumb = 0;
    cin>>n;
    int a[n][n];

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                suma += a[i][j];
            }
        }
    }
    int j = 0;
    for(int i = n-1;i>=0;i--)
    {
        sumb += a[i][j];
        j++;
    }
    cout<<abs(suma-sumb)<<endl;
}
