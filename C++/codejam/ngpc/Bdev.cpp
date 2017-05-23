#include<bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
    long long int t, n, k = 0, x = 0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n<<" ";
        if(n==1)
        {
            cout<<"000"<<endl;
        }
        else if(n==2)
        {
            cout<<"010"<<endl;
        }
        else
        {
            cout<<"110"<<endl;
        }
    }

    return 0;
}

