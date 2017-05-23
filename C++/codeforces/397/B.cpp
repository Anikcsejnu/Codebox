#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int tot=0;
    for(int i = 0;i<s.size();i++)
    {
        int vl=(s[i]-'a');
        if(vl>tot)
        {
            printf("NO\n"); exit(0);
        }
        if(vl==tot) tot++;
    }
    printf("YES\n");


    return 0;
}
