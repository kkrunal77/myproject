
#include<iostream>
using namespace std;
class si
{

    int a,b;

public:


    void get()
    {
        a=10;
        b=20;
    }
    void put() const
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
main()
{
    si s;
    s.get();
    s.put();
}
