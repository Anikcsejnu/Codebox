#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, c;
    int c;
    int n, k;
    char a;
    cin>>n;
    cin>>s;
    cin>>k;

    for(auto &c: s){
        if(isalpha(c)){
            a = isupper(c)?'A':'a';
            c= a + (c - a + k)%26;
        }
    }
    cout << s << endl;
    return 0;
}

