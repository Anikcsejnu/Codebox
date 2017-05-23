#include<bits/stdc++.h>
using namespace std;
bool same(char a, char b)
{
    if(a==b)
    {
        return true;
    }
    return false;
}
int main()
{
    int n, a, b, cost = 0;

    cin>>n>>a>>b;

    string s;
    cin>>s;

    if(same(s[a-1], s[b-1]))
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}
