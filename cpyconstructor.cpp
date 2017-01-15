#include<iostream>
using namespace std;

class stu
{
   int x,y;
   public:

     stu(int b, int h)
     {
         this->x=b;
         this->y=h;

     }
     stu(stu &s)
     {
        x=s.x;
        y=s.y;
     }
     void print()
     {
         cout<<"x = "<<x<<endl;
         cout<<"y = "<<y<<endl;
     }
};
 main()
 {
     stu s1(10,10 );
     stu s2(s1);
     s1.print();
     s2.print();

 }
