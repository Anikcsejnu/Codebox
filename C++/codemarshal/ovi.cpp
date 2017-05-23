#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int val, n, k;

    printf("Enter the size of the vector = ");
    scanf("%d", &n);

    printf("Enter %d values\n", n);
    //taking input in the vector array
    for(int i = 0;i<n;i++)
    {
        printf("v[%d] = ", i+1);
        scanf("%d", &val);
        v.push_back(val); // use to insert value in vector
    }
    printf("Enter the value of k(1 - %d) = ", n-1);
    scanf("%d", &k);

    printf("Element before interchange : \n");
    for(int i = 0;i<n;i++)
    {
        printf("v[%d] = %d\n", i+1, v[i]);
    }

    // interchanging the k & k+1 value
    swap(v[k-1], v[k]);
    printf("Element after interchange : \n");
    for(int i = 0;i<n;i++)
    {
        printf("v[%d] = %d\n", i+1, v[i]);
    }

}
