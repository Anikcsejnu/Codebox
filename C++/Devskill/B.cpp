#include<bits/stdc++.h>
using namespace std;
const int ind = 123457;

int cnt[ind];

int main()
{
    int n;
    cin>>n;
    int foo;
    for(int i = 0;i<n;i++)
    {
        cin>>foo;
        cnt[foo]++;
    }
    int ans = 1, crr = 0;
    for(int i = 2;i<ind;i++)
    {
        crr = 0;
        for(int j = i;j<ind;j+= i)
        {
            crr += cnt[j];
        }

        ans = max(ans, crr);
    }


    cout<<ans<<endl;


    return 0;



}
