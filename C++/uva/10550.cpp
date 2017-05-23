#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, ans = 0;

    while(scanf("%d%d%d%d", &a, &b, &c, &d)==4)
    {
        if(!a && !b && !c && !d) break;

        ans = 1080;

        if(b>a) ans += (40 + a - b) *9;
        else ans += (a-b)*9;\
        if(b>c)  ans+=(40+c-b)*9;
        else ans+=(c-b)*9;
        if(c<d) ans+=(40+c-d)*9;
        else ans+=(c-d)*9;
        cout<<ans<<"\n";
    }
    return 0;
}
