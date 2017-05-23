#include<bits/stdc++.h>
#define maxn 100010
#define ll long long int
using namespace std;

ll sum[maxn];
int num[maxn], l[maxn], r[maxn], n;
void inti()
{
    sum[0] = 0;
    memset(num, -1, sizeof(num));
    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &num[i]);
        sum[i] = sum[i-1] + num[i];
        l[i] = i;
        r[i] = i;
    }
    for(int i = 1;i<=n;i++)
    {
        while(num[l[i] - 1] >=num[i])
            l[i] = l[l[i] - 1];
    }
    for(int i = n;i>=1;i--)
    {
        while(num[r[i] + 1] >=num[i])
            r[i] = r[r[i] + 1];
    }

}
void solve()
{
    ll Max = 0;
    int la = 1, ra = 1;
    ll s;
    for(int i = 1;i<=n;i++)
    {
        s = num[i] * (sum[r[i]] - sum[l[i]-1]);
        if(s>Max || (s == Max && ra - la > r[i] - l[i]))
        {
            Max = s;
            la = l[i];
            ra = r[i];
        }
    }
    printf("%lld\n%d %d\n", Max, la, ra);
}
int main()
{
    int k = 0;
    while(scanf("%d", &n)!=EOF){
    if(k)
    {
        printf("\n");
    }
    k++;
    inti();
    solve();

    }
}
