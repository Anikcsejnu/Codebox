#include<iostream>
#include<string>

using namespace std;
class time
{
  int hours,minutes,seconds;
  public:
  time()
  {
    hours=minutes=seconds=0;
  }
  time(int h,int m,int s)
  {
    hours=h;
    minutes=m;
    seconds=s;
  }
  void display_24()
  {
    if(hours<10)
    {
        cout<<'0';
    }
    cout<<hours<<":";
    if(minutes<10)
    {
        cout<<'0';
    }
    cout<<minutes<<":";
    if(seconds<10)
    {
        cout<<'0';
    }
    cout<<seconds;
  }
  void display_12()
  {
    char *am_pm;
    int hrs24=hours;
    int pm=hours<12 ? 0:1;
    int mi=seconds<30 ? minutes:minutes+1;
    if(mi==60)
    {
        mi=0;
        ++hrs24;
        if(hrs24==12 || hrs24==24)
        pm=(pm==1)? 0:1;
    }
    int hrs12=(hrs24<13) ? hrs24 : hrs24-12;
    if(hrs12==0)
    {
        hrs12=12;
        pm=0;
    }
    if(pm==1)
    {
      am_pm=" pm";
    }
    else
    {
      am_pm=" am";
    }

    hours=hrs12;
    minutes=mi;
    cout<<hours<<":";
    if(minutes<10)
    {
        cout<<'0';
    }

    cout<<minutes<<" ";
    cout<<am_pm;
  }
  void add_time(time x, time y)
  {
      time z;
      z.hours = x.hours + y.hours;
      z.minutes = x.minutes+ y.minutes;
      z.seconds = x.seconds + y.seconds;
      cout<<"In 24 format :"<<endl;;
      z.display_24();
       cout<<"\nIn 12 format :"<<endl;
      z.display_12();
  }

};
int main()
{

    time ob1(6, 12 , 20);
    time ob2(13,48 , 40);
    cout<<"Given Time 1 :"<<endl;
    cout<<"In 24 format :"<<endl;
    ob1.display_24();
    cout<<endl;
    cout<<"In 12 format :"<<endl;
    ob1.display_12();
    cout<<endl;
    cout<<"Given Time 2 :"<<endl;
    cout<<"In 24 format :"<<endl;
    ob2.display_24();
    cout<<endl;
    cout<<"In 12 format :"<<endl;
    ob2.display_12();
    cout<<"\nAddtion of these time : "<<endl;
    time ob3;
    ob3.add_time(ob1, ob2);
//    ob.display_24();
//    ob.display_12();


  return 0;
}
