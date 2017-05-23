#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    int n, a=0, g = 0, c = 0, t = 0, qus = 0, ma, p = 0, d;
    cin>>n;
    cin>>s;
    for(int i = 0;i<n;i++)
    {
         if(s[i]=='A')
         {
             a++;
         }
         else if(s[i]=='G')
         {
             g++;
         }
         else if(s[i]=='C')
        {
                c++;
        }
        else if(s[i]=='T')
        {
            t++;
        }
        else
        {
            qus++;
        }
    }
    ma = max(a, max(g, max(c, t)));

    if(n%4!=0)
    {
        printf("===\n");
    }
    else
    {
        d = n / 4;
        if(ma<d)
        {
            ma = d;
        }
        if(ma > d)
        {
            printf("===\n");
        }
        else
        {
            //cout<<ma<<endl;
            for(int i =0;i<n;i++)
            {
                if(s[i]=='?')
                {
                    if(a<ma)
                    {
                        s[i] = 'A';
                        a++;
                        p++;
                    }
                    else if(g<ma)
                    {
                        s[i] = 'G';
                        g++;
                        p++;
                    }
                    else if(c<ma)
                    {
                        s[i] = 'C';
                        c++;
                        p++;
                    }
                    else if(t<ma)
                    {
                        s[i] = 'T';
                        t++;
                        p++;
                    }
                }
            }
            if(p>qus)
            {
                printf("===\n");
            }
            else
            {
                cout<<s<<endl;
            }
        }


    }

    return 0;
}
