#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "";
    int q;
    int m , n, kase = 0;

    while(cin>>s){

    if(s[0]=='\n' || s[0]==EOF)
    {
        return 0;
    }
    cin>>q;
    int  l = s.size();
    printf("Case %d:\n", ++kase);
    for(int k = 1;k<=q;k++)
    {
        cin>>m>>n;
        int f = 1;
        int m1 = min(m,n);
        int n1 = max(m,n);


       // cout<<m1<<n1<<endl;
        for(int i = m1;i<n1;i++)
        {
            if(s[m1]==s[i+1])
            {
               // cout<<s[i];
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }
        }

        if(f==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    }
    return 0;

}
