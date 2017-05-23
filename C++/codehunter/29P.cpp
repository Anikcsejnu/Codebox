#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh, mm, a, ahh, amm, z  = 0;

    scanf("%d:%d%d", &hh, &mm, &a);
        ahh = a/60;
        amm = a%60;
        ahh += hh;
        amm += mm;

        if(amm > 59)
        {
            ahh += amm/60;
            amm = amm %60;
        }

        if(ahh > 23)
        {
            ahh = ahh % 24;
        }

        if(ahh < 10 ) cout<<z;
        cout<<ahh<<":";
        if(amm < 10) cout<<z;
        cout<<amm<<endl;

    return 0;
}
