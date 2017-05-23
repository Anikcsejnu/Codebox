#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;


    scanf("%d", &t);

    while(t--)
    {
        string s;
        cin>>s;
        int l = s.size();
        bool got = true;
        for(i = 1;i<=l;i++)
        {
            //cout<<s[i];
            if(l%i!=0) continue;

            for(int j = i;j<l;j++)
            {
                if(s[j]!=s[j%i])
                {
                    got = false;
                    break;
                }
            }
            if(got) break;
            got = true;
        }
        printf("%d\n", i);
        if(t) printf("\n");

    }
    return 0;
}
