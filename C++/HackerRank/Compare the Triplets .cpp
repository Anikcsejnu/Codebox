#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], b[3], ca = 0, cb = 0;
    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];

    for(int i = 0;i<3;i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else if(a[i]>b[i])
        {
            ca++;
        }
        else
        {
            cb++;
        }
    }

    cout<<ca<<" "<<cb<<endl;
}
