#include<bits/stdc++.h>
#define ll long long int
#define maxn 123456
using namespace std;

ll a[maxn];
bool Triangle(ll a, ll b, ll c)
{
    if(((b+c)>a)&&((a+b)>c)&&((a+c)>b))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ll n;
    int flag = 0;
    cin>>n;

    for(ll  i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(ll i = 0;i<n-2;i++)
    {
        for(ll j = i+1;j<n-1;j++)
        {
            if(Triangle(a[i], a[j], a[j+1]))
            {
                flag = 1;
                break;
            }
        }

    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
