#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, ta, b, tb, hh, mm, c = 0;

    cin>>a>>ta>>b>>tb;
    scanf("%d:%d", &hh, &mm);

    int th = hh*60 + mm;
    int i = 300;
    while(i<1440)
    {
        if(i+tb>th && i < th + ta)
        {
            c++;
        }
        i += b;
    }

    cout<<c<<endl;

    return 0;
}
