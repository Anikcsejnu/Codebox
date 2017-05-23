#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll tcase, k = 0, n, num, sum, i;

    cin>>tcase;
    while(tcase--)
    {
        sum = 0;
        //cout<<endl;
        cin>>n;

        for(i = 0;i<n;i++)
        {
            cin>>num;
            if(num<0)
            {
                continue;
            }
            sum+= num;
        }

        cout<<"Case "<<++k<<": "<<sum<<endl;
    }

    return  0;
}
