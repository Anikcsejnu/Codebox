#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int>mp;
    map<string, int>::iterator it;
    int n;
    string s1, s2;
    cin>>n;

    while(n--)
    {
        cin>>s1;
        getline(cin, s2);
        mp[s1]++;
        s1.clear();
        s2.clear();
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    mp.clear();
    getchar();
}
