#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
inline int fun(ll n)
{
    ll i, res  =  n;
    for(i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n /= i;

            }
            res -= res/i;
        }
    }
    if(n>1) res -= res/n;

    return res;
}
int main()
{
    ll n, it , c;
    while(cin>>n){
    c = 0;
    if(n==0) return 0;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<fun(n)<<endl;
    }

    }

    return 0;
}
