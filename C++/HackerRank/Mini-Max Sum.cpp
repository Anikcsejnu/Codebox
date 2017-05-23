#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    long long int maxsum = 0, minsum = 0;
    for(int i = 0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a, a+5);

    for(int i = 1;i<5;i++)
    {
        maxsum += a[i];
    }
    for(int i = 0;i<4;i++)
    {
        minsum += a[i];
    }

    cout<<minsum<<" "<<maxsum<<endl;

    return 0;
}
