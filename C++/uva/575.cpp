#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s, *temp;
    ll a, num;
    ll p;
    while(cin>>s)
    {
        num = 0;
        int l = s.size();
        if(l<=1 && s[0]=='0')
        {
            return 0;
        }
        p = 1;
        for(ll i = l-1;i>=0;i--)
        {
            a = s[i] - '\0' - 48; //making string into int type value
            //cout<<a<<endl;
            num += a*(pow(2,p) - 1);
           // cout<<num<<endl;
            p++;
        }
        cout<<num<<endl;
    }



    return 0;
}
