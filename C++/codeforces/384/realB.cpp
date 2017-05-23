#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

int main()
{
    ull c = 1, n, k;
    cin>>n>>k;

    while(k%2==0)
    {
        k = k/2;
        c++;
    }
    cout<<c<<endl;
}
