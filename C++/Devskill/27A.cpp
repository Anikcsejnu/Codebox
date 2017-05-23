#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, l, ans , ls, dif, i;
    char ch[100007];

    cin>>n;

    while(n--)
    {
        dif = 0;
        cin>>l>>ch;
        ls = strlen(ch);
        dif = l - ls;
        ans = 1;
        for(i = 0;i<dif;i++)
        {
            ans *= 26;
        }
        if(ans == 1)
        {
            cout<<l<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
