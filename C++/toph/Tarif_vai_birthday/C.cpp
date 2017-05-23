#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cu = 0, cl = 0;
    int l  = s.size();

    for(int i = 0;i<l;i++)
    {
       if(isalpha(s[i]))
       {
           if(s[i]>='A' && s[i]<='Z')
           {
               cu++;
           }
           else
           {
               cl++;
           }
       }


    }
    cout<<cu<<" "<<cl<<endl;
    return 0;
}


