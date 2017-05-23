#include<bits/stdc++.h>
using namespace std;
vector<int>v;

bool wayToSort(int i, int j) { return i > j; }
int main()
{
    int n, n1, n2, val;
    double sn1 = 0, sn2 = 0;

    double ans = 0;

    cin>>n>>n1>>n2;

    for(int i = 0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(), v.end(), wayToSort);
    if(n1 <= n2)
    {
        for(int i = 0;i<n1;i++)
        {
            //cout<<v[i]<<endl;
            sn1 += v[i];
        }
        for(int i = n1;i<n1+n2;i++)
        {
            //cout<<v[i]<<endl;
            sn2 += v[i];
        }
        ans = (double)((double)(sn1/n1) + (double)(sn2/n2));
    }
    else
    {
        for(int i = 0;i<n2;i++)
        {
            //cout<<v[i]<<endl;
            sn1 += v[i];
        }
        for(int i = n2;i<n1+n2;i++)
        {
            //cout<<v[i]<<endl;
            sn2 += v[i];
        }
        ans = (double)((double)(sn1/n2) + (double)(sn2/n1));
    }

    //cout<<sn1<<" "<<sn2<<endl;

    printf("%0.8lf\n", ans);
}
