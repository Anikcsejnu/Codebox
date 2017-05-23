#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator low;
    int n;
    cin >> n;

    int val, q, y;

    for(int i = 0;i < n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    cin>>q;

    for(int i = 0;i<q;i++)
    {
        cin>>y;
        low = lower_bound(v.begin(), v.end(), y);
        if(v[low  - v.begin()] == y){

            cout<<"Yes "<<(low- v.begin()) + 1<<endl;
        }
        else {

            cout<<"No "<<(low- v.begin()) + 1<<endl;
        }
    }


}
