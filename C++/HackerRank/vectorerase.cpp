#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<long long int >v;
    long long int val;
    int n, x, a, b;
    cin>>n;
    for(int i = 0;i < n;i++) {
        cin>>val;
        v.push_back(val);
    }
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    long long int l = v.size();
    cout<<l<<endl;
    for(int i = 0;i<l;i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
