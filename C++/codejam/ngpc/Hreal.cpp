#include <bits/stdc++.h>
using namespace std;


void findLDS(int arr[], int n)
{

    vector<int> LDS[n];

    LDS[0].push_back(arr[0]);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[i] && LDS[j].size() > LDS[i].size())
                LDS[i] = LDS[j];
        }

        LDS[i].push_back(arr[i]);
    }

    int j = 0;
    for (int i = 0; i < n; i++)
        if (LDS[j].size() < LDS[i].size())
            j = i;

    // print LDS
    int co = 0;
    for (int i : LDS[j])
    {
       // cout << i << " ";
       co++;
    }
    cout<<co<<endl;

}

// main function
int main()
{
    int arr[] = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);

    findLDS(arr, n);

    return 0;
}
