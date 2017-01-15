
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class test2;
class test1
{
    int a, b;
public:
    void get()
    {
        cout<<"Enter a value of a&b ";
        cin>>a>>b;

    }
    void put()
    {
        cout<<"a = "<<a<<endl;
         cout<<"b = "<<b<<endl;
    }

friend test1 operator + (test1, test2);

};

class test2
{
       int a, b;
public:
    void get()
    {
        cout<<"Enter a value of a&b ";
        cin>>a>>b;

    }
    void put()
    {
        cout<<"a = "<<a<<endl;
         cout<<"b = "<<b<<endl;
    }

friend test1 operator + (test1, test2);


};

//definition of frnd()
test1 operator + (test1 t1, test2 t2)
{
   test1 t3;

   t3.a=t1.a + t2.a;
   t3.b=t1.b + t2.b;
   return t3;

}

 main()
 {
     test1 t1, t3;
     test2 t2;
     t1.get();
     t2.get();
     t1.put();
     t2.put();
     cout<<"total valve of a & b is "<<endl;
     t3=t1+t2;//t1.big(t2);

     t3.put();

 }
