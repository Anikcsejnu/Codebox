#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int num, tcase, k = 0, r, c;

    cin>>tcase;

    while(tcase--)
    {
        c = 0;
        cin>>num;

        while(num>0)
        {
            r = num % 2;
            if(r==1)
            {
                c++;
            }
            num /= 2;
            //cout<<r;
        }
       // cout<<endl<<c<<endl;

       if(c&1)
       {
           printf("Case %d: odd\n", ++k);
       }
       else
       {
           printf("Case %d: even\n", ++k);
       }
    }

    return 0;
}
