#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
int main()
{
    vector<ll>v1;
    vector<ll>v2;
    ll val, n;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>val;
        v1.push_back(val);
    }
    v1.push_back(1);
    for(int i = 0;i<n;i++)
    {
        int g = gcd(v1[i], v1[i+1]);
        v2.push_back(v1[i]);
        if(g > 1)
        {
            v2.push_back(1);
        }

    }
    int l  = v2.size();
    cout<<l - (v1.size() - 1)<<endl;

    for(int i = 0;i<l;i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    return 0;
}
