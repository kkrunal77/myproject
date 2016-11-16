
#include<iostream>
using namespace std;

class tri
{
   float b, h;
   public:

     tri()
     {
         b=2.5;
         h=7.5;

     }
     ~tri()
     {
         cout<<"area= "<<0.5*b*h;
     }
};
 main()
 {
     tri t;
 }
