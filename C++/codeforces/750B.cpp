#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
pair<int, string>p[100];
int main()
{
    int val = 0, n, f = 0;

    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>p[i].f>>p[i].s;
    }

    if(p[0].s!="South")
    {
        printf("NO\n");
    }
    else
    {
        for(int i = 0;i<n;i++)
        {
            if(p[i].s=="South")
            {
                val += p[i].f;
            }
            else if(p[i].s=="North")
            {
                val -= p[i].f;
            }
            if(val<0  || val > 20000)
            {
                f = 1;
                break;
            }
            if((val==0 && p[i+1].s!="South" && i<n-1) || val==20000 && p[i+1].s!="North" && i<n-1)
            {
                f = 1;
                break;
            }
        }
        if(val==0 && f==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
