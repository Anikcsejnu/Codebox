#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int main()
{
    int n, value,c = 1, Max = 0;

    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>value;
        a.push_back(value);
    }
    sort(a.begin(), a.end());
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {

    for(int i = 0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        else
        {
            c = 1;
        }
        if(Max < c)
        {
            Max = c;
        }
    }
    cout<<n-Max<<endl;
    }
    a.clear();
}
