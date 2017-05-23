#include<bits/stdc++.h>
using namespace std;

int main()
{
    int account[100], Bank,  Debenture, d, c, v;

    while(scanf("%d%d", &Bank, &Debenture))
    {
        if(!Bank && !Debenture) break;

        for(int i = 1;i<=Bank;i++)
        {
            cin>>account[i];
        }
        for(int i = 1;i<=Debenture;i++)
        {
            cin>>d>>c>>v;
            account[d] -= v;
            account[c] += v;
        }
        bool check = true;
        for(int i = 1;i<=Bank;i++)
        {
            if(account[i]<0)
            {
                check = false;
                break;
            }
        }

        if(check)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
