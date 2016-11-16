

#include<iostream>
using namespace std;

class tri
{
   float b, h;
   public:

     tri(float b, float h)
     {
         this->b=b;
         this->h=h;

     }
     ~tri()
     {
         cout<<"area= "<<0.5*b*h;
     }
};
 main()
 {
     tri t(2.5, 7.5);
 }
