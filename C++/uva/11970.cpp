#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, x, s;

    int t;
    cin>>t;
    for(int k = 1;k<=t;k++)
    {
        cin>>n;
        s = sqrt(n);
        printf("Case %d:", k);
        for(i = s;i>0;i--)
        {
            x = n - (i*i);
            if(x%i==0 && x>0)
            {
                cout<<" "<<x;
            }
        }
        cout<<endl;
    }
}
