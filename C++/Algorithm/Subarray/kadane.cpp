//to find the maximum subarray sum
#include<bits/stdc++.h>
using namespace std;

int kadane(int a[], int s)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for(int i = 0;i<s;i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if(max_ending_here<0)
            max_ending_here = 0;
    }

    return max_so_far;
}

int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i = 0;i<n;i++)
     {
         cin>>a[i];
     }
     cout<<kadane(a, n)<<endl;
     return 0;

}