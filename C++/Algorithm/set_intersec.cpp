#include<bits/stdc++.h>
#define ll long long int
#define PB push_back
using namespace std;

int main()
{
    vector<ll>a;
    vector<ll>b;
    vector<ll>v(2000000);
    vector<ll> :: iterator it;
    ll m, n, i, cd;
    cin>>m>>n;

    while(m!=0 && n!=0)
    {
        for(i = 0;i<m;i++) {cin>>cd; a.PB(cd);}
        for(i = 0;i<n;i++) {cin>>cd; b.PB(cd);}

        it = set_intersection(a.begin(), a.end(), b.begin(), b.end(),  v.begin());

        v.resize(it - v.begin());
        cout<<v.size()<<endl;

       // cout<<int(it - v.begin())<<endl;
        cin>>m>>n;
        a.clear();
        b.clear();
        v.clear();
    }


    return 0;
}
