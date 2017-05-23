#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c =0;
    cin>>a>>b;

    for(int i = 1;i<(a+b);i++)
    {
        if(a+b>i && a+i>b && i+b>a)
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
