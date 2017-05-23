#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int a, b, t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"="<<endl;
        }
        else if(a>b)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }
    return 0;
}
