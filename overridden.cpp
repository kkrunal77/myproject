


//overloading using << & >> operator

#include<iostream>
#include<string.h>
//#include<stdio.h>

using namespace std;

class test1
{
public:
    void print()
    {
        cout<<"base class"<<endl;

    }
};
class test2:public test1
{
public:

    void print()
    {
        test1::print();
        cout<<"Derived class "<<endl;
    }
};

main()
{
    test2 t;
    t.print();
}
