#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s[101];
    cin>>n;
    for(int i = 0;i<=n;i++)
    {
        cin>>s[i];
    }
    if(n%2==0)
    {
        printf("home\n");
    }
    else
    {
        printf("contest\n");
    }
    return 0;
}
