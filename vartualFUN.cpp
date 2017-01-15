

#include<iostream>
#include<string>
using namespace std;

 class rect
 {
    float b,l;
 public:
    virtual void print()
    {
        cout<<"entr length and width "<<endl;
        cin>>l>>b;
        cout<<"area = "<<l*b<<endl;

    }
 };

class square:public rect
{
    float s;
public:
    void print()
    {

        cout<<"entr square side =";
        cin>>s;
        cout<<"area = "<<s*s<<endl;


    }
};

int main()
{
    rect *p, r;

    square s;
    p=&s;
    //p=&r;


    (*p).print();//p->print();
    p=&r;
    p->print();
    return 0;
}
