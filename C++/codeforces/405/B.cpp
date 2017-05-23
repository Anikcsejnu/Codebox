#include<bits/stdc++.h>
using namespace std;
int ar[150000];
int main()
{
    int m, n, a, b, flag = 0;
    cin>>m>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>a>>b;
        ar[a]++;
        ar[b]++;
    }
    for(int i = 1;i<=n;i++)
    {
        if(ar[i]!=0)
        {
            if(ar[a]!=ar[i+1])
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
