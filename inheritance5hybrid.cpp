



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

class marks:public stu
{
protected:

    int m,p,c;

public:
    void getmarks()
    {
        cout<<"enter 3 marks, m, p , c "<<endl;
        cin>>m>>p>>c;
    }
    void putmarks()
    {
        cout<<"math = "<<m<<endl;
        cout<<"physics = "<<p<<endl;
        cout<<"chemitry = "<<c<<endl;

    }
};

 class sport
 {
 protected:
    int spm;
 public:
    void getspm()
    {
        cout<<"enter sport marks "<<endl;
        cin>>spm;
    }
    void putspm()
    {
        cout<<"sport marks = "<<spm<<endl;
    }
 };

 class results:public marks, public sport
 {
     int total;
     float avg;
 public:
     void show()
     {
         total=m+p+c;
         avg= total/3.0;
         cout<<"total = "<<total<<endl;
         cout<<"avg = "<<avg<<endl;
         cout<<"sport + avg = "<<avg+spm<<endl;
     }
 };
 main()
 {
     results r;
     stu s;
     r.get();
     r.getmarks();
     r.getspm();
     r.put();

     r.putmarks();
     r.putspm();
     r.show();
}
