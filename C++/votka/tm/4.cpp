#include<iostream>
using namespace std;

void divide(int x, int y, int z)
{
    if((x-y)!=0)
    {
        int R = z/(x-y);
        cout<<"Result = "<<R<<endl;
    }
    else
    {
        throw(x-y);
    }

}
int main()
{
    try
    {
        int a, b, c;
        cout<<"Enter three number = ";
        cin>>a>>b>>c;
        divide(a,b,c);
    }
    catch(int e)
    {
        cout<<"\nCaught the exception"<<endl;
        cout<<"division by zero is attempted."<<endl;
    }
    return 0;
}
