#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, a, b, d = 0;

    cin>>k>>a>>b;

    d = (a/k) + (b/k);

    if(a/k==0 && b%k!=0) d = - 1;
    if(b/k==0 && a%k!=0) d = - 1;

    cout<<d<<endl;
    return 0;
}
