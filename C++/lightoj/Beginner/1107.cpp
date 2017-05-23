#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main()
{
    int x, y, x1, y1, x2, y2, m;

    int t;
    cin>>t;

    for(int i = 1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2;

        cin>>m;
        printf("Case %d:\n", i);
        for(int j = 0;j<m;j++)
        {
            cin>>x>>y;

            if((x>=x1 && x2>=x) && (y>=y1 && y2>=y))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}
