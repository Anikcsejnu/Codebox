#include<bits/stdc++.h>
using namespace std;
long long int arr[123456], cnt[100000];
int main()
{
    long long int n, c = 0, i, j, sum = 0;

    cin>>n;
    c = n;
    for(i = 0;i<n;i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    sort(arr,arr+n);

    for(i = 0;i<n;)
    {
        c  = c - i+1;
        sum += c ;
        cout<<c<<endl;
        i += cnt[arr[i]];
    }
    cout<<sum<<endl;
    return 0;
}
