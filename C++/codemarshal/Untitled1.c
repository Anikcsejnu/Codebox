#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e, o;
    cin>>e>>o;
    if((o-e==1) || (o==e &&e!=0 &&o!=0) || e-o==1 )printf("YES\n");
    else if(e==0 && o==0) printf("NO\n");
    else printf("NO\n");

}
