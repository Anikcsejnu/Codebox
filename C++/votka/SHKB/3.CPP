#include<bits/stdc++.h>
using namespace std;

class vectorSimulation
{
    int val;
    vector<int>v;

public:
    void set_value(int size)
    {
        for(int i = 0;i<size;i++)
        {
           int val;
            cin>>val;
            v.push_back(val);
        }

    }
    void Reverse()
    {
        for(int i = v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<"\t";
        }
    }
};
int main()
{
    vectorSimulation ob;
    int sz;
    cout<<"Enter the size of vector : ";
    cin>>sz;
    cout<<"Enter "<<sz<<" values in the vector:\n";
    ob.set_value(sz);
    cout<<"Vector in reverse order : \n";
    ob.Reverse();

    return 0;
}

