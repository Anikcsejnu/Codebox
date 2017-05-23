#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[105], s;
    int clow = 0, cup = 0;
    cin>>ch;
    char c = getchar();
    int l = strlen(ch);

    for(int i = 0;i<l;i++)
    {
        if(islower(ch[i]))
        {
            clow++;
        }
    }
    cup = l - clow;
    if(clow >= cup)
    {
        for(int i = 0;i<l;i++)
        {
            s = tolower(ch[i]);
            cout<<s;
        }
    }
    else
    {
        for(int i = 0;i<l;i++)
        {
            s = toupper(ch[i]);
            cout<<s;
        }
    }
    printf("\n");

    return 0;

}
