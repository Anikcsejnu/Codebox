#include<bits/stdc++.h>
using namespace std;
int a[1234567];
int main()
{
    int t;
    cin>>t;
    vector<string>s;
    for(int i = 0;i<t*3;i++)
    {
        scanf("%d,", &a[i]);
    }
    for(int i = 0;i<t*3;i += 3)
    {
        (a[i]||a[i+1]||a[i+2])!=0 &&(a[i]+a[i+1])>a[i+2] && (a[i+1]+a[i+2])>a[i] && (a[i+2]+a[i])>a[i+1]? s.push_back("YES") : s.push_back("NO");
    }
    for(int i = 0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;

}
