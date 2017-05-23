#include<bits/stdc++.h>
using namespace std;
long long int a[2000009];
long long int bone[2000009];
int main()
{
    long long int n, m, k, i, u, v, val, ans  = 0, flag = 0, t, u1 = 0, v1 = 0;

    cin>>n>>m>>k;

    for(i =  0;i<m;i++)
    {
        cin>>val;
        a[val] = 1;
    }
    bone[1] =  1;
    for(i = 0;i<k;i++)
    {
        cin>>u>>v;

        if(a[u]==0)
        {
            if(v==bone[u])
            {
                swap(u, v);
            }
            else
            {

            }
            if(u==bone[u])
            {
                ans =
            }
        }


    }

    if(ans==0)
    {
        for(int  i = 1;i<=n;i++)
        {
            if(bone[i]==1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<ans<<endl;
    }

    return 0;
}
