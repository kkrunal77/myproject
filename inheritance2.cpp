

//overloading using << & >> operator

#include<iostream>
#include<string.h>
//#include<stdio.h>
using namespace std;

class stu
{
    int id;
    char name[50];
public:
    void get()
    {
        cout<<"Enter id & name ";
        cin>>id>>name;

    }
    void put()
    {
        cout<<"id = "<<id<<endl;
         cout<<"name = "<<name<<endl;
    }

};

class physical:private stu
{
    float h, w;
public:
    void getphy()
    {
        cout<<"enter hight & with "<<endl;
        cin>>h>>w;
    }
    void putphy()
    {
        cout<<"Hight = "<<h<<endl;
        cout<<"Width = "<<w<<endl;
    }
};

 main()
 {
     physical p;
     //p.get();
     p.getphy();
     //p.put();
     p.putphy();
}
