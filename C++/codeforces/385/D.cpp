#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, b, check, ca = 0, cb = 0, l;

    cin>>n>>k>>a>>b;
    char ch[n];
    ///check = min(a,b);
    if(a == 0 && b!=0)
    {
        for(int i = 0;i<n;i++)
        {
            ch[i] = 'B';
            cb++;
        }
        if(cb>k)
        {
            printf("NO");
        }
        else
        {
            for(int i = 0;i<n;i++)
            {
                printf("%c", ch[i]);
            }
        }
        cout<<endl;
    }

    else if(a!=0 && b==0)
    {
        for(int i = 0;i<n;i++)
        {
            ch[i] = 'G';
            ca++;
        }
        if(ca>k)
        {
            printf("NO");
        }
        else
        {
            for(int i = 0;i<n;i++)
            {
                printf("%c", ch[i]);
            }
        }
        cout<<endl;
    }

    else
    {

    for(int i = 0;i<n;i++)
    {
        if(a>=b)
        {
            ch[i] = 'G';
        }
        else
        {
            ch[i] = 'B';
        }
    }
    l = min(k, min(a, b));
    //cout<<l<<endl;
    for(int i = l;i<n;i+=l+1)
    {
        if(a>=b)
        {
            ch[i] = 'B';
            cb++;
        }
        else
        {
            ch[i] = 'G';
            ca++;
        }
    }
    //cout<<ca<<cb;
    if(ca>a || cb>b)
    {
        printf("NO");
    }
    else
    {
        for(int i = 0;i<n;i++)
        {
            printf("%c", ch[i]);
        }
    }
    cout<<endl;
    }

    return 0;
}
