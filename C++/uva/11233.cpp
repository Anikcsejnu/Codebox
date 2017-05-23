#include<bits/stdc++.h>
using namespace std;
pair<string, string>p[100];
vector<string>v;
vector<string>ans;
int is_vowel(char c) {
    switch(c)
    {
        // check for capitalized forms as well.
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}
int main()
{
    int n, l, len, c = 0;
    string s;
    cin>>n>>l;
    for(int i = 0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }*/

    for(int i = 0;i<l;i++)
    {
        cin>>s;
        int flag = 0;
        for(int j = 0;j<n;j++)
        {
            if(s==p[j].first)
            {
                ans.push_back(p[j].second);
                flag  = 1;
            }
        }
        if(flag==0)
        {

            len = s.size();
            if((s[len -1]=='y') && (is_vowel(s[len-2])==0))
            {
               // c++;
                s[len - 1] = 'i';
                s = s + "e";
                s = s + "s";
            }
            else if(s[len-1]=='o' ||s[len-1]=='s'||(s[len-2]=='c' &&s[len-1]=='h') ||(s[len-2]=='s' &&s[len-1]=='h') || s[len-1]=='x')
            {
                s = s+"es";
            }
            else
            {
                s = s+ "s";
            }
            ans.push_back(s);
        }

    }

    for(int i = 0;i<l;i++)
    {
        cout<<ans[i]<<endl;
    }

    //cout<<c<<endl;

    return 0;


}
