#include<iostream>
#include<cstdio>

using namespace std;

class Electricity
{
public:
    double unit, cost = 0;
    void Bill()
    {
        if(unit<=100)
            cost=unit*5;
        else if(unit<=300)
            cost=unit*5;
        else
            cost=unit*6;
    }
    double get()
    {
        return cost;
    }
};
class More_Electricity : public Electricity
{
public:

     double surcharge = 0;

    void Bill()
    {
        if(cost>250)
        {
            surcharge = cost*0.15;
        }
    }
    double get()
    {
        return cost;
    }
     double get_total()
    {
        return (cost + surcharge);
    }
};
int main()
{
    Electricity o;
    o.Bill();
    More_Electricity ob;
    ob.Bill();
    cout<<ob.get()<<endl;
    cout<<"Total bills = "<<ob.get_total()<<endl;

    return 0;
}
