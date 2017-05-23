#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n, val, k;
    cout<<"Enter the size = ";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    cout<<"Enter index number to interchange = ";
    cin>>k;
    cout<<"Vector before swapping : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    swap(v[k-1], v[k]);
    cout<<"Vector after swapping : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}
