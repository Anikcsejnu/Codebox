#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    string str2;

    cin>>str1>>str2;
    int l = str1.size();
    for(int i = 0;i<l;i++)
    {
        if((str1[i]=='0' && str2[i]=='1') || (str1[i]=='1' && str2[i]=='0'))
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }

    printf("\n");

    return 0;
}
