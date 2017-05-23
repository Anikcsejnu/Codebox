#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d[101];
    int dur;
    double dwnpayment, loan;
    int numd;

    while(true)
    {
        cin>>dur>>dwnpayment>>loan>>numd;

        if(dur<0) break;
        int m;
        double mal;
        while(numd--)
        {
           cin>>m>>mal;
           for(int i = m;i<101;i++)
           {
               d[i] = mal;
           }
        }
        int now = 0;
        double kisti = loan / dur;
        double curval = (loan + dwnpayment) * (1 - d[0]);
       // cout<<d[0]<<" "<<curval<<endl;
        double curloan = loan;

        while(curval < curloan)
        {
            now++;
            curloan -= kisti;
            curval = curval *(1-d[now]);
            //printf("hello");
        }
        cout<<now<<" month";
        if(now!=1)
        {
            cout<<"s";
        }
        cout<<endl;



    }
    return 0;
}
