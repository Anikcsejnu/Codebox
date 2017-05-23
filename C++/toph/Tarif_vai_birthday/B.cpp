#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c = 0;
    int l  = s.size();

    for(int i = 0;i<l;i++)
    {
        if(isalpha(s[i]))
        {
            switch(s[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    c++;
                    break;
                default:
                    continue;
            }
        }


    }
    cout<<c<<endl;
    return 0;
}

