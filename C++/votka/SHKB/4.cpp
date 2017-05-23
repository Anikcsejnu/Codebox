#include<bits/stdc++.h>
using namespace std;

class Teacher
{
    int id;
public:
    string name;
    string department;
    string designation;
    Teacher(){}
    Teacher(int i, string n, string dpt, string ds)
    {
        id = i;
        name = n;
        department = dpt;
        designation = ds;
    }
    void display()
    {
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"department: "<<department<<endl;
        cout<<"designation: "<<designation<<endl;
    }
};
int main()
{
    Teacher ob[3];
    cout<<"Enter information of three teacher :\n";

    for(int i = 0;i<3;i++)
    {
        int id;
        string n, dp, ds;
        cout<<"Id : ";
        cin>>id;
        cout<<"Name :";
        cin>>n;
        cout<<"department: ";
        cin>>dp;
        cout<<"designation: ";
        cin>>ds;
        ob[i] = Teacher(id, n, dp, ds);
    }
    cout<<"Display information : \n";
    for(int i = 0;i<3;i++)
    {
        ob[i].display();
    }
}

