#include<bits/stdc++.h>
#define maxn 10001
using namespace std;

int main()
{
    string s1, s2;

    long long int c = 0;
    cin>>s1;
    cin>>s2;

    if(s1==s2)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", max(s1.size(), s2.size()));
    }


    return 0;




  return 0;
}
