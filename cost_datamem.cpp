#include<iostream>
using namespace std;
class si
{
    float p;
    int t;
    const float rate;//stored in code area
public:

    si():rate(2.5)
    {

    }


    void get(float p, int t)
    {
        this->p=p;
        this->t=t;
    }
    void put()
    {
        cout<<"si = "<<p*t*rate/100;
    }
};
main()
{
    si s;
    s.get(5000 , 15);
    s.put();
}
