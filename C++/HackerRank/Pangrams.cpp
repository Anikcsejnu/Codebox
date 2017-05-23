#include<bits/stdc++.h>
using namespace std;

int cnt[26];
int main()
{
    string str;
    char c;
    int flag = 0;
    getline(cin, str);
    int i = 0, k = 0;
    while(i<static_cast<int>(str.size()))
    {

        if(isalpha(str[i]))
        {
            c = tolower(str[i]);
            cnt[c-'a']++;
        }
        i++;
    }
    for(i = 0;i<26;i++)
    {
        //cout<<cnt[i]<<endl;
        if(cnt[i]==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("pangram\n");
    }
    else
    {
        printf("not pangram\n");
    }
    return 0;
}
