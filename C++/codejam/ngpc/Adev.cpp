#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int r,c, k = 0;
    long long int t, cost ;
    cin>>t;

    while(t--)
    {
        cost  = 0;
        cin>>r>>c;

        while(r>0 && c>0)
        {
            cost += r*c;
            r--;
            c--;
        }
        cout<<"Case "<<++k<<": "<<cost*15<<endl;
    }

    return 0;
}
