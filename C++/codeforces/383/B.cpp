#include<bits/stdc++.h>
#define mx 100007
using namespace std;

vector<int>a;

int main()
{
    int x, n, co = 0, v;
    cin>>n>>x;

    for(int i = 0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    for(int i = 0;i<n-1;i++)
    {
        for(int  j = i+1;(j<n&&(a[i]^a[j]>=x));j++)
        {
            //cout<<a[i]<<" "<<a[j]<<" "<<(a[i]^a[j]^x)<<endl;
            if((a[i]^a[j]^x)==0)
            {

                co++;
            }
        }

    }
    cout<<co<<endl;
}
