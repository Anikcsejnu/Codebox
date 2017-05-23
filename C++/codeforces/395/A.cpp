#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a%b==0) return b;

    return gcd(b, a%b);
}
int main()
{
    int n, m, z, lcm;

    cin>>n>>m>>z;
    lcm = (n*m)/gcd(n,m);
    int ans = z/lcm;

    cout<<ans<<endl;

}
