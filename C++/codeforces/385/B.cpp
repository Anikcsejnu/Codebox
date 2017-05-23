#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0, r = 0, l = 0, lk, rk;
    string s, a="";

    cin>>n;
    cin>>s;
    a = s;
    if(n<=2)
    {
        cout<<s<<endl;
        return 0;
    }

    if(n>2 && (n%2!=0))
    {
        int i = n/2;
        lk = i;
        rk = i;
        for(int j = 0; j<n; j++)
        {

            if(r==0 && l==0)
            {
                a[i] = s[j];
                r = 1;
                l = 0;
            }
            else if(l==0 &&  r==1)
            {

                lk = lk - 1;
                a[lk] = s[j];
                r = 0;
                l = 1;

            }
            else
            {

                rk = rk + 1;
                a[rk] = s[j];
                r = 1;
                l = 0;
            }

        }
        cout<<a<<endl;
    }
    else
    {
        int i = n/2 - 1;
        lk = i;
        rk = i;
       // cout<<" i = "<<i<<endl;
        for(int j = 0; j<n-1; j++)
        {

            if(r==0 && l==0)
            {
                a[i] = s[j];
                r = 0;
                l = 1;
            }
            else if(l==0 &&  r==1)
            {

                lk = lk - 1;
                a[lk] = s[j];
                r = 0;
                l = 1;

            }
            else
            {

                rk = rk + 1;
                a[rk] = s[j];
                r = 1;
                l = 0;
            }

        }
        cout<<a<<endl;
    }

    return 0;
}
