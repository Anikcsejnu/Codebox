#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int d, ans;


    while(cin>>c>>d)
    {
        ans = 0;
        if(c=='a' || c=='h' || d==1 || d==8)
        {
            if((c=='a' && d==1) ||(c=='h' && d==1)||(c=='a' && d==8)||(c=='h' && d==8))
            {
                ans = 3;
            }
            else
            {
                ans = 5;
            }

        }
        else
        {
            ans = 8;
        }

        printf("%d\n", ans);
    }

    return 0;

}
