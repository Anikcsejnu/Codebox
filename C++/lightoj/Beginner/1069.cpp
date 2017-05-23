#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    ll mypos, liftpos, dis, time;

    int t;

    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        time = 0;
        cin>>mypos>>liftpos;

        dis = abs(liftpos-mypos);

        time =(mypos*4) + (dis*4) + 19;


        printf("Case %d: %lld\n", i, time);


    }
    return 0;
}
