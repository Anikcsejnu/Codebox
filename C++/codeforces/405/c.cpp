#include<bits/stdc++.h>
using namespace std;
int a[51];
int main()
{
    int n, k;
    cin>>n>>k;
    string s;
    int d = n-k+1;
    for(int i = 0;i<d;i++)
    {
        cin>>s;
        j = i;
        if(s=="NO")
        {
            for(;j<i+k;j++)
            {
                a[j] = 0;
            }
        }
        else
        {
            for(;j<i+k;j++)
            {
                a[j]++;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%c ", a[i]+65);
        }
        else
        {
            printf("%c ", a[i]+65);
        }
    }
}
