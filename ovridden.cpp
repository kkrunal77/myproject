
#include<iostream>
#include<string>
using namespace std;
 class test1
 {
 public:
    void print()
    {
        cout<<"Base class"<<endl;

    }
 };

class test2:public test1
{
public:
    void print()
    {
        test1::print();
        cout<<"derived class";

    }
};

int main()\
{
    test1 t;
    t.print();
    return 0;
}
