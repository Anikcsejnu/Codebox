#include<bits/stdc++.h>
using namespace std;

int a[123456];
int main()
{
    int n, m, k, lr = 0, ll = 0, cr = 0, cl = 0;

    cin>>n>>m>>k;

    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i = m;i<n;i++ )
    {
        cr++;
        if(a[i]<=k && a[i] > 0)
        {
            lr = cr;
            break;
        }
    }
    for(int i = m - 2;i>=0;i-- )
    {
        cl++;
        if(a[i]<=k && a[i] > 0)
        {
            ll = cl;
            break;
        }
    }

    if(lr==0)
    {
        cout<<ll*10<<endl;
    }
    else if(ll==0)
    {
        cout<<lr*10<<endl;
    }
    else
    {
        cout<<min(ll, lr)*10<<endl;
    }

    return 0;
}
