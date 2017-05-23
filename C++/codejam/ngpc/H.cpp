#include<bits/stdc++.h>
using namespace std;


int LDS(int arr[], int i, int n, int p)
{

    if (i == n)
        return 0;
    int e = LDS(arr, i + 1, n, p);


    int in = 0;
    if (arr[i] < p)
        in = 1 + LDS(arr, i + 1, n, arr[i]);

    return max(in, e);
}

int main()
{
    int t, n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];

        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<LDS(arr, 0, n, INT_MAX)<<endl;


    }


    return 0;
}
