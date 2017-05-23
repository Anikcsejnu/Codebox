#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, l;

    cin>>n;
    while(n--)
    {
        cin>>s;

        l = s.size();

        if(((s[0]=='1' && l==1) || (s[0]=='4' && l==1) ||(s[0]=='7' && s[1]=='8' && l==2)))
        {
            printf("+\n");
        }
        else if(s[l-2]=='3' && s[l-1]=='5')
        {
            printf("-\n");
        }
        else if((s[0]=='9' && s[l-1]=='4') ||(s[0]=='9' && s[l-2]!='3' && s[l-1]!='5'))
        {
            printf("*\n");
        }
        else
        {
            printf("?\n");
        }
    }


    return 0;
}
