
#include <bits/stdc++.h>
using namespace std;


int main()
{
    set<string>s;
    string str;
    int m, n;
    cin>>m>>n;
    for(int i = 0;i<m+n;i++)
    {
        cin>>str;
        s.insert(str);
    }

    int l = s.size();

    if(m > n)
    {
        printf("YES\n");
    }
    else if(m==n)
    {
        if(l%2==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
}
