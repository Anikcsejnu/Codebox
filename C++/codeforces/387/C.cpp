#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, t, k, d, userver, s = 0, runtime, runserver ,time, ini = 1;

    cin>>n>>q;

    while(q--)
    {
        cin>>t>>k>>d;

        if(ini==1)
        {
            if(k>n)
            {
                printf("-1\n");
            }
            else
            {
                s = (k*(k+1))/2;
                time = t;
                runserver = k;
                runtime = d;
                userver = n - runserver;
            }
            cout<<s<<endl;
            ini++;
        }
        else
        {
            if(runtime+time -1 <= t)
            {
                if(userver>=k)
                {
                    time = t;
                    runserver = k;
                    runtime = d;
                    userver = n - runserver;
                    cout<<s+k<<endl;
                }
                else
                {
                    printf("-1\n");
                }
            }
            else
            {
                printf("-1\n");
            }
        }



    }
}
