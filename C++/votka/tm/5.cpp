#include <iostream>
#include <cmath>
using namespace std;

class polar
{
    double radius;
    double angle;
public:
    double getx()
    {
        return radius*cos(angle);
    }
    double gety()
    {
        return radius*sin(angle);
    }
    polar()
    {
        radius=0.0;angle=0.0;
    }

    polar(float r,float a)
    {
      radius=r;
      angle=a;
    }

    void display()
    {
        cout<<"("<<radius<<", "<<angle<<")";
    }

    polar operator + (polar o2)
    {
        polar ob;
        double x=getx()+o2.getx();
        double y=gety()+o2.gety();
        ob.radius=sqrt(x*x + y*y);
        ob.angle= acos(y/x);
        return ob;
    }
};

int main()
{

    polar o1(10,2),o2(10,5),o3;

     o3=o1+o2;

    cout<<"\no1 =";
    o1.display();
    cout<<"\no2 =";
    o2.display();

    cout<<"\no3 =";
    o3.display();

}
