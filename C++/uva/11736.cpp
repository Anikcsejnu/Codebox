
#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int b, v, q;
    vector<string>v1;
    vector<string>v2;
    string s, s1 = "";
    while(scanf("%d%d", &b, &v)!=EOF){

    for(int i = 0;i<v;i++)
    {
        cin>>s;
        v1.push_back(s);
        cin>>a[i];
    }
    for(int i = 0;i<v;i++)
    {
        s1 = "";
        for(int j = 0;j<a[i];j++)
        {
            cin>>s;
            s1 += s;
            //cout<<s1<<endl;
            if(j==a[i]-1) v2.push_back(s1);
        }
        s.clear();
    }
    cin>>q;
    string qs;
    uint64_t number;

    for(int i = 0;i<q;i++)
    {
        cin>>qs;
        int f = 0;
        for(int j = 0;j<v;j++)
        {
            if(qs==v1[j])
            {
                number = strtoull (v2[j].c_str (),NULL,2);
                cout<<v1[j]<<"="<<number<<endl;
                f = 1;
                break;
            }
        }
        if(f==0)
        {
            cout<<qs<<"="<<endl;
        }
        v1.clear();
        v2.clear();
        s.clear();
        s1.clear();
    }
    }
    return 0;
}
