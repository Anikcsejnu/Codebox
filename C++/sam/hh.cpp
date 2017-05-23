#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define INF 10000000007
using namespace std;

int main()
{
    ll val, n, dis, mi = INF, c = 1;
    vector<ll>v;
    cin>>n;

    while(n--)
    {
        cin>>val;
        v.pb(val);
    }
    int l = v.size();
    sort(v.begin(), v.end());
    for(int i = 0;i<l-1;i++)
    {
        dis = abs(v[i]-v[i+1]);
        if(dis < mi)
        {
            mi = dis;
            c = 1;
        }
        else if(mi==dis)
        {
            c++;
        }

    }
    cout<<mi<<" "<<c<<endl;


}
