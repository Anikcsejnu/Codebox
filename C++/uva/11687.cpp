#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    int l;
    while(cin>>s)
    {
        if(s=="END")
        {
            return 0;
        }

        l = s.size();
        if(s=="1" && l==1)
        {
            printf("1\n");
        }
        else if(l==1 && s!="1")
        {
            printf("2\n");
        }
        else if(l>1 && l<10)
        {
            printf("3\n");
        }
        else
        {
            printf("4\n");
        }
    }

    return 0;
}
