#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define pc(k, a) printf("Case %d: %d\n", ++k, a)
using namespace std;

set<string>st;

int main()
{
	string s;
	cin>>s;
	int n = s.size();
	for(int i = 0;i<n;i++)
    {
        string ss = "";
        ss += s[n-1];
        for(int j = 0;j<n-1;j++) ss+=s[j];
       // cout<<ss<<endl;
        st.insert(ss);
        s = ss;
    }

    cout<<st.size()<<endl;

    return 0;
}
