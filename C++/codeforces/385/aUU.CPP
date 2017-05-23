#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, suma = 0, sumb = 0, sumc = 0;
    cin>>a>>b>>c;
    if(a<1 || b<2 || c<4)
    {
        printf("0\n");
        return 0;
    }
    while(suma<=a-1 && sumb<=b-2 && sumc<=c-4)
    {
        suma = suma+ 1;
        //cout<<suma<<endl;
        sumb = sumb+ 2;
        //cout<<sumb<<endl;
        sumc = sumc+ 4;
        //cout<<sumc<<endl;
    }
    cout<<suma+sumb+sumc<<endl;

    return 0;
}
