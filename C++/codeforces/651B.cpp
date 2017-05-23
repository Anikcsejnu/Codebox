#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int main()
{
    int n, value,c = 0;

    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>value;
        a.push_back(value);
    }
    sort(a.begin(), a.end());

    for(int i = 0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            for(int j = i+2;j<n;j++)
            {
                if(a[j]>a[i+1])
                {
                    swap(a[j], a[i+1]);
                }
            }
        }
    }
    for(int i = 0;i<n-1;i++)
    {
        cout<<a[i]<<endl;
        if(a[i]<a[i+1])
        {
           // cout<<a[i]<<" "<<a[i+1]<<endl;
            c++;
        }
    }
    cout<<c<<endl;
    a.clear();
}
