#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, g, p,d,r, rem ;
    string s[101], gi, re;

    map<string, int>mp;

    int k = 1;
    while(cin>>t)
    {
        for(int i = 0;i<t;i++)
        {
            cin>>s[i];
            mp[s[i]] = 0;
        }

        for(int i = 0;i<t;i++)
        {
            cin>>gi>>g>>p;
            //cout<<mp[gi]<<endl;
            r = 0;
            d = 0;
            rem = 0;
            if(p!=0)
            {
                d = g/p;
                rem = g - (d*p);
            }
            //mp[gi] += rem;
            mp[gi] -= (d*p);
            //cout<<r<<endl;
            for(int j = 0;j<p;j++)
            {
                cin>>re;
                mp[re] += d;
                //cout<<mp[re]<<endl;
            }

        }
        if(k!=1) cout<<endl;
        for(int i = 0;i<t;i++)
        {
            cout<<s[i]<<" "<<mp[s[i]]<<endl;
        }
        k++;
        mp.clear();

    }
    return 0;
}
