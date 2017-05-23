#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    while(scanf("%d", &q) && q!=0)
    {

        int dx, dy, x, y;
        cin>>dx>>dy;
        for(int i = 0;i<q;i++)
        {
            cin>>x>>y;
            if(dx==x || dy==y)
            {
                printf("divisa\n");
            }
            else if(x > dx && y > dy)
            {
                printf("NE\n");
            }
            else if(x < dx && y > dy)
            {
                printf("NO\n");
            }
            else if(x > dx && y < dy)
            {
                printf("SE\n");
            }
            else
            {
                printf("SO\n");
            }
        }
    }

    return 0;

}

