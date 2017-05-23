#include<bits/stdc++.h>
using namespace std;
vector<int>v;


int main()
{
    int n, q, val, elem, kase = 0;

    while(cin>>n>>q)
    {
        if(n==0 && q==0)
        {
            return 0;
        }

        for(int i = 0;i<n;i++)
        {
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        std::cout<<"CASE# "<<++kase<<":\n";
        for(int i = 0;i<q;i++)
        {
            cin>>elem;
            int pos = std::find(v.begin(), v.end(), elem) - v.begin();

            if( pos < v.size() )
                std::cout << elem << " found at " << pos+1 << '\n';

            else
                std::cout << elem << " not found\n";
        }
        v.clear();

    }

    return 0;
}
