#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, dif = 0, c = 0, val;
    cin>>n>>k;

    for(int i = 0;i<n;i++)
    {
        cin>>val;
        dif = val / k;
        c+= dif;
        if(val%k!=0)
        {
            c++;
        }
    }
    if(c%2==0)
    {
        cout<<c/2<<endl;
    }
    else
    {
        cout<<(c/2)+1<<endl;
    }
    return 0;
}
