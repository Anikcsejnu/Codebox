#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>v;
int main()
{
    int val,  m, n, totalmega = 0, c = 0;

    cin>>n>>m;

    for(int i = 0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0;i<n;i++)
    {
        totalmega += v[i];
        c++;
        //cout<<v[i]<<endl;
        if(totalmega >= m)
        {
            break;
        }

    }

    cout<<c<<endl;

    return 0;
}
