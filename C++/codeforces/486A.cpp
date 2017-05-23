#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, sumE = 0, sumO = 0, N, ans = 0;

    cin>>n;

    N = pow(-1, n) * n;
    if(N>0)
    {
        ll ne = ((2+N)/2) - 1;
        sumE =  ne*(ne + 1);
        ll no = N/2;
        sumO = no*no;
        ans = sumE - sumO;
    }
    else
    {
        N = -1*N;
        ll no = (1+N)/2;
        sumO =  no*no;
       // cout<<sumO<<endl;
        ll ne = ((2+(N-1)) / 2)-1;
        sumE = ne*(ne+1);
       // cout<<sumE<<endl;
        ans = sumE - sumO;
    }
    cout<<ans<<endl;
}

