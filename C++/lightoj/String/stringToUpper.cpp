#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;

    cin>>t;
    getchar();
    for(int i = 1;i<=t;i++)
    {
        getline(cin, s);
        transform(s.begin() , s.end(), s.begin(), :: toupper);

        printf("Case %d: ", i);
        cout<<s<<endl;
    }
    return 0;
}
