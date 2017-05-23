#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[300004];

    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    if(n%2==0)
    {
        cout<<a[n/2 - 1]<<endl;
    }
    else
    {
        cout<<a[n/2]<<endl;
    }

    return 0;
}
