#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int t, n, ind, pos, it;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>n;
        pos = 0;
        ind = 1;
        for(int i = 1;i<=n;i++)
        {
            cin>>s;
            if(s=="LEFT")
            {
                pos += -1;
                a[ind++] = -1;
            }
            else if(s=="RIGHT")
            {
                pos += 1;
                a[ind++] = 1;
            }
            else
            {
                cin>>s>>it;
                pos += a[it];
                a[ind++] = a[it];
            }
        }
        cout<<pos<<endl;
        s.clear();a
    }
    return 0;
}
