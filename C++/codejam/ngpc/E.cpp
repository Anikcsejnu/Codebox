#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll a,b;

int main()
{
    ll i=1;

    while(scanf("%lld%lld", &a, &b) && b!=0 && a!=0)

    {printf("Case : ",i);

    if(a==1 && b!=1) printf("Odd\n");
    else if (b==1 && a!=1) printf("Odd\n");
    else printf("Even\n");
    i++;}

}
