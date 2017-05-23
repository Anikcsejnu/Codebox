#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f = 0;
    string p;

    cin>>p;

    int l = p.size();

    for(int i = 0;i<l;i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
