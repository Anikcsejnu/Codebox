#include<bits/stdc++.h>
using namespace std;

int ar[123456];

int main()
{
    int n, a, b, t, c;
    cin>>t;
    while(t--)
    {
        c = 0;
        cin>>n;

        for(int i = 1;i<=n-1;i++)
        {
            cin>>a>>b;
            ar[a] = b;
        }
        for(int i = 1;i<=n;i++)
        {
            if(ar[i]==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
