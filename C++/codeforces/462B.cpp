#include<bits/stdc++.h>
using namespace std;
long long int a[26];
char ch[100000];
int main()
{
    long long int n, k, sum = 0, ans = 0;

    cin>>n>>k;
    char e = getchar();
    cin>>ch;

    for(int i = 0;i<n;i++)
    {
        if(isalpha(ch[i]))
        {
            a[ch[i]-'A']++;
        }
    }
    sort(a, a+26);
    for(int i = 25;i>=0;i--)
    {
        if(a[i]!=0)
        {
            sum += a[i];
            if(sum<=k)
            {
               // cout<<sum<<endl;
                ans += a[i] * a[i];
            }
            else
            {
                sum -= a[i];
                break;
            }
        }
        //cout<<a[i]<<endl;
    }
    //cout<<ans<<endl;
    if(sum!=k)
    {
        ans += ((k-sum)*(k-sum));
        cout<<ans<<endl;
    }
    else
    {
          cout<<ans<<endl;
    }


    return 0;
}
