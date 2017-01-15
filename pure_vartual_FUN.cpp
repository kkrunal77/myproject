#include<iostream>
#include<string>

using namespace std;

 class shape    //base class
 {
protected:

    float t1,t2;
 public:
    virtual float area()=0;  //pure virtual ()

 };

class rect:public shape
{

public:
     void read()
    {

        cout<<"entr rect len, breath =";
        cin>>t1>>t2;

    }

    float area()
    {
        return t1*t2;
    }
};

class tri:public shape
{
public:
    void read()
    {
        cout<<"entr tri base & hight = "<<endl;
        cin>>t1>>t2;
    }
    float area()
    {
        return 0.5*t1*t2;
    }
};
int main()\
{
    rect r;
    tri t;
    r.read();
    t.read();
    cout<<"rect area = "<<r.area()<<endl;
    cout<<"tri area = "<<t.area()<<endl;

    return 0;
}
