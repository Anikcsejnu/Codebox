#include<bits/stdc++.h>
using namespace std;
int s[10000];
int main()
{
    char str[26];
    int i;
    while(cin>>str){
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V')
            s[i]=1;
            else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||
            str[i]=='X'||str[i]=='Z'
            )
                s[i]=2;
            else if(str[i]=='D'||str[i]=='T')
                s[i]=3;
            else if (str[i]=='M'||str[i]=='N')
                s[i]=4;
                 else if(str[i]=='M'||str[i]=='N')
                    s[i]=5;
                     else if(str[i]=='R')
            s[i] = 6;
            else {
                s[i]=10;
            }
    for(int i=0;i<len;i++)
    {
        if(s[i]!=10)
            cout<<s[i];
    }
    while(s[i]==s[i+1])
    {
        i++;
    }
printf("\n");
    }
    }return 0;
}
