#include<bits/stdc++.h>
using namespace std;

void cmp(string x, string y)
{
    if(x.size() < y.size())
    {
        x = string(y.size() - x.size(), '0') + x;
    }
    else if(x.size() > y.size())
    {
        y = string(x.size() - y.size(), '0') + y;

    }
    if(x > y)
    {
        printf(">\n");
    }
    else if(x < y)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }
}
int main()
{
    string a, b;
    cin>>a>>b;
    cmp(a,b);

    return 0;
}
