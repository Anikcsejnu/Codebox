#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, segment = 0, i, n;
    long long int ar[10] = {6,2,5,5,4,5,6,3,7,6};
    cin>>a>>b;

    for(i = a;i<=b;i++)
    {
        n = i;
        while(n>=0)
        {
            //cout<<ar[n%10];
            segment += ar[n%10];
            n = n/10;
            if(n == 0)
            {
                n = - 1;
            }
        }
    }
    cout<<segment<<endl;

    return 0;
}
