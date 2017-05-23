#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    int n, age, co = 0;

    cin>>n;

    while(n--)
    {
        cin>>s;

        if(isdigit(s[0]))
        {
            stringstream ss;
            ss<<s;
            ss>>age;

            if(age<18)
            {
                co++;
                //printf("working\n");
            }

        }
        else
        {
            if(s=="ABSINTH" || s=="BEER" || s=="BRANDY" || s=="CHAMPAGNE" || s=="GIN" || s=="RUM" || s=="SAKE" || s=="TEQUILA" || s=="VODKA" || s=="WHISKEY" || s=="WINE")
            {
                co++;
            }
        }


    }
    cout<<co<<endl;
}
