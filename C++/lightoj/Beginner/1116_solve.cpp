#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int num, odd, even, i;

    int t;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>num;

        if(num&1)
        {
            printf("Case %lld: Impossible\n", i);
            continue;
        }


        odd = num/2;
        even = 2;

        while(odd%2==0)
        {
            odd = odd / 2;
            even = even * 2;
        }


        cout<<"Case "<<i<<": "<<odd<<" "<<even<<endl;
    }

    return 0;
}
