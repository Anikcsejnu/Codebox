#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int main()
{
    int n, m , k, val, pos, time = 0, ind;

    cin>>n>>m>>k;

    for(int i = 0;i<k;i++)
    {
        cin>>val;
        a.push_back(val);
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>pos;
            ind = find(a.begin(), a.end(), pos) - a.begin();
            time += ind + 1;
            a.erase(a.begin()+ind);
            a.insert(a.begin() , pos);
           // cout<<time<<endl;
//            for(int i = 0;i<a.size();i++)
//            {
//                cout<<a[i]<<" ";
//            }
        }
    }
//    for(int i = 0;i<a.size();i++)
//    {
//        cout<<a[i]<<" ";
//    }
    cout<<time<<endl;

    return 0;
}
