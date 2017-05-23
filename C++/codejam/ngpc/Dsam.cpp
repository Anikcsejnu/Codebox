#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int arr[30][30];

int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {

    memset(arr,0,sizeof(arr));
    int n;
    int c=0;
    scanf("%d",&n);
    int i=-1;
    int j=-1;

    while(c!=(n*n))
    {


        i=i+1;
        for(j=j+1;arr[i][j]==0 && j<n; j++)
        {
            arr[i][j]=++c;
        }

        j=j-1;

        for(i=i+1;arr[i][j]==0 && i<n; i++)
        {
            arr[i][j]=++c;
        }

        i=i-1;

        for(j=j-1;arr[i][j]==0 && j>-1; j--)
        {
            arr[i][j]=++c;
        }

        j=j+1;
        for(i=i-1;arr[i][j]==0 && i>-1; i--)
        {
            arr[i][j]=++c;
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d ",arr[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    }

}
