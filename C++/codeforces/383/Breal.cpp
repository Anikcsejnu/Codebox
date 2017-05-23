
#include<bits/stdc++.h>
#define mx 100007
using namespace std;

int a[mx], b[mx];

int main()
{
    int x, n, co = 0;
    cin>>n>>x;

    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i]^x;
    }

    for(int i = 0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    //cout<<co<<endl;
}
