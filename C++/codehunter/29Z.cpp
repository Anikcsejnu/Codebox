#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int>a;
vector<int>b;
vector<int>ans;
vector<int>::iterator low;
int main()
{
    int m, n, val, c = 0;

    cin>>n>>m;

    for(int i = 0;i<n;i++)
    {
        cin>>val;
        a.pb(val);
    }
    for(int i = 0;i<m;i++)
    {
        cin>>val;
        b.pb(val);
    }
    sort(a.begin(), a.end());

    for(int i = 0;i<m;i++)
    {
        low = upper_bound(a.begin(), a.end(), b[i]);
        cout<<(low- a.begin())<<" ";
    }


    printf("\n");

    return 0;
}
