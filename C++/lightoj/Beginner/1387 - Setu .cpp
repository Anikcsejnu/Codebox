#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll account, donate;
    string s;
    int tcase, n, k = 0;

    cin>>tcase;

    while(tcase--)
    {
        account = 0;
        cin>>n;
        printf("Case %d:\n", ++k);
        while(n--)
        {
            char ch = getchar();
            cin>>s;

            if(s=="donate")
            {
                cin>>donate;
                account += donate;
            }
            if(s=="report")
            {
                cout<<account<<endl;
            }
        }
    }

    return 0;
}
