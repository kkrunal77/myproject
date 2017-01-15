
#include<iostream>
using namespace std;

class circle
{
    static float pi;
    float r;
 public:
        void get(float r)
        {
           (*this).r=r;
        }
        void put()
        {
            cout<<"Area = "<<pi*r*r<<endl;
        }
};
    float circle :: pi=3.14;//definition of static variable

    main()
    {
        circle c1,c2;
        c1.get(5.5);
        c2.get(7.5);
        c1.put();
        c2.put();

    }
