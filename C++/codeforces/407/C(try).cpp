#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
    int n, f = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
     sort(a, a+n);
    int  mi  = 0;
    int ma = n-1;
    if(a[mi]==0)
    {
        mi = mi+1;
    }
    if(a[ma] == 0)
    {
        f = 0;
        //printf("hh");
    }
    else
    {
        f = (abs(a[mi]-a[ma]));
    }


    cout<<f<<endl;

    return 0;
}
