#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c;
    int n, k;
    cin>>n;
    cin>>s;
    cin>>k;

    int i = 0;
    while(i<static_cast<int>(s.size()))
    {

        if(isalpha(s[i]))
        {
            if(islower(s[i]))
            {
                c = static_cast<int>(s[i]+k);
                //printf("%d\n", c);
                if(islower(c))
                {
                    printf("%c", c);
                }
                else
                {
                    c = c - 96;
                    c = c%26;
                    if(c==0)
                    {
                        printf("%c", c+122);
                    }
                    else
                    {
                        printf("%c", c+96);
                    }


                }
            }
            else
            {
                c = s[i]+k;
                if(isupper(c))
                {
                    printf("%c", c);
                }
                else
                {
                    c = c - 64;
                    c = c%26;
                    if(c==0)
                    {
                        printf("%c", c+90);
                    }
                    else
                    {
                        printf("%c", c+64);
                    }
                }
            }
        }
        else
        {
            cout<<s[i];
        }
        i++;
    }
    printf("\n");
    return 0;
}
