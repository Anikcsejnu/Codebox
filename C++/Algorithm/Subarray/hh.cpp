#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    int n, val;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>val;
        a.push_back(val);
    }
    sort(a.begin(), a.end());

    cout<<a[n-1]<<endl;
    a.clear();
    return 0;
}
