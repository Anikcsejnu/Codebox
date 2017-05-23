#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    string k, r;

    cin>>k>>r;
    cout<<k<<" "<<r<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        string a, b;
        cin>>a>>b;
        if(k==a)
        {
            k = b;
        }
        else
        {
            r = b;
        }
        cout<<k<<" "<<r<<endl;
    }


    return 0;
}
