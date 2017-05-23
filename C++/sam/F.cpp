#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int t;

    while(cin>>t)
    {
        if(t==0)
        {
            return 0;
        }
        while(t--)
        {
            int val;
            cin>>val;
            a.push_back(val);
        }
        sort(a.begin(),a.end());

        for(int i=0;i<a.size();i++)
        {
            if(i!=a.size()-1)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<a[i]<<endl;
            }

        }
        a.clear();
    }

    return 0;

}

