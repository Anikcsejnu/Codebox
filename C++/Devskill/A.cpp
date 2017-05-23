#include<bits/stdc++.h>
#define INF ((1 << (8*sizeof (int) - 6)) - 4)
typedef long long int ll;
using namespace std;

int c[1001], m[1001];
int main()
{
    int mina, minb;
    int t, n, kase = 0;
    cin>>t;
    while(t--)
    {
        mina = INF, minb = INF;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>c[i]>>m[i];
            if(mina>c[i])
            {
                mina = c[i];
                minb = m[i];
                 //printf("%d = %d %d\n", i, mina, minb);
            }
            else if(mina==c[i])
            {
                if(minb > m[i])
                {
                    mina = c[i];
                    minb = m[i];
                }
            }
           // printf("%d %d\n", mina, minb);
        }

        printf("Case %d: %d %d\n",  ++kase, mina, minb);

    }

    return 0;

}
