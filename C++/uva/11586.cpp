#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cm, cf;
    string s;

    cin>>t;
    char ch  = getchar();
    while(t--)
    {
        cm = cf = 0;
        getline(cin, s);
        int l = s.size();

        for(int i = 0;i<l;i++)
        {
            if(s[i]=='M')
            {
                cm++;
            }
            else if(s[i]=='F')
            {
                cf++;
            }
            else
            {
                continue;
            }
        }
        if(cm==cf && l>2)
        {
            printf("LOOP\n");
        }
        else
        {
            printf("NO LOOP\n");
        }
        s.clear();
    }

    return 0;
}
