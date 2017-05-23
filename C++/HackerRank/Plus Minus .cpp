#include<bits/stdc++.h>
#define ll long long int
#define M 100000
using namespace std;

int main()
{
    int a,n;
    float c[3] = {0,0,0};
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a;
        if(a==0)
        {
            c[0]++;
        }
        else if(a>0)
        {
            c[1]++;
        }
        else
        {
            c[2]++;
        }

    }
    printf("%0.6f\n", c[1]/n);
    printf("%0.6f\n", c[2]/n);
    printf("%0.6f\n", c[0]/n);

    return 0;
}
