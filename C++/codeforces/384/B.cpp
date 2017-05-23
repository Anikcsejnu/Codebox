#include<bits/stdc++.h>
using namespace std;
const char char_max = -1;



string s, s1, s2;
void gen(int n)
{   s1 = "1";
    for(int i = 1;i<n;i++)
    {
        stringstream ss;
        ss << i+1;
        s2 = ss.str();
        s = s1+s2+s1;
        s1 = s;
    }
}

int main()
{

    int n, k;
    cin>>n>>k;
    gen(n);
    cout<<s<<endl;
    cout<<s[k-1]<<endl;
}
