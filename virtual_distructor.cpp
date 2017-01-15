

#include<iostream>
#include<string>
using namespace std;
 class base
 {
 public:
    virtual ~base()
    {
        cout<<"Base class"<<endl;

    }
 };

class der:public base
{
public:
     ~der()
    {

        cout<<"derived class"<<endl;

    }
};

int main()
{
    base *p=new der;
    delete p;

    return 0;
}
